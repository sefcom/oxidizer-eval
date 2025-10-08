long long just::search::Search::working_directory_from_justfile(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long
    char v1;  // [bp-0x30]
    unsigned long long v3;  // r12
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    int v6;  // xmm0

    v3 = 9223372036854775811;
    v4 = a1.parent(a2);
    if (v4)
    {
        v5 = std::sys::pal::unix::os::split_paths::bytes_to_path(&a0->field_8, v4, a2);
        v3 = 9223372036854775814;
    }
    else
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path(&v0, a1, a2);
        v5 = v0;
        v6 = *((int128_t *)&v1);
        a0->field_8 = v0;
        *((void*)&a0->field_10) = v6;
    }
    a0->field_0 = v3;
    return v5;
}
