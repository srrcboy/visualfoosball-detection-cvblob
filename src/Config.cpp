
#include "Config.hpp"

const CvScalar Config::minBallHSV = cvScalar(5, 172, 140);
const CvScalar Config::maxBallHSV = cvScalar(16, 215, 232);

const CvScalar Config::minBlueHSV = cvScalar(109, 203, 0);
const CvScalar Config::maxBlueHSV = cvScalar(179, 255, 255);

const CvScalar Config::minRedHSV = cvScalar(0, 203, 0);
const CvScalar Config::maxRedHSV = cvScalar(9, 255, 255);

const int Config::ballROISize = 200;

const unsigned int Config::minBallBlobSize = 0;
const unsigned int Config::maxBallBlobSize = 2000;

const unsigned int Config::blurSize = 3;
