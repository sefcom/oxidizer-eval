long long fd::filesystem::path_absolute_form(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x60], Other Possible Types: char
    unsigned long v1;  // [bp-0x50], Other Possible Types: unsigned long long
    char v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v5;  // r13
    unsigned long long v6;  // r14
    unsigned long long v7;  // 4096
    unsigned long long v8;  // rdx

    if ((char)a1.is_absolute(a2))
        return std::sys::pal::unix::os::split_paths::bytes_to_path(a0, a1, a2);
    v5 = a1.strip_prefix(a2);
    std::env::current_dir(&v0);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
    {
        a0->field_10 = v1;
        *((void*)&a0->field_0) = v0;
        return v1;
    }
    if (v5)
    {
        v6 = v5;
        if (v5)
            goto LABEL_5f4113;
LABEL_5f4112:
        v7 = a2;
    }
    else
    {
        v6 = a1;
        if (!v5)
            goto LABEL_5f4112;
LABEL_5f4113:
        v7 = v8;
    }
    v3 = v1;
    memcpy(&v2, &v0, 16);
    return fd::filesystem::path_absolute_form::{{closure}}(a0, v6, v7, &v2);
}
