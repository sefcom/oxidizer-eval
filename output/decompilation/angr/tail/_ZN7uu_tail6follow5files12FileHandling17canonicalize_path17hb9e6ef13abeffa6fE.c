long long uu_tail::follow::files::FileHandling::canonicalize_path(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x30], Other Possible Types: char
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax

    if (!(char)a1.is_absolute(a2) && !(char)a1.is_stdin(a2))
    {
        std::fs::canonicalize(&v0, a1, a2);
        if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
        {
            v3 = *((long long *)&v1);
            a0->field_10 = v3;
            *((void*)&a0->field_0) = v0;
            return v3;
        }
        ::0x511890::core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v0);
    }
    return std::sys::pal::unix::os::split_paths::bytes_to_path(a0, a1, a2);
}
