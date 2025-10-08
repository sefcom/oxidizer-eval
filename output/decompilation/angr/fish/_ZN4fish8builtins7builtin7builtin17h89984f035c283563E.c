long long fish::builtins::builtin::builtin(unsigned long long a0, unsigned long long a1[3], unsigned long long a2[2305843009213693951], unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x160]
    unsigned long long v1;  // [bp-0x158]
    unsigned long long v2[2305843009213693951];  // [bp-0x148], Other Possible Types: int, unsigned long long
    unsigned long long v3;  // [bp-0x140]
    int v4;  // [bp-0x138], Other Possible Types: void*, unsigned long long
    int v5;  // [bp-0x130]
    char v6;  // [bp-0x128]
    unsigned long long v7;  // [bp-0x120]
    unsigned long long v8;  // [bp-0x118]
    void* v9;  // [bp-0x108]
    unsigned long long v10;  // [bp-0x100]
    void* v11;  // [bp-0xf8]
    char v12;  // [bp-0xf0]
    unsigned long long v13;  // [bp-0xe8]
    unsigned long long v14;  // [bp-0xe0]
    unsigned long long v15;  // [bp-0xd0]
    unsigned long long v16;  // [bp-0xc8]
    unsigned long long v17;  // [bp-0xc0]
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
    char v35;  // cl
    char v36;  // r15b
    unsigned int v38;  // eax
    unsigned int v40;  // eax
    unsigned long v41;  // rdi
    unsigned long long v45;  // r15
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    int v48;  // xmm0
    unsigned long long v49;  // rdx
    void* v51;  // rsi
    unsigned long long v52[2305843009213693951];  // rax
    unsigned long long v53;  // r14
    void* v54;  // r14

    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14c7c68); /* do not return */
    v0 = a2[0];
    v1 = a2[1];
    v21[0] = a2;
    v22 = a3;
    v23 = "h";
    v24 = 3;
    v25 = &g_14c7c20;
    v26 = 3;
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
    v35 = 0;
    while (true)
    {
        v38 = v18.next_opt();
        if (v38 == 0x110000)
            break;
        switch (v38)
        {
        case 58:
            v41 = v29 - 1;
            if (v29 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c7c80); /* do not return */
            }
            else if (v41 < a3)
            {
                fish::builtins::shared::builtin_missing_argument(a0, a1, v0, v1, a2[2 * v41], a2[1 + 2 * v41], 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v18);
                return 8589934593;
            }
            else
            {
                core::panicking::panic_bounds_check(v41, a3, &g_14c7c98); /* do not return */
            }
        case 59:
LABEL_133fd0c:
            v41 = v29 - 1;
            if (v29 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c7cb0); /* do not return */
            }
            else if (v41 < a3)
            {
                fish::builtins::shared::builtin_unexpected_argument(a0, a1, v0, v1, a2[2 * v41], a2[1 + 2 * v41], 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v18);
                return 8589934593;
            }
            else
            {
                core::panicking::panic_bounds_check(v41, a3, &g_14c7cc8); /* do not return */
            }
        case 63:
LABEL_133fd5b:
            v41 = v29 - 1;
            if (v29 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c7ce0); /* do not return */
            }
            else if (v41 < a3)
            {
                fish::builtins::shared::builtin_unknown_option(a0, a1, v0, v1, a2[2 * v41], a2[1 + 2 * v41], 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v18);
                return 8589934593;
            }
            else
            {
                core::panicking::panic_bounds_check(v41, a3, &g_14c7cf8); /* do not return */
            }
        case 104:
LABEL_133fdaa:
            fish::builtins::shared::builtin_print_help(a0, a1, v0, v1);
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v18);
            return 0x200000000;
        case 110:
LABEL_133fce3:
            v40 = v18.next_opt();
            switch (v40)
            {
            case 113:
                v35 = 1;
                v36 = 1;
                break;
            case 58:
                break;
            case 59:
                goto LABEL_133fd0c;
            case 60: case 61: case 62: case 64: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 105: case 106: case 107: case 108: case 109: case 111: case 112:
                goto LABEL_13400f0;
            case 63:
                goto LABEL_133fd5b;
            case 104:
                goto LABEL_133fdaa;
            case 110:
                goto LABEL_133fce3;
            default:
                if (v40 == 0x110000)
                {
                    v36 = 1;
                    goto LABEL_133fe30;
                }
            }
        case 113:
            continue;
        default:
LABEL_13400f0:
            v2 = &g_14c60b8;
            v3 = 1;
            v4 = 8;
            *((uint128_t *)&v5) = 0;
            core::panicking::panic_fmt(&v2, &g_14c7d10); /* do not return */
        }
    }
LABEL_133fe30:
    if ((v35 & 1))
    {
        if ((v36 & 1))
        {
            v45 = a1[2];
            v9 = 0;
            v10 = 4;
            v11 = 0;
            v46 = g_14c7d28[0].localize();
            v13 = v0;
            v14 = v1;
            v12 = 1;
            v16 = "-";
            v17 = 42;
            v15 = 0x8000000000000000;
            v47 = v15.localize();
            v48 = *((int128_t *)&v12);
            *((int128_t *)&v4) = *((int128_t *)&v14);
            v2 = v48;
            v6 = 1;
            v7 = v47;
            v8 = v49;
            fish_printf::printf_impl::sprintf_locale(&v12, &v9, v46, v49, ".", &(char)v2, 2);
            v12.unwrap(&g_14c7d40);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v2);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v15);
            *((int128_t *)&v2) = *((int128_t *)&v9);
            v4 = 0;
            v45.append(&(char)v2);
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v18);
            return 8589934593;
        }
        v2[0] = a2;
        v3 = &a2[2 * a3];
        v4 = a3;
        v51 = v29;
        if (!v51)
            goto LABEL_1340070;
        else
            goto LABEL_1340055;
        do
        {
            while (true)
            {
                if (fish::builtins::shared::builtin_exists(v52[0], v52[1]))
                {
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v18);
                    return 0;
                }
                if (v51)
                    break;
LABEL_1340070:
                if (!v4)
                {
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v18);
                    return 4294967297;
                }
                v4 -= 1;
                v52 = v2;
                if (v52 == v3)
                {
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v18);
                    return 4294967297;
                }
                v2[0] = &v52[2];
            }
LABEL_1340055:
            v51 = 0;
            v52 = v2.nth(v51);
        } while (v52);
        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v18);
    }
    else if ((v36 & 1))
    {
        v53 = 8;
        while (true)
        {
            v54 = v53;
            if (v54 == 1544)
                break;
            a1[1].appendln((long long)v54[0x14c5900], *((long long *)(v54 + &g_14c5908)));
            v53 = v54 + 24;
        }
        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v18);
        return 0;
    }
    else
    {
        fish::builtins::shared::builtin_print_help(a0, a1, v0, v1);
        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v18);
        return 8589934593;
    }
    return 4294967297;
}
