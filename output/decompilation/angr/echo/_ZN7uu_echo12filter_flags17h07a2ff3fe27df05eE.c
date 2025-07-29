long long uu_echo::filter_flags(unsigned long a0, int a1[17])
{
    unsigned short v0;  // [bp-0xd2]
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    void* v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    unsigned long long v6;  // [bp-0xa8]
    struct_0 *v7;  // [bp-0x98]
    char v8;  // [bp-0x90]
    unsigned long long v9;  // [bp-0x80]
    char v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x68]
    int v12;  // [bp-0x58]
    int v13;  // [bp-0x48]
    unsigned long long v15;  // rdx

    v10.size_hint((long long)a1[8], (long long)a1[24]);
    v1 = *((long long *)&v10).with_capacity_in();
    v2 = v15;
    v3 = 0;
    v0 = 1;
    v8.next(a1);
    if (!((char)(((0 ^ *((long long *)&v8)) & (0 ^ -(*((long long *)&v8)))) >> 63)))
    {
        do
        {
            memcpy(&v4, &v8, 16);
            v6 = v9;
            if (!(char)uu_echo::is_flag(v5, v9, &v0))
            {
                v11 = v6;
                memcpy(&v10, &v4, 16);
                v1.push(&v10);
                break;
            }
            ::0x4797f0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v4);
            v8.next(a1);
        } while (*((long long *)&v8) != 0x8000000000000000);
    }
    *((int128_t *)&v12) = (int128_t)a1[0];
    *((int128_t *)&v13) = (int128_t)a1[16];
    v1.spec_extend(&v12);
    v7->field_10 = 0;
    v7->field_0 = *((int128_t *)&v1);
    v7->field_18 = v0;
    return v0;
}
