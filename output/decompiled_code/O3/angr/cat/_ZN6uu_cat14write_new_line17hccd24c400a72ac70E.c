long long uu_cat::write_new_line::hccd24c400a72ac70(unsigned long long a0[2], unsigned long long a1, char a2[5], struct_0 *a3, unsigned int a4)
{
    unsigned long v0;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xa0]
    void* v2;  // [sp-0x98], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0x90]
    void* v4;  // [sp-0x88]
    unsigned long long v5;  // [sp-0x80]
    char v6;  // [sp-0x78]
    struct_0 *v7;  // [sp-0x70]
    unsigned long long v8;  // [sp-0x68]
    unsigned long v9;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x58]
    struct struct_0 **v11;  // [sp-0x50]
    unsigned long long v12;  // [sp-0x48]
    unsigned long long v13;  // [sp-0x40]
    unsigned long long v14;  // [sp-0x38]
    unsigned long long v16;  // rax
    unsigned long long v17;  // r8
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rcx
    unsigned long long v20;  // r8
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rcx

    if (!a3->field_9)
    {
        v16 = a3->field_8;
        if (!(char)v16 || !a2[0] || !a3->field_a)
        {
            a3->field_a = 1;
            if ((char)v16 && a2[4] == 2)
            {
                v7 = a3;
                v8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v0 = 2;
                v2 = 0;
                v3 = 6;
                v4 = 0;
                v5 = 32;
                v6 = 3;
                v9 = &g_519140;
                v10 = 2;
                v13 = &v0;
                v14 = 1;
                v11 = &v7;
                v12 = 1;
                v16 = std::io::Write::write_fmt::h48dffa1e1263a8c7(a1, &v9);
                if (v16)
                {
                    a0[0] = 0x8000000000000000;
                    a0[1] = v16;
                    return v16;
                }
                a3->field_0 = a3->field_0 + 1;
            }
            if (a2[2])
            {
                v20 = a4;
                v21 = "$\n";
                v22 = 2;
            }
            else
            {
                v20 = a4;
                v21 = "\n: ";
                v22 = 1;
            }
            uu_cat::write_end_of_line::h7aa5fe7961908d2f(&v0, a1, v21, v22, v20);
            v16 = v0;
            if (v16 != 9223372036854775814)
            {
                *((int128_t *)&a0[1]) = *((int128_t *)&v1);
                a0[0] = v16;
                return v16;
            }
        }
    }
    else
    {
        if (!a2[2])
        {
            v16 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a1, "\r", 1);
            if (v16)
            {
                a0[0] = 0x8000000000000000;
                a0[1] = v16;
                return v16;
            }
            a3->field_9 = 0;
            v17 = a4;
            v18 = "\n: ";
            v19 = 1;
        }
        else
        {
            v16 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a1, "^M", 2);
            if (v16)
            {
                a0[0] = 0x8000000000000000;
                a0[1] = v16;
                return v16;
            }
            a3->field_9 = 0;
            v17 = a4;
            v18 = "$\n";
            v19 = 2;
        }
        v16 = uu_cat::write_end_of_line::h7aa5fe7961908d2f(&v0, a1, v18, v19, v17);
        if (v0 != 9223372036854775814)
        {
            v16 = v2;
            a0[1] = v16;
            *((int128_t *)&a0[0]) = *((int128_t *)&v0);
            return v16;
        }
    }
    a0[0] = 9223372036854775814;
    return v16;
}
