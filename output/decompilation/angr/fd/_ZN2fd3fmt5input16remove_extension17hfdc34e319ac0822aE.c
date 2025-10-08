long long fd::fmt::input::remove_extension(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    char v3;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    int v6;  // [bp-0x38], Other Possible Types: char
    char v7;  // [bp-0x28]
    unsigned long long v9;  // rax
    unsigned long long v10;  // r8
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax

    fd::fmt::input::dirname(&v0, a1, a2);
    v9 = a1.file_stem(a2);
    if (!v9)
    {
        v10 = a2;
        if (!v9)
            goto LABEL_5f56a4;
LABEL_5f56a3:
        v12 = v9;
    }
    else
    {
        v10 = v11;
        if (v9)
            goto LABEL_5f56a3;
LABEL_5f56a4:
        v12 = a1;
    }
    v3.join(v1, v2, v12, v10);
    core::mem::drop(v0, v1);
    std::sys::pal::unix::os::split_paths::bytes_to_path(&v6, fd::filesystem::strip_current_dir(v4, v5), a2);
    a0->field_10 = *((long long *)&v7);
    *((void*)&a0->field_0) = v6;
    return core::mem::drop(v3, v4);
}
