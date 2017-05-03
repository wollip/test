#include <unistd.h>

#include "progressBar/progressBar.h"

namespace progressBar
{

Progress_Bar::Progress_Bar( int width )
{
  this->width = width;
  progress(0);
}

Progress_Bar::~Progress_Bar()
{
}

void Progress_Bar::print(std::string s)
{
  std::cout << "\r";
  std::cout.flush();
  std::string clear = " ";
  for(int i = s.length() ; i < width ; ++i ) clear += " ";
  std::cout << s << clear << "\n" << bar;
  std::cout.flush();
}

void Progress_Bar::progress( double percentage )
{
  bar = "[";
  int pos = width * percentage;
  for( int i = 0; i < width; ++i)
  {
    if(i < pos) bar += "-";
    else if( i == pos ) bar += ">";
    else bar += " ";
  }
  std::cout << "\r";
  std::cout.flush();
  std::cout << bar;
  std::cout.flush();
}
} // namespace progressBar

int main(void)
{
  double p = 0.0;
  progressBar::Progress_Bar bar;

  while(p < 1.0)
  {
    bar.progress(p);
    usleep( 1000000 );
    bar.print("hello");
    p += 0.1;
    usleep( 1000000 );
  }
}
