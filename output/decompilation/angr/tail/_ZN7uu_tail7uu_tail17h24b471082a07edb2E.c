long long uu_tail::uu_tail(struct_0 *a0)
{
    char v0;  // [bp-0x19a]
    char v1;  // [bp-0x199]
    int v2;  // [bp-0x198]
    unsigned long long v3;  // [bp-0x190]
    unsigned long long v4;  // [bp-0x188]
    unsigned long long v5;  // [bp-0x178]
    unsigned long long v6;  // [bp-0x170]
    char v7;  // [bp-0x168]
    char v8;  // [bp-0x150]
    int v9;  // [bp-0xc0]
    char v10;  // [bp-0xb0]
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rdx
    unsigned long long v14[6];  // rax
    unsigned long long v15[6];  // rbp
    unsigned long long v16;  // rcx
    char v17;  // al
    unsigned long long v18;  // rax

    v0 = a0->field_4a;
    v1 = 1;
    v8.from(a0);
    v12 = v8.start(a0);
    if (v12)
    {
        ::0x4f29d0::core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(&v8);
        return v12;
    }
    v7.clone(&a0->padding_0[24]);
    v5 = v7.into_iter();
    v6 = v13;
    v14 = v5.next();
    if (v14)
    {
        v15 = v14;
        do
        {
            if ((char)(((0 ^ v15[3]) & (0 ^ -(v15[3]))) >> 63))
            {
                v12 = uu_tail::tail_stdin(a0, &v0, v15, &v8);
            }
            else
            {
                v9.to_owned("/dev/stdin: \nsrc/uu/tail/src/tail.rs", 10);
                v16 = *((long long *)&v10);
                v4 = *((long long *)&v10);
                v2 = v9;
                if (v15[4].eq(v15[5], v3, v16))
                {
                    ::0x4f2890::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v2);
                    v12 = uu_tail::tail_stdin(a0, &v0, v15, &v8);
                }
                else
                {
                    ::0x4f2890::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v2);
                    v12 = uu_tail::tail_file(a0, &v0, v15, v15[4], v15[5], &v8, 0);
                }
            }
            if (v12)
            {
                ::0x4f2b40::core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(&v7);
                ::0x4f29d0::core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(&v8);
                return v12;
            }
            v15 = v5.next();
        } while (v15);
    }
    ::0x4f2b40::core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(&v7);
    if (a0->field_4c != 2)
    {
        v17 = a0.has_only_stdin();
        if (!(!a0->field_44 & v17))
        {
            memcpy(&v9, &v8, 144);
            v18 = uu_tail::follow::watch::follow(&v9, a0);
            if (v18)
                return v18;
        }
    }
    uucore::mods::error::get_exit_code();
    ::0x4f29d0::core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(&v8);
    return 0;
}
