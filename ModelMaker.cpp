#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <fstream>

using namespace std;
using namespace cv;

int main(int argc, char ** argv){
    Mat src,src_gry,blur_gry;
    const char *window_name = "source image";
    const char *gray_window = "gray image";
    const char *blur_window = "blur image";
    
    const char * testImageName = "../../test_images/test.jpg";
    src = cv::imread(testImageName);
    cvtColor(src, src_gry, COLOR_BGR2GRAY);
    Size blurSize = Size(3,3);
    blur(src_gry, blur_gry, blurSize);
    
    namedWindow(window_name,WINDOW_AUTOSIZE);
    imshow(window_name, src);
    imshow(gray_window, src_gry);
    imshow(blur_window, blur_gry);
    
    waitKey();
    return EXIT_SUCCESS;
}