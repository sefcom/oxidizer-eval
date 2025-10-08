long long uu_rm::remove(unsigned long long a0[2], unsigned long a1, char *a2)
{
    char v0;  // [bp-0x151]
    char v1;  // [bp-0x151]
    unsigned long long v2;  // [bp-0x148]
    char *v3;  // [bp-0x140]
    unsigned long long v4;  // [bp-0x138]
    unsigned long long v5;  // [bp-0x130]
    unsigned long long v6;  // [bp-0x128]
    char *v7;  // [bp-0x120]
    unsigned long long v8;  // [bp-0x118]
    void* v9;  // [bp-0x110]
    unsigned long long v10;  // [bp-0x100]
    unsigned long v11;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long v12;  // [bp-0xf0]
    char v13;  // [bp-0xe8]
    unsigned long long v14;  // [bp-0xe0]
    int v15;  // [bp-0xd8]
    char v16;  // [bp-0xa8]
    unsigned long long v18[2];  // r15
    unsigned long long v19;  // r14
    unsigned long long v20;  // rbp
    char v21;  // bpl
    unsigned long v23;  // rbx
    unsigned long v24;  // r12
    unsigned long long v25;  // rdx

    if (a1)
    {
        v18 = a0;
        v19 = &a0[a1];
        v0 = *(a2) ^ 1;
        v20 = 0;
        if ((*(a2) & 1))
        {
            do
            {
                std::fs::symlink_metadata(&v14, v18[0], v18[1]);
                if ((int)v14 == 2)
                {
                    core::ptr::drop_in_place<std::io::error::Error>((long long)v15);
                    v1 = v0;
                }
                else
                {
                    v1 = ((*((int *)&v16) & 0xf000) == 0x4000 ? (char)uu_rm::handle_dir(v18[0], v18[1], a2) : (char)uu_rm::remove_file(v18[0], v18[1], a2));
                }
                v21 |= v1;
                v20 = v20 & 0xffffffffffffff00 | v21;
                v18 += 1;
            } while (v18 != v19);
        }
        else
        {
            do
            {
                v23 = v18[0];
                v24 = v18[1];
                std::fs::symlink_metadata(&v14, v23, v24);
                if ((int)v14 == 2)
                {
                    v2 = (long long)v15;
                    v10 = uucore::util_name();
                    v11 = v25;
                    v3 = &v10;
                    v4 = <&T as core::fmt::Display>::fmt;
                    v5 = &g_4ea4a0;
                    v6 = 2;
                    v9 = 0;
                    v7 = &v3;
                    v8 = 1;
                    std::io::stdio::_eprint(&v5);
                    v10 = 1;
                    v11 = v23;
                    v12 = v24;
                    v13 = 1;
                    v3 = &v10;
                    v4 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v5 = &g_4ea4c0;
                    v6 = 2;
                    v9 = 0;
                    v7 = &v3;
                    v8 = 1;
                    std::io::stdio::_eprint(&v5);
                    core::ptr::drop_in_place<std::io::error::Error>(v2);
                    v1 = v0;
                }
                else
                {
                    v1 = ((*((int *)&v16) & 0xf000) == 0x4000 ? (char)uu_rm::handle_dir(v23, v24, a2) : (char)uu_rm::remove_file(v23, v24, a2));
                }
                v21 |= v1;
                v20 = v20 & 0xffffffffffffff00 | v21;
                v18 += 1;
            } while (v18 != v19);
        }
    }
    else
    {
        v20 = 0;
    }
    return (unsigned int)v20 & 0xffffff00 | v21 & 1;
}
