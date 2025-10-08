long long uu_env::native_int_str::NativeStr::split_once(void* a0, unsigned long long a1[3], unsigned int *a2)
{
    int v0;  // [bp-0x88], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    char v3;  // [bp-0x70], Other Possible Types: unsigned long
    unsigned long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    int v6;  // [bp-0x58], Other Possible Types: char
    unsigned long long v7;  // [bp-0x48]
    char v8;  // [bp-0x40]
    char v9;  // [bp-0x30]
    unsigned long long v11;  // rdx

    if ((uu_env::native_int_str::get_single_native_int_value(a2) & 1))
    {
        v0 = a1[1];
        v1 = a1[1] + a1[2];
        if (((char)v0.position(&vvar_56{reg 32}) & 1))
        {
            v6.slice(a1, 0, v11);
            v8.slice(a1, v11 + 1, a1[2]);
            v2 = v7;
            v0 = v6;
            v5 = *((long long *)&v9);
            memcpy(&v3, &v8, 16);
            *(a0) = v6;
            *((unsigned long *)&a0[32]) = v4;
            *((unsigned long long *)&a0[40]) = v5;
            *((unsigned long long *)&a0[16]) = v2;
            *((unsigned long *)&a0[24]) = v3;
            return a0;
        }
    }
    *((unsigned long long *)a0) = 9223372036854775809;
    return a0;
}
