long long uu_mkdir::mkdir(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x20]
    unsigned long long v5;  // rax

    if (!a1)
    {
        (char)v0.to_vec("cannot create directory '': No such file or directorycannot set permissions : File exists", 53);
        v3 = 1;
        return (char)v0.new();
    }
    uucore::features::fs::dir_strip_dot_for_creation(&v0, a0, a1);
    v5 = uu_mkdir::create_dir(v1, v2, 0, a2);
    core::ptr::drop_in_place<std::path::PathBuf>(v0, v1);
    return v5;
}
