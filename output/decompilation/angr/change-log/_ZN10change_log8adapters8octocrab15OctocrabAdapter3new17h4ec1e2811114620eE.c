long long change_log::adapters::octocrab::OctocrabAdapter::new(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x378]
    unsigned long long v1;  // [bp-0x368]
    unsigned long long v2;  // [bp-0x358]
    unsigned long long v3;  // [bp-0x350]
    unsigned long long v4;  // [bp-0x348]
    void* v5;  // [bp-0x2d8]
    unsigned long long v6;  // [bp-0x2d0]
    uint128_t v7;  // [bp-0x2c8]
    unsigned long long v8;  // [bp-0x2b8]
    void* v9;  // [bp-0x2b0]
    unsigned int v10;  // [bp-0x2a0]
    unsigned int v11;  // [bp-0x290]
    unsigned int v12;  // [bp-0x280]
    char v13;  // [bp-0x278]
    char v14;  // [bp-0x220]
    void* v15;  // [bp-0x1c8]
    char v16;  // [bp-0x1b8]
    char v17;  // [bp-0x1a8]

    v2 = 1;
    v3 = 3;
    v4 = 2;
    v5 = 0;
    v6 = 8;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    v10 = 0x3b9aca00;
    v11 = 0x3b9aca00;
    v12 = 0x3b9aca00;
    v13 = 3;
    v14 = 3;
    v15 = 0;
    v16.to_vec(a1, a2);
    v1 = *((long long *)&v17);
    memcpy(&v0, &v16, 16);
    v16.personal_token(&v2, &v0);
    v2.build(&v16);
    a0.unwrap(&v2);
    return a0;
}
