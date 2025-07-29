long long uu_rm::remove(unsigned long long a0, unsigned long a1, char *a2)
{
    char *v0;  // [bp-0x168]
    unsigned long long v1;  // [bp-0x160]
    unsigned long long v2;  // [bp-0x158]
    unsigned long long v3;  // [bp-0x150]
    unsigned long long v4;  // [bp-0x148]
    unsigned long long v5;  // [bp-0x140]
    unsigned long long v6;  // [bp-0x138]
    char *v7;  // [bp-0x130]
    unsigned long long v8;  // [bp-0x128]
    void* v9;  // [bp-0x120]
    char *v10;  // [bp-0x110]
    unsigned long long v11;  // [bp-0x108]
    unsigned long long v12;  // [bp-0x100]
    unsigned long long v13;  // [bp-0xf8]
    char *v14;  // [bp-0xe8]
    unsigned long long v15;  // [bp-0xe0]
    int v16;  // [sp-0xd8], Other Possible Types: unsigned long long
    char v17;  // [bp-0xa8]
    unsigned long long v19[2];  // rax
    unsigned long long v20[2];  // rbx
    unsigned long long v21;  // r13b
    unsigned long long v22;  // rbp
    char v23;  // bpl
    char v24;  // al
    unsigned long long v26;  // rdx
    char v27;  // al

    v3 = a0;
    v4 = a1 * 16 + a0;
    v19 = v3.next();
    if (v19)
    {
        v20 = v19;
        v21 = *(a2) ^ 1;
        v22 = 0;
        if ((*(a2) & 1))
        {
            do
            {
                std::fs::symlink_metadata(&v15, v20[0], v20[1]);
                if ((int)v15 == 2)
                {
                    ::0x49f4b0::core::ptr::drop_in_place<std::io::error::Error>(v16);
                    (char)v16 = v21;
                }
                else
                {
                    v24 = ((*((int *)&v17) & 0xf000) == 0x4000 ? (char)uu_rm::handle_dir(v20[0], v20[1], a2) : (char)uu_rm::remove_file(v20[0], v20[1], a2));
                }
                v23 |= (char)v16;
                v22 = v22 & 0xffffffffffffff00 | v23;
                v20 = v3.next();
            } while (v20);
        }
        else
        {
            do
            {
                std::fs::symlink_metadata(&v15, v20[0], v20[1]);
                if ((int)v15 == 2)
                {
                    v12 = uucore::util_name();
                    v13 = v26;
                    v0 = &v12;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v5 = &g_57d6d0;
                    v6 = 2;
                    v9 = 0;
                    v7 = &v0;
                    v8 = 1;
                    std::io::stdio::_eprint(&v5);
                    v0.to_string_lossy(v20[0], v20[1]);
                    v5.to_vec(<&T as core::fmt::Display>::fmt, v2);
                    v14 = v7;
                    memcpy(&v13, &v5, 16);
                    v12 = 2;
                    v10 = &v12;
                    v11 = <uu_rm::RmError as core::fmt::Display>::fmt;
                    v5 = &g_57d6f0;
                    v6 = 2;
                    v9 = 0;
                    v7 = &v10;
                    v8 = 1;
                    std::io::stdio::_eprint(&v5);
                    core::ptr::drop_in_place<uu_rm::RmError>(&v12);
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v0);
                    ::0x49f4b0::core::ptr::drop_in_place<std::io::error::Error>((long long)v16);
                    (char)v2 = v21;
                }
                else
                {
                    v27 = ((*((int *)&v17) & 0xf000) == 0x4000 ? (char)uu_rm::handle_dir(v20[0], v20[1], a2) : (char)uu_rm::remove_file(v20[0], v20[1], a2));
                }
                v23 |= (char)v2;
                v22 = v22 & 0xffffffffffffff00 | v23;
                v20 = v3.next();
            } while (v20);
        }
    }
    else
    {
        v22 = 0;
    }
    return (unsigned int)v22 & 0xffffff00 | v23 & 1;
}
