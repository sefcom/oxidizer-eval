long long uu_wc::word_count_from_reader::h6e86fdc0a2d1886d(struct_0 *a0, unsigned long a1, unsigned long long a2, char a3[29])
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
                    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
LABEL_4ba2e4:
                v11 = a2 & 4294967295;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized::h970a2327fe67c671(a0, a1, v11);
                v16 = a0;
                if (v4)
                    return uu_wc::word_count_from_reader_specialized::hba4064ef31feb388(v16, a1, v11);
                return uu_wc::word_count_from_reader_specialized::h2604aefc1bceb6af(v16, a1, v11);
            }
            if (!v5)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h383ed589000a1382(a0, &v0);
            }
            else
            {
LABEL_4ba241:
                v10 = a2 & 4294967295;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized::h65bcf87a8c91ad92(a0, a1, v10);
                v15 = a0;
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized::h6c03de3159c9b736(v15, a1, v10);
                return uu_wc::word_count_from_reader_specialized::h6d949c1f671c4648(v15, a1, v10);
            }
        }
        else if (!v7)
        {
            if (!v5)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hde726cf890405cf0(a0, &v0);
            }
            else
            {
LABEL_4ba274:
                v9 = a2 & 4294967295;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized::h18f6dc3985e3d494(a0, a1, v9);
                v14 = a0;
                if (v4)
                    return uu_wc::word_count_from_reader_specialized::hf1d5269d618e9990(v14, a1, v9);
                return uu_wc::word_count_from_reader_specialized::h97f80ec03ce617f7(v14, a1, v9);
            }
        }
        else
        {
            if (!v5)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hd7994b7f018ddc6d(a0, &v0);
            }
            else
            {
LABEL_4ba1e1:
                v8 = a2 & 4294967295;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized::ha6f3f70f5fd405df(a0, a1, v8);
                v13 = a0;
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized::h48c3ae676c0c430d(v13, a1, v8);
                return uu_wc::word_count_from_reader_specialized::h0778dd52971d551a(v13, a1, v8);
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
                    goto LABEL_4ba274;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h554ea2a51df23f69(a0, &v0);
            }
            else
            {
                if (!(!v5))
                    goto LABEL_4ba1e1;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::heabe3f0e9bb34a51(a0, &v0);
            }
        }
        else
        {
            if (!v7)
            {
                if (!(!v5))
                    goto LABEL_4ba2e4;
                a0->field_0 = uu_wc::count_fast::count_bytes_fast::h4700a236c0217232(&v0, a1, a2);
                *((int128_t *)&(&a0->field_0)[1]) = 0;
                *((int128_t *)((char *)&a0->field_8 + 8)) = 0;
                *((unsigned long *)((char *)&a0->field_18 + 8)) = v12;
            }
            else
            {
                if (!(!v5))
                    goto LABEL_4ba241;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h6fa39b8c0da42923(a0, &v0);
            }
        }
    }
    return ::0x4b6d70::core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::he13a18b2d6fd0d61(a1, *((int *)&v1));
}
