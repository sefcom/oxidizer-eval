long long fd::cli::Opts::search_paths(struct_1 *a0, struct_3 *a1)
{
    char v0;  // [bp-0x30], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x28]
    struct_3 *v2;  // [bp-0x20], Other Possible Types: unsigned long
    unsigned long long v4;  // rax
    struct_2 *v5;  // rax
    struct_2 *v6;  // rax
    struct_2 *v7;  // rbx

    v4 = 160;
    if (!a1->field_b0)
    {
        v4 = 184;
        if (!a1->field_c8)
        {
            v5 = fd::cli::ensure_current_directory_exists();
            if (v5)
            {
                a0->field_8 = v5;
                a0->field_0 = 0x8000000000000000;
                return 0x8000000000000000;
            }
            v6 = 8.alloc_impl(24);
            if (!v6)
                alloc::alloc::handle_alloc_error(8, 24); /* do not return */
            v7 = v6;
            v0.normalize_path(a1->field_1eb, "./cannot parse integer from empty stringinvalid digit found in stringnumber too large to fit in target typenumber too small to fit in target typenumber would be zero for non-zero typeTryFromIntErrorfatal runtime error: thread result panicked on drop, abort", 2);
            v7->field_10 = v2;
            v7->field_0 = *((int128_t *)&v0);
            a0->field_0 = 1;
            a0->field_8 = v7;
            a0->field_10 = 1;
            return v2;
        }
    }
    v0 = *((long long *)&a1->padding_0[8 + v4]);
    v1 = *((long long *)&a1->padding_0[8 + v4]) + *((long long *)&a1->padding_0[16 + v4]) * 24;
    v2 = a1;
    return a0.collect(&v0);
}
