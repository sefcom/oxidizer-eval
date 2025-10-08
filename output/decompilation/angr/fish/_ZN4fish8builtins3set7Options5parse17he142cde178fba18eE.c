void fish::builtins::set::Options::parse(char *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3[2305843009213693952], unsigned long long a4, unsigned long long a5, struct_0 *a6)
{
    char v0;  // [bp-0x151]
    char v1;  // [bp-0x150]
    char v2;  // [bp-0x14f]
    char v3;  // [bp-0x14e]
    char v4;  // [bp-0x14d]
    char v5;  // [bp-0x14c]
    char v6;  // [bp-0x14b]
    char v7;  // [bp-0x14a]
    char v8;  // [bp-0x149]
    void* v9;  // [sp-0x148], Other Possible Types: char
    char v10;  // [bp-0x147]
    char v11;  // [sp-0x146]
    char v12;  // [sp-0x145]
    char v13;  // [sp-0x144]
    void* v14;  // [bp-0x143], Other Possible Types: char
    char v15;  // [sp-0x142]
    char v16;  // [sp-0x141]
    char v17;  // [sp-0x140]
    char v18;  // [bp-0x13f]
    char v19;  // [bp-0x13e]
    char v20;  // [bp-0x13d]
    char v21;  // [sp-0x13c]
    char v22;  // [bp-0x13b], Other Possible Types: unsigned int
    char v23;  // [bp-0x13a]
    char v24;  // [sp-0x139]
    char v25;  // [bp-0x138]
    char v26;  // [sp-0x137]
    void* v27;  // [bp-0x130]
    unsigned long v28;  // [bp-0x128]
    unsigned int v29;  // [bp-0x104]
    unsigned int v30;  // [bp-0x100]
    unsigned int v31;  // [bp-0xfc]
    unsigned int v32;  // [bp-0xf8]
    unsigned int v33;  // [bp-0xf4]
    void* v34;  // [bp-0xe8]
    unsigned long long v35;  // [bp-0xe0]
    void* v36;  // [bp-0xd8]
    unsigned long long v37[2305843009213693952];  // [bp-0xd0]
    unsigned long long v38;  // [bp-0xc8]
    unsigned long long v39;  // [bp-0xc0]
    unsigned long long v40;  // [bp-0xb8]
    unsigned long long v41;  // [bp-0xb0]
    unsigned long long v42;  // [bp-0xa8]
    unsigned long long v43;  // [bp-0xa0]
    uint128_t v44;  // [bp-0x98]
    void* v45;  // [bp-0x80]
    uint128_t v46;  // [bp-0x78]
    unsigned int v47;  // [bp-0x68]
    unsigned short v48;  // [bp-0x64]
    char v49;  // [bp-0x62]
    unsigned long long v50;  // [bp-0x60]
    unsigned long long v51;  // [bp-0x58]
    unsigned long long v52;  // [bp-0x50]
    uint128_t v53;  // [bp-0x48]
    char *v54;  // rdi
    unsigned int v55;  // ecx
    char v56;  // r13b
    char v57;  // r14b
    unsigned long v58;  // rbp
    unsigned int v59;  // eax
    unsigned long v62;  // rax
    unsigned long v63;  // r14
    void* v66;  // r14
    unsigned long long v67;  // r14
    unsigned long long v68;  // rbp
    unsigned long v69;  // rbx

    v14 = 0;
    v9 = 0;
    *((char **)&v22) = &g_1000001;
    v26 = 0;
    v37[0] = a3;
    v38 = a4;
    v39 = "+";
    v40 = 15;
    v41 = &g_14cc648;
    v42 = 17;
    v43 = 4;
    v44 = 0;
    v45 = 0;
    v47 = 63;
    v49 = 1;
    v48 = 0;
    v34 = 0;
    v46 = 0;
    v35 = 8;
    v36 = 0;
    v0 = v14;
    v1 = v21;
    v2 = v24;
    v3 = v16;
    v5 = v9;
    v4 = v11;
    v6 = v13;
    v7 = v12;
    v33 = v7 & 0xffffff00 | 1;
    v32 = 0;
    v8 = v15;
    v54 = &v34;
    v55 = 0;
    v31 = 0;
    v30 = 0;
    v29 = 0;
    while (true)
    {
        v58 = v55;
        v59 = v54.next_opt();
        if (v59 == 0x110000)
        {
            v17 = v56;
            v14 = v0;
            v21 = v1;
            v24 = v2;
            v16 = v3;
            v11 = v4;
            v9 = v5;
            v13 = v6;
            v12 = v7;
            v15 = v8;
            v10 = v57;
            v25 = 1;
            v22 = v33;
            v20 = v29;
            v26 = v30;
            v19 = v31;
            v18 = v58;
            if (((char)v32 & 1))
            {
                fish::builtins::shared::builtin_print_help(a5, a6, a1, a2);
                *(a0) = 2;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v34);
                return;
            }
            else if (((char)v9.validate(a1, a2, a4, v45, a5, a6->field_10) & 1))
            {
                *((unsigned int *)&v27[4]) = 2;
                *((char *)v27) = 3;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v34);
                return;
            }
            else
            {
                *((short *)&v27[16]) = *((short *)&v25);
                *((int128_t *)v27) = *((int128_t *)&v9);
                *((void* *)&v27[24]) = v45;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v34);
                return;
            }
        }
        switch (v59)
        {
        case 1:
            continue;
        case 2:
            v31 = (unsigned int)v62 & 0xffffff00 | 1;
            v55 = v58;
            continue;
        case 3:
            v30 = (unsigned int)v62 & 0xffffff00 | 1;
            v55 = v58;
            continue;
        case 58:
            v17 = v56;
            v14 = v0;
            v21 = v1;
            v24 = v2;
            v16 = v3;
            v11 = v4;
            v9 = v5;
            v13 = v6;
            v12 = v7;
            v15 = v8;
            v63 = v45 - 1;
            if (v45 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cc7e0); /* do not return */
            }
            else if (v63 < a4)
            {
                fish::builtins::shared::builtin_missing_argument(a5, a6, a1, a2, a3[2 * v63], a3[1 + 2 * v63], 0);
                *((unsigned int *)&v27[4]) = 2;
                *((char *)v27) = 3;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v34);
                return;
            }
            else
            {
                core::panicking::panic_bounds_check(v63, a4, &g_14cc7f8); /* do not return */
            }
        case 59:
            v17 = v56;
            v14 = v0;
            v21 = v1;
            v24 = v2;
            v16 = v3;
            v11 = v4;
            v9 = v5;
            v13 = v6;
            v12 = v7;
            v15 = v8;
            v63 = v45 - 1;
            if (v45 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cc810); /* do not return */
            }
            else if (v63 < a4)
            {
                fish::builtins::shared::builtin_unexpected_argument(a5, a6, a1, a2, a3[2 * v63], a3[1 + 2 * v63], 0);
                *((unsigned int *)&v27[4]) = 2;
                *((char *)v27) = 3;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v34);
                return;
            }
            else
            {
                core::panicking::panic_bounds_check(v63, a4, &g_14cc828); /* do not return */
            }
        case 63:
            v17 = v56;
            v14 = v0;
            v21 = v1;
            v24 = v2;
            v16 = v3;
            v11 = v4;
            v9 = v5;
            v13 = v6;
            v12 = v7;
            v15 = v8;
            v66 = v45;
            v63 = v66 - 1;
            if (v66 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cc840); /* do not return */
            }
            else if (v63 < v28)
            {
                v67 = v63 * 16;
                if (*((long long *)((char *)a3 + v67)).starts_with(*((long long *)(8 + (char *)a3 + v67)), "-o", 2))
                {
                    v68 = a6->field_10;
                    v68.appendln("F", 65);
                    if (v66 < v28)
                    {
                        v69 = v66 * 16;
                        if (*((long long *)((char *)a3 + v69)).eq_by(*((long long *)((char *)a3 + v69)) + *((long long *)(8 + (char *)a3 + v69)) * 4, "vied?", "ed?"))
                        {
                            v68.appendln("T", 46);
                            goto LABEL_0x1368a7a;
                        }
                        else if (*((long long *)(v69 + (char *)a3)).eq_by(*((long long *)(v69 + (char *)a3)) + *((long long *)(8 + v69 + (char *)a3)) * 4, "ed?", "?"))
                        {
                            v68.append("?", 6);
                            goto LABEL_1368a7a;
                        }
                    }
                }
            }
            else
            {
                core::panicking::panic_bounds_check(v63, a4, &g_14cc858); /* do not return */
            }
        case 76:
            v33 = 0;
            v55 = v58;
            continue;
        case 83:
            v57 = 1;
            break;
        case 85:
            v29 = (unsigned int)v62 & 0xffffff00 | 1;
            v55 = v58;
            continue;
        case 97:
            v23 = 1;
            v55 = v58;
            continue;
        case 101:
            v8 = 1;
            break;
        case 102:
            v7 = 1;
            v55 = v58;
            continue;
        case 103:
            v6 = 1;
            v55 = v58;
            continue;
        case 104:
            v5 = 1;
            v32 = (unsigned int)v62 & 0xffffff00 | 1;
            v55 = v58;
            continue;
        case 108:
            v4 = 1;
            v55 = v58;
            continue;
        case 110:
            v3 = 1;
            break;
        case 112:
            v2 = 1;
            v55 = v58;
            continue;
        case 113:
            v1 = 1;
            break;
        case 117:
            v56 = 1;
            v55 = v58;
            continue;
        case 120:
            v0 = 1;
            v55 = v58;
        default:
            v17 = v56;
            v14 = v0;
            v21 = v1;
            v24 = v2;
            v16 = v3;
            v11 = v4;
            v9 = v5;
            v13 = v6;
            v12 = v7;
            v15 = v8;
            v50 = &g_14c60b8;
            v51 = 1;
            v52 = 8;
            v53 = 0;
            core::panicking::panic_fmt(&v50, &g_14cc870); /* do not return */
        }
        continue;
        v55 = v58;
    }
LABEL_1368a7a:
    fish::builtins::shared::builtin_unknown_option(a5, a6, a1, a2, *((long long *)((char *)a3 + v67)), *((long long *)(8 + (char *)a3 + v67)), 0);
    *((unsigned int *)&v27[4]) = 2;
    *((char *)v27) = 3;
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v34);
    return;
}
