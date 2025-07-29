long long uu_cp::copy_extended_attrs(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0xe0]
    char v1;  // [bp-0xd8]
    char v2;  // [bp-0xd0]
    char v3;  // [bp-0xa0]
    unsigned long long v5;  // rax
    unsigned long v6;  // rdx
    unsigned long long v7;  // rax

    std::fs::symlink_metadata(&v1, a3, a4);
    if (*((int *)&v1) == 2)
    {
        v5 = *((long long *)&v2);
LABEL_4ddf0b:
    }
    else
    {
        v6 = *((int *)&v3);
        if (((char)v6 & 146))
        {
            v5 = uucore::features::fsxattr::copy_xattrs(a1, a2, a3, a4);
            if (!v5)
            {
                a0[0] = 9223372036854775820;
                return v5;
            }
        }
        else
        {
            v5 = std::fs::set_permissions(a3, a4, (unsigned int)v6 | 146);
            if (!(!v5))
                goto LABEL_4ddf0b;
            v0 = uucore::features::fsxattr::copy_xattrs(a1, a2, a3, a4);
            std::fs::symlink_metadata(&v1, a3, a4);
            if (*((int *)&v1) == 2)
            {
                v7 = *((long long *)&v2);
                a0[0] = 9223372036854775809;
                a0[1] = v7;
                return (unsigned long long)::0x4d4440::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v0);
            }
            v7 = std::fs::set_permissions(a3, a4, 4294967149 & *((int *)&v3));
            if (v7)
            {
                a0[0] = 9223372036854775809;
                a0[1] = v7;
                return (unsigned long long)::0x4d4440::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v0);
            }
            v5 = v0;
            if (!v5)
            {
                a0[0] = 9223372036854775820;
                return v5;
            }
        }
    }
    a0[0] = 9223372036854775809;
    a0[1] = v5;
    return v5;
}
