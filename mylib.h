#include "opencv2/opencv.hpp" 
#include <string.h> 
using namespace cv;
using namespace std;
void imshowGrayHistogram(const Mat &src,const string &windowName,int nHistWidth=255 ,int nHistHeight=255);
void imshowRGBHistogram(const Mat &src,const string &windowName,int nHistWidth=255 ,int nHistHeight=255); 
