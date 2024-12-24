long long uu_wc::word_count_from_reader::hf90eeef22203d39a(struct_0 *a0, unsigned int a1, char a2[29])
{
    unsigned int v0;  // [sp-0xc]
    unsigned int v2;  // esi
    char v3;  // cl
    char v4;  // al
    char v5;  // dil
    char v6;  // r8b
    char v7;  // dl
    struct_0 *v8;  // rdi
    struct_0 *v9;  // rdi
    struct_0 *v10;  // rdi
    struct_0 *v11;  // rdi
    unsigned long v12;  // rdx

    v2 = a1;
    v0 = a1;
    v3 = a2[28];
    v4 = a2[27];
    v5 = v4 | v3;
    v6 = a2[25];
    v7 = a2[26];
    if (!a2[24])
    {
        if (!v6)
        {
            if (!v7)
            {
                if (!v5)
                    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
LABEL_4ba4c0:
                v11 = a0;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized::hcf202aff1312469d(v11, v2);
                if (v4)
                    return uu_wc::word_count_from_reader_specialized::h640b78434b28e189(v11, v2);
                return uu_wc::word_count_from_reader_specialized::h87db21f976d99796(v11, v2);
            }
            if (!v5)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h8e4a9c365a8b421e(a0, &v0);
            }
            else
            {
LABEL_4ba43a:
                v10 = a0;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized::h44cd9d82b2ea3e6b(v10, v2);
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized::hd1c05600657d3415(v10, v2);
                return uu_wc::word_count_from_reader_specialized::h1abc0a5efdf50775(v10, v2);
            }
        }
        else if (!v7)
        {
            if (!v5)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h83117206a998993c(a0, &v0);
            }
            else
            {
LABEL_4ba462:
                v9 = a0;
                if (!v3)
                {
                    return uu_wc::word_count_from_reader_specialized::h20c3a2e94eeb4e40(v9, v2);
                }
                else if (v4)
                {
                    return uu_wc::word_count_from_reader_specialized::hd12bac1865874fc7(v9, v2);
                }
                else
                {
                    return uu_wc::word_count_from_reader_specialized::he6ba78d35e78b927(v9, v2);
                }
            }
        }
        else
        {
            if (!v5)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::ha845ca4d2c7f9d31(a0, &v0);
            }
            else
            {
LABEL_4ba3de:
                v8 = a0;
                if (!v3)
                {
                    return uu_wc::word_count_from_reader_specialized::h76c0b533c90b9d88(v8, v2);
                }
                else if (v4)
                {
                    return uu_wc::word_count_from_reader_specialized::h716e31c6a4f25de0(v8, v2);
                }
                else
                {
                    return uu_wc::word_count_from_reader_specialized::hb4dcbf71ac25de42(v8, v2);
                }
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
                    goto LABEL_4ba462;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hfa273b926a639793(a0, &v0);
            }
            else
            {
                if (!(!v5))
                    goto LABEL_4ba3de;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::he65bfac264b5ece9(a0, &v0);
            }
        }
        else
        {
            if (!v7)
            {
                if (!(!v5))
                    goto LABEL_4ba4c0;
                a0->field_0 = uu_wc::count_fast::count_bytes_fast::h04d5a9761a1cf062(&v0);
                *((int128_t *)&(&a0->field_0)[1]) = 0;
                *((int128_t *)((char *)&a0->field_8 + 8)) = 0;
                *((unsigned long *)((char *)&a0->field_18 + 8)) = v12;
            }
            else
            {
                if (!(!v5))
                    goto LABEL_4ba43a;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h12701f523196b61d(a0, &v0);
            }
        }
    }
    return ::0x4b6c80::core::ptr::drop_in_place$LT$std..fs..File$GT$::hfc6dd247cb1fd101(v0);
}
