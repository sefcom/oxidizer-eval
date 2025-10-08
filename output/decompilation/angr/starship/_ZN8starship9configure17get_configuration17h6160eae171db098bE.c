long long starship::configure::get_configuration(void* a0)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    void* v3;  // [bp-0x60], Other Possible Types: char
    int v4;  // [bp-0x58]
    int v5;  // [bp-0x48]
    int v6;  // [bp-0x38]
    int v7;  // [bp-0x28]
    char v8;  // [bp-0x18]
    void* v11;  // rsi
    void* v12;  // rax
    unsigned long long v13;  // rax
    unsigned long v14;  // rdx

    v0.get_config_path_os();
    v11 = 0;
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
        v11 = v1;
    v3.initialize(v11, v2);
    v0.drop_in_place<core::option::Option<gix_ref::FullName>>();
    v12 = v3;
    if (v3 == 0x8000000000000000)
    {
        v13 = std::thread::local::LocalKey<T>::with();
        *((unsigned long long *)&a0[8]) = 8;
        *((unsigned long long *)&a0[16]) = 0;
        *((uint128_t *)&a0[24]) = g_11ed458;
        *((uint128_t *)&a0[40]) = g_11ed468;
        *((unsigned long long *)&a0[56]) = v13;
        *((unsigned long *)&a0[64]) = v14;
        *((unsigned short *)&a0[72]) = 0;
        *((char *)&a0[74]) = 0;
        v12 = 0;
    }
    else
    {
        *((long long *)&a0[72]) = *((long long *)&v8);
        a0[56] = v7;
        a0[40] = v6;
        a0[24] = v5;
        a0[8] = v4;
    }
    *((void* *)a0) = v12;
    return a0;
}
