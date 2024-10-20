long long uu_env::native_int_str::NativeStr::split_once::hf2453eda75ffc063(unsigned long long a0[6], struct_0 *a1, unsigned int *a2)
{
    unsigned long long v0[3];  // [bp-0x80]
    char v1;  // [bp-0x70]
    int v2;  // [sp-0x68]
    unsigned long long v3;  // [sp-0x58]
    int v4;  // [sp-0x50]
    unsigned long long v5;  // [sp-0x40]
    unsigned long long v6[3];  // [bp-0x38]
    char v7;  // [bp-0x28]
    unsigned long long v9;  // rax
    unsigned long v10;  // rbx
    char *v12;  // r14

    v9 = *(a2);
    if ((unsigned int)v9 < 128)
    {
        v10 = a1->field_10;
        if (v10)
        {
            v12 = 0;
            do
            {
                if (*((char *)(a1->field_8 + v12)) == (char)v9)
                {
                    uu_env::native_int_str::NativeStr::slice::h001e7abfafd3d5d0(v0, a1, 0, v12);
                    uu_env::native_int_str::NativeStr::slice::h001e7abfafd3d5d0(v6, a1, v12 + 1, v10);
                    v3 = *((long long *)&v1);
                    *((int128_t *)&v2) = *((int128_t *)&v0[0]);
                    v5 = *((long long *)&v7);
                    *((int128_t *)&v4) = *((int128_t *)&v6[0]);
                    *((void*)&a0[0]) = v2;
                    a0[4] = (long long)(&v4)[8];
                    a0[5] = v5;
                    a0[2] = v3;
                    a0[3] = (long long)v4;
                    return a0;
                }
            } while ((v12 += 1, v10 != v12));
        }
    }
    a0[0] = 9223372036854775809;
    return a0;
}
