int uu_wc::word_count_from_reader(struct_0 *a0, unsigned int a1, char a2[29])
{
    unsigned int v0;  // [bp-0xc]
    char v2;  // r8b
    char v3;  // cl
    char v4;  // al
    char v5;  // dil
    unsigned long v6;  // rdx
    struct_0 *v7;  // rdi
    struct_0 *v8;  // rdi
    struct_0 *v9;  // rdi
    struct_0 *v10;  // rdi

    v0 = a1;
    v2 = a2[26];
    v3 = a2[28];
    v4 = a2[27];
    v5 = v3 | v4;
    if (a2[24])
    {
        if (a2[25])
        {
            if (v2)
            {
                if (!(!v5))
                    goto LABEL_4b06e5;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
            else
            {
                if (!(!v5))
                    goto LABEL_4b0771;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
        }
        else
        {
            if (v2)
            {
                if (!(!v5))
                    goto LABEL_4b0734;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
            else
            {
                if (!(!v5))
                    goto LABEL_4b07b6;
                a0->field_0 = uu_wc::count_fast::count_bytes_fast(&v0);
                *((uint128_t *)&(&a0->field_0)[1]) = 0;
                *((uint128_t *)((char *)&a0->field_8 + 8)) = 0;
                *((unsigned long *)((char *)&a0->field_18 + 8)) = v6;
            }
        }
    }
    else
    {
        if (!a2[25])
        {
            if (!v2)
            {
                if (!v5)
                    core::panicking::panic("internal error: entered unreachable codea Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 40, &g_59f158); /* do not return */
LABEL_4b07b6:
                v10 = a0;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized(v10, a1);
                if (v4)
                    return uu_wc::word_count_from_reader_specialized(v10, a1);
                return uu_wc::word_count_from_reader_specialized(v10, a1);
            }
            if (v5)
            {
LABEL_4b0734:
                v9 = a0;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized(v9, a1);
                if (v4)
                    return uu_wc::word_count_from_reader_specialized(v9, a1);
                return uu_wc::word_count_from_reader_specialized(v9, a1);
            }
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
        }
        else if (v2)
        {
            if (v5)
            {
LABEL_4b06e5:
                v7 = a0;
                if (!v3)
                {
                    return uu_wc::word_count_from_reader_specialized(v7, a1);
                }
                else if (v4)
                {
                    return uu_wc::word_count_from_reader_specialized(v7, a1);
                }
                else
                {
                    return uu_wc::word_count_from_reader_specialized(v7, a1);
                }
            }
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
        }
        else
        {
            if (v5)
            {
LABEL_4b0771:
                v8 = a0;
                if (!v3)
                {
                    return uu_wc::word_count_from_reader_specialized(v8, a1);
                }
                else if (v4)
                {
                    return uu_wc::word_count_from_reader_specialized(v8, a1);
                }
                else
                {
                    return uu_wc::word_count_from_reader_specialized(v8, a1);
                }
            }
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
        }
    }
    return ::0x4acb30::core::ptr::drop_in_place<std::fs::File>(v0);
}
