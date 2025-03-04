long long uu_wc::word_count_from_reader::h5f3d93b09ec956fa(struct_0 *a0, unsigned long long a1, unsigned long a2, char a3[29])
{
    char v0;  // [bp-0x18]
    char v1;  // [sp-0x10]
    char v3;  // dil
    char v4;  // al
    char v5;  // r8b
    char v6;  // r9b
    char v7;  // cl
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rdx
    unsigned long v12;  // rdx
    struct_0 *v13;  // rdi
    struct_0 *v14;  // rdi
    struct_0 *v15;  // rdi
    struct_0 *v16;  // rdi

    v1 = a2;
    v3 = a3[28];
    v4 = a3[27];
    v5 = v4 | v3;
    v6 = a3[25];
    v7 = a3[26];
    if (!a3[24])
    {
        if (!v6)
        {
            if (!v7)
            {
                if (!v5)
                    core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreachable code", 40, &g_531108); /* do not return */
LABEL_4b9f14:
                v11 = a2 & 4294967295;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized::h025918a8241eeb08(a0, a1, v11);
                v16 = a0;
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized::hbca2cb602ec99f92(v16, a1, v11);
                return uu_wc::word_count_from_reader_specialized::h17007ed8b4818a2a(v16, a1, v11);
            }
            if (!v5)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h598bf3a898ce236a(a0, &v0);
            }
            else
            {
LABEL_4b9e71:
                v10 = a2 & 4294967295;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized::h7f97302cbd6e2e70(a0, a1, v10);
                v15 = a0;
                if (v4)
                    return uu_wc::word_count_from_reader_specialized::ha1e711597c722da7(v15, a1, v10);
                return uu_wc::word_count_from_reader_specialized::h44113b0a01ba8e40(v15, a1, v10);
            }
        }
        else if (!v7)
        {
            if (!v5)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hcb79d42af9b67351(a0, &v0);
            }
            else
            {
LABEL_4b9ea4:
                v9 = a2 & 4294967295;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized::h28fc347a8b9012d0(a0, a1, v9);
                v14 = a0;
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized::h913a6f0069ea8b75(v14, a1, v9);
                return uu_wc::word_count_from_reader_specialized::hc596e1f0f8fa6312(v14, a1, v9);
            }
        }
        else
        {
            if (!v5)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h90889acc4337658d(a0, &v0);
            }
            else
            {
LABEL_4b9e11:
                v8 = a2 & 4294967295;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized::h9a3c63c2604a956f(a0, a1, v8);
                v13 = a0;
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized::h78598f4c68c7400f(v13, a1, v8);
                return uu_wc::word_count_from_reader_specialized::h8bffff5ed912cf1d(v13, a1, v8);
            }
        }
    }
    else
    {
        if (v6)
        {
            if (!v7)
            {
                if (!(!v5))
                    goto LABEL_4b9ea4;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h288fb21f9fd91ba1(a0, &v0);
            }
            else
            {
                if (!(!v5))
                    goto LABEL_4b9e11;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h59d133d4308848ec(a0, &v0);
            }
        }
        else
        {
            if (!v7)
            {
                if (!(!v5))
                    goto LABEL_4b9f14;
                a0->field_0 = uu_wc::count_fast::count_bytes_fast::h84184728696ecb06(&v0);
                *((uint128_t *)&(&a0->field_0)[1]) = 0;
                *((uint128_t *)((char *)&a0->field_8 + 8)) = 0;
                *((unsigned long *)((char *)&a0->field_18 + 8)) = v12;
            }
            else
            {
                if (!(!v5))
                    goto LABEL_4b9e71;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h25c1875592fab0d9(a0, &v0);
            }
        }
    }
    return ::0x4b6980::core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h56134b51e5b08b82(a1, *((int *)&v1));
}
