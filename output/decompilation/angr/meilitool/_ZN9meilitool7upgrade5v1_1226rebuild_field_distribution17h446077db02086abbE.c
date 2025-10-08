long long meilitool::upgrade::v1_12::rebuild_field_distribution(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x119]
    char v1;  // [bp-0x118], Other Possible Types: unsigned long
    unsigned int v2;  // [bp-0x114]
    unsigned long long v3;  // [bp-0x110]
    unsigned long long v4;  // [bp-0x108]
    unsigned int v5;  // [bp-0x104]
    unsigned long long v6;  // [bp-0x100]
    int v7;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v8;  // [bp-0xe8]
    void* v9;  // [bp-0xd8], Other Possible Types: int, unsigned int
    unsigned int v10;  // [bp-0xd4]
    char v11;  // [bp-0xd0], Other Possible Types: unsigned long long
    char v12;  // [bp-0xc8], Other Possible Types: unsigned int, unsigned long long
    unsigned int v13;  // [bp-0xc7]
    unsigned int v14;  // [bp-0xc4]
    int v15;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned int v16;  // [bp-0xb8]
    unsigned long long v17;  // [bp-0xb0]
    char *v18;  // [bp-0xa8]
    char *v19;  // [bp-0xa0]
    unsigned long v20;  // [bp-0x98]
    unsigned long long v21;  // [bp-0x90]
    unsigned long long v22;  // [bp-0x88]
    char *v23;  // [bp-0x80]
    char v24;  // [bp-0x70]
    unsigned long long v25;  // [bp-0x68]
    unsigned long long v26;  // [bp-0x60]
    unsigned long long v27;  // [bp-0x50]
    unsigned int v28;  // [bp-0x48]
    int v29;  // [bp-0x40], Other Possible Types: char
    char v30;  // [bp-0x30]
    unsigned long long v32;  // rdx
    unsigned long long v33;  // r15
    unsigned long long v34;  // rcx
    unsigned long long v35;  // r8
    unsigned long long v36;  // rdx
    unsigned int v37;  // eax
    char v38;  // sil

    v24.join(a0, a1, "tasks", 5);
    v9 = 0;
    v12 = 0;
    v16 = 0;
    v15 = 429496729601;
    v1.open(&(char)v9, &v24);
    if (((char)v1.with_context(v25, v26) & 1))
    {
        core::ptr::drop_in_place<std::path::PathBuf>(&v24);
        return v32;
    }
    v6 = v32;
    (char)v9.new(&v6, v32, v34, v35);
    memcpy(&v1, &v11, 16);
    v4 = v15;
    if (v9 == 1)
    {
        v12 = v4;
        *((int128_t *)&v9) = *((int128_t *)&v1);
        v33 = (char)v9.from();
    }
    else
    {
        v8 = v4;
        memcpy(&v7, &v1, 16);
        meilitool::try_opening_database(&(char)v9, &v6, &v7);
        v33 = v11;
        if (!((char)v9 & 1))
        {
            meilitool::try_opening_database(&(char)v9, &v6, &v7);
            v1.with_context(&(char)v9, v25, v26);
            v36 = v3;
            if (!(v1 & 1))
            {
                v27 = v36;
                v28 = v4;
                (char)v9.len(v11, v12, &v7);
                if (!((char)(char)v9.context() & 1))
                {
                    v1.iter(v11, v12, &v7);
                    v37 = *((int *)&v1);
                    if (v37 == 5)
                    {
                        v29.collect(v3, (char)v4);
                        v1 = <alloc::sync::Arc<T> as core::default::Default>::default();
                        v0 = 0;
                        v18 = &v0;
                        v19 = &v1;
                        v15 = v29;
                        v17 = *((long long *)&v30);
                        v20 = &vvar_155{reg 32};
                        v21 = a0;
                        v22 = a1;
                        v23 = &v27;
                        v9 = v7;
                        v12 = v8;
                        v33 = std::thread::scoped::scope(&(char)v9);
                        core::ptr::drop_in_place<milli::progress::Progress>(&v1);
                        core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v6);
                        core::ptr::drop_in_place<std::path::PathBuf>(&v24);
                        return v33;
                    }
                    v38 = v4;
                    v14 = v5;
                    v13 = *((int *)((char *)&v4 + 1));
                    v9 = v37;
                    v10 = v2;
                    v11 = v3;
                    v12 = v38;
                    v36 = v9.from();
                }
            }
            v33 = v36;
        }
        core::ptr::drop_in_place<heed::txn::RwTxn>(&v7);
    }
    core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v6);
    core::ptr::drop_in_place<std::path::PathBuf>(&v24);
    return v33;
}
