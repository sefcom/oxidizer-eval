long long fish::function::autoload_names(unsigned long long a0, unsigned long a1, struct_0 **a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0x14c]
    int v1;  // [bp-0x148]
    unsigned long v2;  // [bp-0x140]
    unsigned long long v3;  // [bp-0x138]
    unsigned long v4;  // [bp-0x128]
    unsigned long long v5;  // [bp-0x120]
    unsigned long long v6[3];  // [bp-0x118]
    char v7;  // [bp-0x110]
    unsigned long long v8;  // [bp-0x110]
    unsigned long long v9;  // [bp-0x108]
    int v10;  // [bp-0x100]
    char v11;  // [bp-0x100]
    int v12;  // [bp-0xf0]
    int v13;  // [bp-0xe0]
    int v14;  // [bp-0xd0]
    unsigned long long v15;  // [bp-0xc0]
    unsigned long long v16;  // [bp-0xb8]
    unsigned long long v17[3];  // [bp-0xb0]
    char v18;  // [bp-0xa8]
    unsigned long long v19;  // [bp-0x98]
    char v20;  // [bp-0x88]
    int v21;  // [bp-0x78]
    int v22;  // [bp-0x68]
    int v23;  // [bp-0x58]
    int v24;  // [bp-0x48]
    unsigned long long v25;  // [bp-0x38]
    unsigned long v27;  // r15
    unsigned long long v28[3];  // rdx
    unsigned long long v29;  // rax

    v0 = a3;
    a2(&v7);
    if (!v8)
        return core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v7);
    v3 = *((long long *)&v11);
    *((int128_t *)&v1) = *((int128_t *)&v8);
    if (!v2)
        return core::ptr::drop_in_place<fish::env::var::EnvVar>(&(char)v1);
    v4 = (long long)v1 + v2 * 24 + 16;
    v27 = (long long)v1 + 16;
    while (true)
    {
        v7.new(*((long long *)(v27 + 8)), *((long long *)(v27 + 16)));
        if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
        {
            core::ptr::drop_in_place<core::result::Result<fish::wutil::dir_iter::DirIter,std::io::error::Error>>(&v7);
            v27 += 24;
            if (v27 == v4)
                break;
        }
        else
        {
            v25 = v15;
            v24 = v14;
            v23 = v13;
            v22 = v12;
            v21 = v10;
            memcpy(&v20, &v8, 16);
            while (true)
            {
                v16 = v20.next();
                v17[0] = v28;
                if (v16 == 2)
                    break;
                v5 = v16;
                v6[0] = v28;
                if (!((char)v16 & 1) && ((char)v0 || (int)v28[1].char_at(v28[2], 0) != 95))
                {
                    v8 = v28[1];
                    v9 = v28[1] + v28[2] * 4;
                    if ((v28 & (char)v8.rposition()))
                    {
                        v29 = v28[1].slice_from(v28[2], v28);
                        if (v29.eq_by(v29 + v28 * 4, ".fish/", "/") && !v28.is_dir())
                        {
                            v8.to_vec(v28[1].slice_to(v28[2], v28), a2);
                            v19 = (long long)v10;
                            memcpy(&v18, &v8, 16);
                            a0.insert(&v18);
                        }
                    }
                }
                core::ptr::drop_in_place<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>(&v5);
            }
            core::ptr::drop_in_place<core::option::Option<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>>(&v16);
            core::ptr::drop_in_place<fish::wutil::dir_iter::DirIter>(&v20);
            v27 += 24;
            if (v27 == v4)
                break;
        }
    }
    return core::ptr::drop_in_place<fish::env::var::EnvVar>(&(char)v1);
}
