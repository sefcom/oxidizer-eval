long long uu_fmt::parasplit::FileLines::compute_indent::h529c753ab585a13c(unsigned long long a0[3], struct_0 *a1, char a2[4], unsigned long a3, unsigned long a4)
{
    unsigned long long v0;  // [sp-0x38]
    unsigned long v2;  // rax
    void* v3;  // r14
    void* v4;  // rax
    void* v5;  // r15
    char v6[4];  // 4096
    char v7[4];  // r10
    unsigned long long v8;  // cc_ndep
    unsigned long long v9;  // rcx
    char v10[4];  // r13
    unsigned int v11;  // edx
    unsigned int v12;  // ebx
    unsigned int v13;  // r11d
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rcx
    unsigned int v17;  // edx
    unsigned long long v18;  // rax
    char *v19;  // r11
    char *v20;  // rbx
    unsigned int v21;  // ecx

    v0 = v2;
    if (!a3)
    {
        v4 = 0;
        v5 = 0;
        v3 = 0;
        goto LABEL_489755;
    }
    else
    {
        v3 = 0;
        v4 = 0;
        v5 = 0;
        while (true)
        {
            v7 = v6;
            v9 = v7[0];
            if ((char)v9 >= 0)
            {
                v10 = &v7[1];
            }
            else
            {
                v11 = (unsigned int)v9 & 31;
                v12 = v7[1] & 63;
                if ((v9 & 255) <= 223)
                {
                    v10 = &v7[2];
                    v9 = v11 * 64 | v12;
                }
                else
                {
                    v13 = v7[2] & 63 | v12 * 64;
                    if ((v9 & 255) < 240)
                    {
                        v10 = &v7[3];
                        v9 = v13 | v11 * 0x1000;
                    }
                    else
                    {
                        v10 = v7 + 1;
                        v9 = v7[3] & 63 | v13 * 64 | (v11 & 7) * 0x40000;
                    }
                }
            }
            v3 = v14;
            if (!((char)amd64g_calculate_condition(2, 8, v5, a4, v8)))
            {
                v15 = 1;
                if ((unsigned int)v9 == 32)
                    goto LABEL_489560;
                if ((unsigned int)(v9 - 9) >= 5)
                {
                    if ((unsigned int)v9 < 128)
                        goto LABEL_489755;
                    v17 = (unsigned int)v9 >> 8;
                    switch (v17)
                    {
                    case 32:
                        break;
                    case 48:
                        break;
                    case 0:
                        break;
                    case 22:
                        goto LABEL_4896bf;
                    default:
LABEL_489755:
                        a0[0] = v5;
                        a0[1] = v3;
                        a0[2] = v4;
                        return v4;
                    }
LABEL_4896bf:
                    if (!(unsigned int)v9 == 5760)
                        goto LABEL_489755;
LABEL_4896ca:
                    v15 = 1;
                    if ((unsigned int)v9 >= 160)
                    {
                        v19 = (unsigned int)v9 >> 6 & 127 | (&_ZN13unicode_width6tables9charwidth8TABLES_017h1b101a7ffe1c1f8dE)[(unsigned int)v9 >> 13] * 128;
                        if ((unsigned int)v19 > 2431)
                            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                        v20 = (unsigned int)v9 >> 2 & 15 | *((char *)(&_ZN13unicode_width6tables9charwidth8TABLES_117h15d9b3c7cb0d7f34E + v19)) * 16;
                        if ((unsigned int)v20 >= 3808)
                            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                        v21 = (((char)(*((char *)(&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v20)) >> ((char)v9 << 1 & 6 & 31)) & 3) == 3 ? 1 : (char)(*((char *)(&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v20)) >> ((char)v9 * 2 & 6 & 31)) & 3);
                        v15 = v21;
                    }
LABEL_489560:
                    v4 += v15;
                    goto LABEL_489563;
                }
            }
            if (!((unsigned int)v9 == 9))
                goto LABEL_4896ca;
            v16 = a1->field_40;
            if (!v16)
                core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
            v18 = (!(v4 | v16) >> 32 ? (0 CONCAT v4) /m v16 : (0 CONCAT (unsigned int)v4) /m (unsigned int)v16 & 4294967295);
            v8 = amd64g_calculate_rflags_c(19, 0, 0, v8);
            v4 = v16 * (v18 + 1);
LABEL_489563:
            v5 = v5 - v7 + (char *)v10;
            if (v10 == &a2[a3])
            {
                v5 = 0;
                goto LABEL_489755;
            }
        }
    }
}
