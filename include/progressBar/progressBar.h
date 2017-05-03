#ifndef  PROGRESSBAR_H
#define PROGRESSBAR_H

#include <iostream>
#include <string>

namespace progressBar
{

class Progress_Bar
{

private:

int width;
std::string bar;

public:
Progress_Bar( int width = 100 );
~Progress_Bar();

void print(std::string s);
void progress(double percentage);

}; // class Progres_Bar

} // namespace progressBar

#endif // PROGRESSBAR_H
