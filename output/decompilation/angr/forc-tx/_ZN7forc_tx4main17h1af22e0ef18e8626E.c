long long forc_tx::main()
{
    char v0;  // [bp-0x4e8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x4e0]
    int v2;  // [bp-0x4d8], Other Possible Types: char, unsigned long long
    int v3;  // [bp-0x4c8], Other Possible Types: char
    char *v4;  // [bp-0x4b8]
    unsigned long long v5;  // [bp-0x4b0]
    char v6;  // [bp-0x4a8]
    int v7;  // [bp-0x488], Other Possible Types: char, unsigned long
    unsigned int v8;  // [bp-0x484]
    char v9;  // [bp-0x480], Other Possible Types: unsigned long long
    int v10;  // [bp-0x478], Other Possible Types: char *, unsigned long long
    char v11;  // [bp-0x470], Other Possible Types: unsigned long long
    int v12;  // [bp-0x468], Other Possible Types: void*
    char v13;  // [bp-0x460]
    char v14;  // [bp-0x450]
    char v15;  // [bp-0x2d0]
    char v16;  // [bp-0x1e8]
    unsigned long long v17;  // [bp-0x1d0]
    char v18;  // [bp-0x1c8]
    int v19;  // [bp-0x1b8]
    int v20;  // [bp-0x1a8]
    char v21;  // [bp-0x198]
    int v23;  // xmm0
    unsigned long long v24;  // rax
    char v25;  // bpl
    unsigned long long v26;  // r15
    unsigned long long v27;  // rax

    v15.parse();
    (char)v7.try_from(&v15);
    memcpy(&v0, &v9, 16);
    memcpy(&v2, &v11, 16);
    memcpy(&v3, &v13, 16);
    if (*((long long *)&v7) == 9223372036854775814)
    {
        v23 = *((int128_t *)&v0);
        v12 = v3;
        v10 = v2;
        v7 = v23;
        v24 = (char)v7.from();
        v25 = 1;
        v26 = *((long long *)&v16);
    }
    else
    {
        memcpy(&v21, &v14, 376);
        memcpy(&v18, &v0, 16);
        v19 = v2;
        v20 = v3;
        v17 = *((long long *)&v7);
        v26 = *((long long *)&v16);
        if (v26 == 0x8000000000000000)
        {
            serde_json::ser::to_vec_pretty(&(char)v7, &v17);
            if (*((long long *)&v7) != 0x8000000000000000)
            {
                v0 = *((long long *)&v7);
                v1 = v9;
                v2 = v10;
                v4 = &v0;
                v5 = <alloc::string::String as core::fmt::Display>::fmt;
                v7 = &g_5d05b0;
                v9 = 2;
                v12 = 0;
                v10 = &v4;
                v11 = 1;
                std::io::stdio::_print(&(char)v7);
                core::ptr::drop_in_place<fuel_tx::transaction::types::input::message::Message<fuel_tx::transaction::types::input::message::specifications::MessageData<fuel_tx::transaction::types::input::message::specifications::Signed>>>(v0, v1);
                core::ptr::drop_in_place<fuel_tx::transaction::Transaction>(&v17);
                return 0;
            }
            v24 = v1.from();
            v25 = 1;
        }
        else
        {
            (char)v7.create(&v16);
            if (*((int *)&v7) == 1)
            {
                v24 = v9.from();
            }
            else
            {
                v6.with_capacity(v8);
                v27 = serde_json::ser::to_writer_pretty(&v6, &v17);
                if (!v27)
                {
                    core::ptr::drop_in_place<fuel_tx::transaction::Transaction>(&v17);
                    return 0;
                }
                v24 = v27.from();
            }
        }
        core::ptr::drop_in_place<fuel_tx::transaction::Transaction>(&v17);
    }
    if (v26 == 0x8000000000000000)
    {
        return v24;
    }
    else if (v25)
    {
        core::ptr::drop_in_place<std::path::PathBuf>(&v16);
        return v24;
    }
    else
    {
        return v24;
    }
}
