#include<iostream>
#include<cstdio>
#include<utility>
#include<algorithm>
using namespace std;
typedef pair<int,int> Time;

struct Schedule_item{
  Time start;
  Time end;
};

bool cmp( Schedule_item a, Schedule_item b ){
  if( a.start.first < b.start.first ) return true;
  else if( a.start.first == b.start.first && a.start.second < b.start.second ) return true;
  return false;
}

int main(){
  Time time1, time2, now, nap;
  int minutes, num, day = 1, sc_index;
  string s;
  Schedule_item *sc;

  while( scanf( "%d", &num ) != EOF ){
    now.first = 10;
    now.second = 0;
    minutes = 0;
    sc_index = 0;
    sc = new Schedule_item [num+5];

    for( int i = 0 ; i < num ; i++ ){
      scanf( "%d:%d %d:%d", &time1.first, &time1.second, &time2.first, &time2.second );
      getline( cin, s );
      sc[sc_index].start = time1;
      sc[sc_index++].end = time2;
    }

    sort( sc, sc+num, cmp );

    for( int i = 0 ; i < num ; i++ ){
      if( sc[i].start.first > now.first || (sc[i].start.first == now.first && sc[i].start.second > now.second ) ){
        if( (sc[i].start.first - now.first) * 60 + (sc[i].start.second - now.second) > minutes ){
          minutes = (sc[i].start.first - now.first) * 60 + (sc[i].start.second - now.second);
          nap.first = now.first;
          nap.second = now.second;
        }
      }

      now.first = sc[i].end.first;
      now.second = sc[i].end.second;
    }

    if( (18 - now.first) * 60 + (0 - now.second) > minutes ){
      minutes = (18 - now.first) * 60 + (0 - now.second);
      nap.first = now.first;
      nap.second = now.second;
    }


    printf( "Day #%d: the longest nap starts at %02d:%02d and will last for ", day++, nap.first, nap.second );
    if( minutes >= 60 )
      printf( "%d hours and ", minutes/60 );
    printf( "%d minutes.\n", minutes%60 );
  }

  return 0;
}
