#pragma once

class ProfileEngine {
public:
    static void loadProfiles();
    static void selectProfile(int n);
    static float getPressureTarget(float time_s);
    static float getFlowTarget(float time_s);
};
