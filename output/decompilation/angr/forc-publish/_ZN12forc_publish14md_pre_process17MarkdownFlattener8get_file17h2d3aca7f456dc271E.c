long long forc_publish::md_pre_process::MarkdownFlattener::get_file(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x30], Other Possible Types: unsigned long long
    char v3;  // [bp-0x28]
    struct_0 *v5;  // rax

    std::fs::canonicalize(&v2, a1, a2);
    if (!((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63)))
    {
        memcpy(&v1, &v3, 16);
        v0 = v2;
        v5 = a0.get_inner(&v0);
        core::ptr::drop_in_place<std::path::PathBuf>(v2, *((long long *)&v1));
        return (!v5 ? 0 : v5->field_20);
    }
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v2);
    return 0;
}
