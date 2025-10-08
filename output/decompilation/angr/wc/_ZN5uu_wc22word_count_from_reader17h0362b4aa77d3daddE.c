long long uu_wc::word_count_from_reader(struct_0 *a0, unsigned long long a1, char a2, char a3[29])
{
    unsigned long long v0;  // [bp-0x18]
    char v1;  // [bp-0x10]
    char v3;  // r9b
    char v4;  // dil
    char v5;  // al
    char v6;  // r8b
    unsigned long v7;  // rdx
    unsigned long v8;  // rdx
    struct_0 *v9;  // rdi
    unsigned long v10;  // rdx
    struct_0 *v11;  // rdi
    unsigned long v12;  // rdx
    struct_0 *v13;  // rdi
    unsigned long v14;  // rdx
    struct_0 *v15;  // rdi

    v0 = a1;
    v1 = a2;
    v3 = a3[26];
    v4 = a3[28];
    v5 = a3[27];
    v6 = v4 | v5;
    if (a3[24])
    {
        if (a3[25])
        {
            if (v3)
            {
                if (v6)
                    goto LABEL_4661f8;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
            else
            {
                if (v6)
                    goto LABEL_466288;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
        }
        else
        {
            if (v3)
            {
                if (v6)
                    goto LABEL_466249;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
            else
            {
                if (v6)
                    goto LABEL_4662d3;
                a0->field_0 = uu_wc::count_fast::count_bytes_fast(&v0);
                *((uint128_t *)&(&a0->field_0)[1]) = 0;
                *((uint128_t *)((char *)&a0->field_8 + 8)) = 0;
                *((unsigned long *)((char *)&a0->field_18 + 8)) = v7;
            }
        }
    }
    else
    {
        if (!a3[25])
        {
            if (!v3)
            {
                if (!v6)
                    core::panicking::panic("internal error: entered unreachable code/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 40, &g_4f9208); /* do not return */
LABEL_4662d3:
                v14 = a2;
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized(a0, a1, v14);
                v15 = a0;
                if (!v5)
                    return uu_wc::word_count_from_reader_specialized(v15, a1, v14);
                return uu_wc::word_count_from_reader_specialized(v15, a1, v14);
            }
            if (v6)
            {
LABEL_466249:
                v12 = a2;
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized(a0, a1, v12);
                v13 = a0;
                if (!v5)
                    return uu_wc::word_count_from_reader_specialized(v13, a1, v12);
                return uu_wc::word_count_from_reader_specialized(v13, a1, v12);
            }
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
        }
        else if (v3)
        {
            if (v6)
            {
LABEL_4661f8:
                v8 = a2;
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized(a0, a1, v8);
                v9 = a0;
                if (!v5)
                    return uu_wc::word_count_from_reader_specialized(v9, a1, v8);
                return uu_wc::word_count_from_reader_specialized(v9, a1, v8);
            }
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
        }
        else
        {
            if (v6)
            {
LABEL_466288:
                v10 = a2;
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized(a0, a1, v10);
                v11 = a0;
                if (!v5)
                    return uu_wc::word_count_from_reader_specialized(v11, a1, v10);
                return uu_wc::word_count_from_reader_specialized(v11, a1, v10);
            }
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
        }
    }
    return core::ptr::drop_in_place<std::io::stdio::StdinLock>(v0, *((int *)&v1));
}
