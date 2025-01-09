long long uu_wc::word_count_from_reader::h5f3d93b09ec956fa(struct_0 *a0, unsigned long a1, unsigned long a2, char a3[29])
{
    unsigned long v0;  // [sp-0x18], Other Possible Types: unsigned long long
    char v1;  // [sp-0x10]
    unsigned long long v3;  // rsi
    char v4;  // dil
    char v5;  // al
    char v6;  // r8b
    char v7;  // r9b
    char v8;  // cl
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rdx
    unsigned long v13;  // rdx
    struct_0 *v14;  // rdi
    struct_0 *v15;  // rdi
    struct_0 *v16;  // rdi
    struct_0 *v17;  // rdi

    v3 = a1;
    v0 = a1;
    v1 = a2;
    v4 = a3[28];
    v5 = a3[27];
    v6 = v5 | v4;
    v7 = a3[25];
    v8 = a3[26];
    if (!a3[24])
    {
        if (!v7)
        {
            if (!v8)
            {
                if (!v6)
                    core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreachable code", 40, &g_531108); /* do not return */
LABEL_4b9f14:
                v12 = a2 & 4294967295;
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized::h025918a8241eeb08(a0, v3, v12);
                v17 = a0;
                if (!v5)
                    return uu_wc::word_count_from_reader_specialized::hbca2cb602ec99f92(v17, v3, v12);
                return uu_wc::word_count_from_reader_specialized::h17007ed8b4818a2a(v17, v3, v12);
            }
            if (!v6)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h598bf3a898ce236a(a0, &v0);
            }
            else
            {
LABEL_4b9e71:
                v11 = a2 & 4294967295;
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized::h7f97302cbd6e2e70(a0, v3, v11);
                v16 = a0;
                if (v5)
                    return uu_wc::word_count_from_reader_specialized::ha1e711597c722da7(v16, v3, v11);
                return uu_wc::word_count_from_reader_specialized::h44113b0a01ba8e40(v16, v3, v11);
            }
        }
        else if (!v8)
        {
            if (!v6)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hcb79d42af9b67351(a0, &v0);
            }
            else
            {
LABEL_4b9ea4:
                v10 = a2 & 4294967295;
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized::h28fc347a8b9012d0(a0, v3, v10);
                v15 = a0;
                if (!v5)
                    return uu_wc::word_count_from_reader_specialized::h913a6f0069ea8b75(v15, v3, v10);
                return uu_wc::word_count_from_reader_specialized::hc596e1f0f8fa6312(v15, v3, v10);
            }
        }
        else
        {
            if (!v6)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h90889acc4337658d(a0, &v0);
            }
            else
            {
LABEL_4b9e11:
                v9 = a2 & 4294967295;
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized::h9a3c63c2604a956f(a0, v3, v9);
                v14 = a0;
                if (!v5)
                    return uu_wc::word_count_from_reader_specialized::h78598f4c68c7400f(v14, v3, v9);
                return uu_wc::word_count_from_reader_specialized::h8bffff5ed912cf1d(v14, v3, v9);
            }
        }
    }
    else
    {
        if (v7)
        {
            if (!v8)
            {
                if (!(!v6))
                    goto LABEL_4b9ea4;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h288fb21f9fd91ba1(a0, &v0);
            }
            else
            {
                if (!(!v6))
                    goto LABEL_4b9e11;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h59d133d4308848ec(a0, &v0);
            }
        }
        else
        {
            if (!v8)
            {
                if (!(!v6))
                    goto LABEL_4b9f14;
                a0->field_0 = uu_wc::count_fast::count_bytes_fast::h84184728696ecb06(&v0);
                *((int128_t *)&(&a0->field_0)[1]) = 0;
                *((int128_t *)((char *)&a0->field_8 + 8)) = 0;
                *((unsigned long *)((char *)&a0->field_18 + 8)) = v13;
            }
            else
            {
                if (!(!v6))
                    goto LABEL_4b9e71;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h25c1875592fab0d9(a0, &v0);
            }
        }
    }
    return ::0x4b6980::core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h56134b51e5b08b82();
}
