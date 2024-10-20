long long uu_pr::open::h7cbafcee48eaed65(unsigned long long a0[4], char *a1, unsigned long a2)
{
    void* v0;  // [sp-0xf8]
    char v1;  // [bp-0xf0]
    char v2;  // [bp-0xec]
    char v3;  // [bp-0xe8]
    char v4;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0xd8], Other Possible Types: char
    unsigned short v6;  // [sp-0xd4]
    char v7;  // [bp-0xa8]
    unsigned long long *v10;  // rax
    unsigned long long v11;  // r15
    unsigned int v12;  // ebp
    unsigned long long v13;  // r13
    unsigned long long v14;  // rdi
    unsigned long long v15;  // r15
    unsigned long long v16;  // rax
    unsigned long long v19;  // rbp
    unsigned long long v21;  // rax
    unsigned long long v22;  // 4096
    unsigned long long v24;  // r12

    if (a2 == 1 && *(a1) == 45)
    {
        v10 = __rust_alloc(8, 8);
        if (v10)
        {
            *(v10) = std::io::stdio::stdin::h7215cc131abb55d8();
            a0[1] = v10;
            a0[2] = &g_68ec30;
            a0[0] = 9223372036854775813;
            return a0;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v4, a1, a2);
    if (*((int *)&v4) == 2)
    {
        v11 = *((long long *)&v5);
        if (!a2)
        {
            memcpy(&g_1, a1, a2);
            a0[0] = 9223372036854775812;
            a0[1] = a2;
            a0[2] = &g_1;
            a0[3] = a2;
            ::0x53c210::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h78962673433632df(v11);
            return a0;
        }
        if (a2 < 0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v13 = __rust_alloc(a2, 1);
        if (v13)
        {
            memcpy(v13, a1, a2);
            a0[0] = 9223372036854775812;
            a0[1] = a2;
            a0[2] = v13;
            a0[3] = a2;
            ::0x53c210::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h78962673433632df(v11);
            return a0;
        }
    }
    v12 = *((int *)&v7);
    if (!a2)
    {
        v14 = &g_1;
        goto LABEL_547218;
    }
    else
    {
        if (a2 < 0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v14 = __rust_alloc(a2, 1);
        if (v14)
        {
LABEL_547218:
            v15 = 9223372036854775813;
            v0 = v14;
            memcpy(v0, a1, a2);
            v16 = 0x8000000000000000;
            switch ((v12 & 0xf000) - 0x1000 >> 12)
            {
            case 3:
                v16 = 9223372036854775810;
                goto LABEL_54730a;
            case 7: case 9:
                v4 = 0x1b600000000;
                v5 = 0;
                v6 = 0;
                *((unsigned int **)&v5) = &g_1;
                std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v1, &v4, a1, a2);
                if (!*((int *)&v1))
                {
                    v21 = __rust_alloc(4, 4);
                    if (!v21)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    *((int *)v21) = *((int *)&v2);
                    v24 = &g_68ec88;
                    if (!a2)
                    {
                        break;
                    }
                    else
                    {
                        __rust_dealloc(v0);
                        break;
                    }
                }
                else
                {
                    v19 = *((long long *)&v3);
                    if (!a2)
                    {
                        v21 = &g_1;
                        memcpy(&g_1, a1, a2);
                        break;
                    }
                    else
                    {
                        v21 = __rust_alloc(a2, 1);
                        if (!v21)
                            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                        memcpy(v21, a1, a2);
                        __rust_dealloc(v0);
                        break;
                    }
                }
            case 11:
                v16 = 9223372036854775811;
LABEL_54730a:
LABEL_547315:
                v0 = v0;
                break;
            default:
                goto LABEL_547315;
            }
            a0[0] = 0;
            a0[1] = v21;
            a0[2] = 0;
            a0[3] = v22;
            return a0;
        }
    }
}
