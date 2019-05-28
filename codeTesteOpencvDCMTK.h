/*
Código fonte para teste de #include das bibliotes
openCV e DCMTK.
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "opencv/cv.h"
#include "opencv/highgui.h"

using namespace cv;
using namespace std;

IplImage * img;	
Mat image; 		
int main(int argc, char **argv) {

	img = cvLoadImage("C:\\Users\\Roger\\workspaceCpp\\topico01\\ecube.jpg", CV_LOAD_IMAGE_COLOR); 
	image = imread("C:\\Users\\Roger\\workspaceCpp\\topico01\\ecube.jpg", CV_LOAD_IMAGE_COLOR);

	cvNamedWindow("Janela", CV_WINDOW_AUTOSIZE);
	cvShowImage("Janela", img);


	namedWindow("Windows", CV_WINDOW_AUTOSIZE); 
	imshow("Windows", image); 

	cvSaveImage("C:\\Users\\Roger\\workspaceCpp\\topico01\\ecube_ipl.jpg", img);
	imwrite("C:\\Users\\Roger\\workspaceCpp\\topico01\\ecube_mat.jpg", image);

	waitKey(0);
	//system("pause");
	cout << "Fim do mainn" << endl;
	return 0;

}
