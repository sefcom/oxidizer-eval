long long uu_install::is_new_file_path(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xd0]
    unsigned long v2;  // rbp
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rdx

    std::fs::metadata(&v0, a0, a1);
    v2 = *((int *)&v0);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
    if ((unsigned int)v2 == 2)
    {
        v3 = a0.parent(a1);
        v4 = v2 & 0xffffff00 | 1;
        if (v3 && !(char)v3.is_dir(v5))
        {
            if (a0.parent(a1))
                v4 = v4 & 0xffffffffffffff00 | !v5;
            else
                core::option::unwrap_failed(&g_502310); /* do not return */
        }
    }
    else
    {
        v4 = 0;
    }
    return v4 & 4294967295;
}
