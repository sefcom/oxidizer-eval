long long fish::builtins::command::command(unsigned long long a0, struct_0 *a1, unsigned long long a2[2305843009213693951], unsigned long long a3)
{
    unsigned long v0;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    unsigned long long v3;  // [bp-0x118]
    unsigned long long v4;  // [bp-0x110]
    unsigned long long v5;  // [bp-0x110]
    unsigned long long v6;  // [bp-0x108]
    unsigned long long v7[2305843009213693951];  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xf8]
    unsigned long long v9;  // [bp-0xf0]
    void* v10;  // [bp-0xe8]
    void* v11;  // [bp-0xe8], Other Possible Types: uint128_t
    void* v12;  // [bp-0xe8]
    int v13;  // [bp-0xd0]
    unsigned long long v14;  // [bp-0xc0]
    void* v15;  // [bp-0xb8]
    unsigned long long v16;  // [bp-0xb0]
    void* v17;  // [bp-0xa8]
    unsigned long long v18[2305843009213693951];  // [bp-0xa0]
    unsigned long long v19;  // [bp-0x98]
    unsigned long long v20;  // [bp-0x90]
    unsigned long long v21;  // [bp-0x88]
    unsigned long long v22;  // [bp-0x80]
    unsigned long long v23;  // [bp-0x78]
    unsigned long long v24;  // [bp-0x70]
    uint128_t v25;  // [bp-0x68]
    void* v26;  // [bp-0x50]
    uint128_t v27;  // [bp-0x48]
    unsigned int v28;  // [bp-0x38]
    unsigned short v29;  // [bp-0x34]
    char v30;  // [bp-0x32]
    char *v32;  // rdi
    unsigned int v33;  // ecx
    unsigned long long v34;  // r14
    char v35;  // r13b
    char v36;  // r14b
    unsigned long v37;  // rbx
    char *v38;  // r15
    unsigned int v39;  // eax
    unsigned int v41;  // eax
    unsigned long v42;  // rcx
    unsigned long long v43;  // r14
    char v44;  // r15b
    unsigned long long v45[2305843009213693951];  // rax
    unsigned long long v46;  // rcx
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax
    unsigned long long v49;  // rcx
    unsigned long long v50;  // r12
    unsigned long long v51;  // rbp
    unsigned long v54;  // rdi

    v0 = a0;
    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14c7ea8); /* do not return */
    v1 = a2[0];
    v2 = a2[1];
    v18[0] = a2;
    v19 = a3;
    v20 = "h";
    v21 = 5;
    v22 = &g_14c7e30;
    v23 = 5;
    v24 = 4;
    v25 = 0;
    v26 = 0;
    v28 = 63;
    v30 = 1;
    v29 = 0;
    v15 = 0;
    v27 = 0;
    v16 = 8;
    v17 = 0;
    v32 = &v15;
    v33 = 0;
    v34 = 0;
    while (true)
    {
        v37 = v33;
        v38 = v32;
        v39 = v32.next_opt();
        if (v39 == 0x110000)
            break;
        switch (v39)
        {
        case 58:
LABEL_134170e:
            v54 = v26 - 1;
            if (v26 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c7ec0); /* do not return */
            }
            else if (v54 < a3)
            {
                fish::builtins::shared::builtin_missing_argument(v0, a1, v1, v2, a2[2 * v54], a2[1 + 2 * v54], 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v15);
                return 8589934593;
            }
            else
            {
                core::panicking::panic_bounds_check(v54, a3, &g_14c7ed8); /* do not return */
            }
        case 59:
LABEL_134175f:
            v54 = v26 - 1;
            if (v26 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c7ef0); /* do not return */
            }
            else if (v54 < a3)
            {
                fish::builtins::shared::builtin_unexpected_argument(v0, a1, v1, v2, a2[2 * v54], a2[1 + 2 * v54], 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v15);
                return 8589934593;
            }
            else
            {
                core::panicking::panic_bounds_check(v54, a3, &g_14c7f08); /* do not return */
            }
        case 63:
LABEL_13417ad:
            v54 = v26 - 1;
            if (v26 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c7f20); /* do not return */
            }
            else if (v54 < a3)
            {
                fish::builtins::shared::builtin_unknown_option(v0, a1, v1, v2, a2[2 * v54], a2[1 + 2 * v54], 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v15);
                return 8589934593;
            }
            else
            {
                core::panicking::panic_bounds_check(v54, a3, &g_14c7f38); /* do not return */
            }
        case 97:
            v35 = 1;
            v33 = v37;
            v32 = v38;
            break;
        case 104:
LABEL_134180a:
            fish::builtins::shared::builtin_print_help(v0, a1, v1, v2);
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v15);
            return 0x200000000;
        case 113:
            break;
        case 115: case 118:
LABEL_134146b:
            v41 = v38.next_opt();
            v42 = v41 - 58;
            switch ((unsigned int)v42)
            {
            case 39:
                v35 = 1;
                v33 = v37;
                break;
            case 55:
                v33 = (unsigned int)v42 & 0xffffff00 | 1;
                break;
            case 0:
                goto LABEL_134170e;
            case 1:
                goto LABEL_134175f;
            case 2: case 3: case 4: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 40: case 41: case 42: case 43: case 44: case 45: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 56: case 58: case 59:
                goto LABEL_134186a;
            case 5:
                goto LABEL_13417ad;
            case 46:
                goto LABEL_134180a;
            case 57: case 60:
                goto LABEL_134146b;
            default:
                if (v41 == 0x110000)
                {
                    v36 = 1;
                    v34 = v34 & 0xffffffffffffff00 | 1;
                    goto LABEL_13414ae;
                }
            }
            v36 = 1;
            v34 = v34 & 0xffffffffffffff00 | 1;
            v32 = v38;
            break;
        default:
LABEL_134186a:
            v7 = &g_14c66f0;
            v8 = 1;
            v9 = 8;
            v11 = 0;
            core::panicking::panic_fmt(&v7, &g_14c7f50); /* do not return */
        }
    }
LABEL_13414ae:
    if ((((char)v34 | v35) & 1))
    {
        v35 |= v36 ^ 1;
    }
    else if (!((char)v37 & 1))
    {
        fish::builtins::shared::builtin_print_help(v0, a1, v1, v2);
        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v15);
        return 8589934593;
    }
    v7[0] = a2;
    v8 = &a2[2 * a3];
    v9 = a3;
    v10 = v26;
    v0 += 472;
    v43 = a1->field_8;
    while (true)
    {
        if (!v10)
        {
            if (!v9)
                break;
            v9 -= 1;
            v45 = v7;
            if (v45 == v8)
                break;
            v7[0] = &v45[2];
        }
        else
        {
            v12 = 0;
            v45 = v7.nth(v10);
            if (!v45)
                break;
        }
        v10 = v11;
        if ((v35 & 1))
        {
            fish::path::path_get_paths(&v3, v45[0], v45[1], v0, &g_14c7518);
            if (!v47)
            {
                v46 = 0;
                v5 = v4;
                v6 = v47;
                if (v6)
                    goto LABEL_1341632;
            }
            else
            {
                v46 = 24;
                v5 = v4;
                v6 = v47;
                if (v6)
                    goto LABEL_1341632;
            }
        }
        else
        {
            fish::path::path_get_path(&v13, v45[0], v45[1], v0, &g_14c7518);
            v4 = 8;
            v47 = 0;
            if (!((char)(((0 ^ (long long)v13) & (0 ^ -((long long)v13))) >> 63)))
            {
                v48 = 8.alloc_impl(24, 0);
                if (!v48)
                    alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                v4 = v48;
                *((unsigned long long *)(v4 + 16)) = v14;
                *((void*)v4) = v13;
                v47 = 1;
            }
            v3 = v47;
            if (!v47)
            {
                v46 = 0;
                if (v47)
                    goto LABEL_1341632;
            }
            else
            {
                v46 = 24;
                if (v47)
                {
LABEL_1341632:
                    if (((char)v37 & 1))
                    {
                        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v3);
                        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v15);
                        return 0x200000000;
                    }
                    else if (!(v35 & 1))
                    {
                        v44 = 1;
                        v43.appendln(*((long long *)(v4 + 8)), *((long long *)(v4 + 16)));
                    }
                    else
                    {
                        v49 = v46 + v4;
                        v50 = v47 * 24 + v4;
                        do
                        {
                            v51 = v49;
                            v43.appendln(*((long long *)(v4 + 8)), *((long long *)(v4 + 16)));
                            v44 = 1;
                            if (v51 == v50)
                            {
                                v49 = v51;
                                if (v51 == v50)
                                    break;
                                continue;
                            }
                            else
                            {
                                v49 = v51 + 24;
                                if (v51 == v50)
                                    break;
                                continue;
                            }
                            v4 = v51;
                        } while (v4);
                    }
                }
            }
        }
        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v3);
    }
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v15);
    return 0x7f00000000 | ~(v44) & 1;
}
