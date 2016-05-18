#include "pen.h"
#include "fountain.h"
#include "rbp.h"
using namespace std;

void WriteWithPen(Pen &pen) {
std::cout << pen.drawLine() << std::endl;
std::cout << pen.drawCircle() << std::endl;
}

int main() {
FountainPen fp;
WriteWithPen(fp);
RollerBallPen rbp("A Pen that Uses a Roller Ball");
WriteWithPen(rbp);
Pen pen;
WriteWithPen(pen);
return 0;
}
