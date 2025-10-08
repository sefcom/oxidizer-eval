long long fish::builtins::random::random(unsigned long long a0, unsigned long long a1[3], unsigned long long a2[2305843009213693951], unsigned long long a3)
{
    unsigned long v0;  // [bp-0x158]
    void* v18;  // [bp-0xb8]
    unsigned long long v19;  // [bp-0xb0]
    void* v20;  // [bp-0xa8]
    unsigned long long v21[2305843009213693951];  // [bp-0xa0]
    unsigned long long v22;  // [bp-0x98]
    unsigned long long v23;  // [bp-0x90]
    unsigned long long v24;  // [bp-0x88]
    unsigned long long v25;  // [bp-0x80]
    unsigned long long v26;  // [bp-0x78]
    unsigned long long v27;  // [bp-0x70]
    uint128_t v28;  // [bp-0x68]
    void* v29;  // [bp-0x50]
    uint128_t v30;  // [bp-0x48]
    unsigned int v31;  // [bp-0x38]
    unsigned short v32;  // [bp-0x34]
    char v33;  // [bp-0x32]
    unsigned long v35;  // r15
    unsigned int v36;  // eax

    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14cb880); /* do not return */
    v35 = a2[0];
    v0 = a2[1];
    v21[0] = a2;
    v22 = a3;
    v23 = "+";
    v24 = 2;
    v25 = &g_14c60a0;
    v26 = 1;
    v27 = 4;
    v28 = 0;
    v29 = 0;
    v31 = 63;
    v33 = 1;
    v32 = 0;
    v18 = 0;
    v30 = 0;
    v19 = 8;
    v20 = 0;
    v36 = v18.next_opt();
}
