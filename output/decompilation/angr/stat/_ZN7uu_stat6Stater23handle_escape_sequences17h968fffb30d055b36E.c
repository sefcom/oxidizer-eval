long long uu_stat::Stater::handle_escape_sequences(void* a0, unsigned int *a1, unsigned long long a2, unsigned long long *a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    char *v2;  // [bp-0x88], Other Possible Types: unsigned long long
    int v3;  // [bp-0x80], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x78]
    char *v5;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x60]
    char *v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    unsigned int v9;  // [bp-0x44]
    unsigned long long v10;  // [bp-0x40]
    void* v11;  // [bp-0x38]
    unsigned long long v12;  // r12
    unsigned long v13;  // r14
    unsigned long v14;  // rax
    unsigned long v15;  // r12
    void* v16;  // rbx
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    char v23;  // bpl
    unsigned int v24;  // r13d
    unsigned long long v25;  // 4096
    char v26;  // bpl
    unsigned int v27;  // r13d
    char v28;  // bpl
    unsigned long long v29;  // r12
    char v30;  // dl
    unsigned long long v32;  // rdx
    unsigned long v33;  // rax
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rax

    v12 = *(a3);
    v13 = v12 + 1;
    *(a3) = v13;
    if (v13 >= a4)
    {
        v5 = uucore::util_name();
        v6 = v34;
        v7 = &v5;
        v8 = <&T as core::fmt::Display>::fmt;
        v0 = &g_519e38;
        v1 = 2;
        v4 = 0;
        v2 = &v7;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        v0 = &g_519e58;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        v35 = std::io::stdio::_eprint(&v0);
        *((unsigned int *)&a0[8]) = 92;
        *((unsigned long long *)a0) = 3;
        return v35;
    }
    else if (v13 < a2)
    {
        v14 = a1[1 + v12];
        switch ((unsigned int)v14)
        {
        case 34:
            *((char *)&a0[8]) = 34;
            *((unsigned long long *)a0) = 4;
            return v14;
        case 39:
            *((char *)&a0[8]) = 39;
            *((unsigned long long *)a0) = 4;
            return v14;
        case 92:
            *((char *)&a0[8]) = 92;
            *((unsigned long long *)a0) = 4;
            return v14;
        case 97:
            *((char *)&a0[8]) = 7;
            *((unsigned long long *)a0) = 4;
            return v14;
        case 98:
            *((char *)&a0[8]) = 8;
            *((unsigned long long *)a0) = 4;
            return v14;
        case 102:
            *((char *)&a0[8]) = 12;
            *((unsigned long long *)a0) = 4;
            return v14;
        case 110:
            *((char *)&a0[8]) = 10;
            *((unsigned long long *)a0) = 4;
            return v14;
        case 114:
            *((char *)&a0[8]) = 13;
            *((unsigned long long *)a0) = 4;
            return v14;
        case 116:
            *((char *)&a0[8]) = 9;
            *((unsigned long long *)a0) = 4;
            return v14;
        case 120:
            v15 = v12 + 2;
            if (v15 >= a4)
            {
                v5 = uucore::util_name();
                v6 = v21;
                v7 = &v5;
                v8 = <&T as core::fmt::Display>::fmt;
                v0 = &g_519e38;
                v1 = 2;
                v4 = 0;
                v2 = &v7;
                v3 = 1;
                std::io::stdio::_eprint(&v0);
                v0 = &g_519e78;
                v1 = 1;
                v2 = 8;
                *((uint128_t *)&v3) = 0;
                v22 = std::io::stdio::_eprint(&v0);
                *((char *)&a0[8]) = 120;
                *((unsigned long long *)a0) = 4;
                return v22;
            }
            v16 = a0;
            v17 = v15.get(a5, a6);
            if (!v17)
                core::str::slice_error_fail(a5, a6, v15, a6, &g_519ec0); /* do not return */
            v19 = v17.scan_char(v18, 16);
            if ((unsigned int)v19 != 0x110000)
            {
                *(a3) = v18 + v13;
                *((char *)&v16[8]) = v19;
                *((unsigned long long *)v16) = 4;
                return v19;
            }
            v5 = uucore::util_name();
            v6 = v18;
            v7 = &v5;
            v8 = <&T as core::fmt::Display>::fmt;
            v0 = &g_519e38;
            v1 = 2;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v0 = &g_519e68;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            v20 = std::io::stdio::_eprint(&v0);
            *((char *)&v16[8]) = 120;
            *((unsigned long long *)v16) = 4;
            return v20;
        default:
            if (((unsigned int)v14 & 0xfffffff8) == 48)
            {
                v11 = a0;
                v23 = 0;
                v24 = 0;
                v25 = a2;
                while (true)
                {
                    v27 = v24;
                    v28 = v23;
                    if (v13 >= v25)
                        core::panicking::panic_bounds_check(v13, a2, &g_519ed8); /* do not return */
                    v29 = a4;
                    if (!((char)::0x46d1e0::core::char::methods::<impl char>::to_digit(a1[v13], 8) & 1))
                        break;
                    v26 = v30 + v28 * 8;
                    v13 += 1;
                    *(a3) = v13;
                    if (v13 >= v29)
                        break;
                    else
                        break;
                    a4 = v29;
                    v23 = v26;
                    v24 = v27 + 1;
                    v25 = v10;
                    if (v27 >= 2)
                        break;
                }
                *(a3) = v13 - 1;
                *((char *)&v11[8]) = v26;
                *((unsigned long long *)v11) = 4;
                return v11;
            }
            else
            {
                v9 = v14;
                v5 = uucore::util_name();
                v6 = v32;
                v7 = &v5;
                v8 = <&T as core::fmt::Display>::fmt;
                v0 = &g_519e38;
                v1 = 2;
                v4 = 0;
                v2 = &v7;
                v3 = 1;
                std::io::stdio::_eprint(&v0);
                v5 = &v9;
                v6 = <char as core::fmt::Display>::fmt;
                v0 = &g_519e88;
                v1 = 2;
                v4 = 0;
                v2 = &v5;
                v3 = 1;
                std::io::stdio::_eprint(&v0);
                v33 = (char)v9;
                *((char *)&a0[8]) = v33;
                *((unsigned long long *)a0) = 4;
                return v33;
            }
        }
    }
    else
    {
        core::panicking::panic_bounds_check(v13, a2, &g_519ea8); /* do not return */
    }
}
