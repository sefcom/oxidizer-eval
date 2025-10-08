void uu_ln::existing_backup_path(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    char v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    char v3;  // [bp-0xe0]

    uu_ln::simple_backup_path(&v0, a1, a2, ".~1~", 4);
    std::fs::metadata(&v3, v1, v2);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v3);
    if ((int)*((long long *)&v3) == 2)
        uu_ln::simple_backup_path(a0, a1, a2, a3, a4);
    else
        uu_ln::numbered_backup_path(a0, a1, a2);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    return;
}
