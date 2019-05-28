/*
Código fonte para teste de #include das bibliotes
openCV e DCMTK.
*/
#include <iostream>
#include <stdio.h>

#include "opencv/cv.h";
#include "opencv/highgui.h";
#include "opencv2/highgui/highgui.hpp";
#include "opencv2/imgproc/imgproc.hpp";
#include "opencv2/core/core.hpp";

using namespace std;
using namespace cv;

int main(int argc, char **argv) {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Mat img = imread("cube.png",1);
	//imshow("Win", img);

	IplImage* image = cvLoadImage("cube.png", CV_LOAD_IMAGE_COLOR);

	cvNamedWindow("Janela", CV_WINDOW_AUTOSIZE);
	cvShowImage("Janela", image);

	waitKey(0);
	system("pause");
	return 0;

}