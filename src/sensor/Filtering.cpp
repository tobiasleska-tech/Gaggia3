#include "Filtering.h"
static float last = 0;
float Filtering::lowpass(float x) {
    last = 0.9f * last + 0.1f * x;
    return last;
}
float Filtering::movingAverage(float x) {
    static float buffer[8];
    static int idx = 0;
    buffer[idx++] = x;
    if(idx>=8) idx=0;
    float sum = 0;
    for(int i=0;i<8;i++) sum+=buffer[i];
    return sum/8.0f;
}
