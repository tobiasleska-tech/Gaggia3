#pragma once
class FlowController {
public:
    static void begin();
    static void loop();
    static void setTarget(float ml_per_s);
    static float getTarget();
};
