void uu_ln::relative_path(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x48]
    unsigned long long v3;  // rax

    uucore::features::fs::canonicalize(&v0, a1, a2);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v0);
    }
    else
    {
        v3 = a3.parent(a4);
        if (!v3)
            core::option::unwrap_failed(&g_4f60f8); /* do not return */
        uucore::features::fs::canonicalize(&v1, v3, a2);
        if (*((long long *)&v1) != 0x8000000000000000)
        {
            uucore::features::fs::make_path_relative_to(a0, &v0, &v1);
            return;
        }
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v1);
        core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    }
    a0[1] = a1;
    a0[2] = a2;
    a0[0] = 0x8000000000000000;
    return;
}
