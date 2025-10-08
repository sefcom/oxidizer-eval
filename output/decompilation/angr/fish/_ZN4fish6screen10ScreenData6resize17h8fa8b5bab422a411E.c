void fish::screen::ScreenData::resize(unsigned long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    uint128_t v2;  // [bp-0x18]
    char v3;  // [bp-0x8]

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = 0;
    a0 + 16.resize(a1, &v0);
    return;
}
