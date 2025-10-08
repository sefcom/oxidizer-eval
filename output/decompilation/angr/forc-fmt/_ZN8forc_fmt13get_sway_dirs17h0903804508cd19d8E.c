void forc_fmt::get_sway_dirs(unsigned long a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x1c8]
    unsigned long long v1;  // [bp-0x1c0]
    int v2;  // [bp-0x1b8]
    unsigned long long v3;  // [bp-0x1b0]
    unsigned long long v4;  // [bp-0x1a8]
    void* v5;  // [bp-0x1a0]
    unsigned long long v6;  // [bp-0x198]
    void* v7;  // [bp-0x190]
    unsigned long long v8;  // [bp-0x188]
    struct_1 *v9;  // [bp-0x180]
    unsigned long v10;  // [bp-0x178]
    unsigned long long v11;  // [bp-0x170]
    char v12;  // [bp-0x168]
    struct_2 *v13;  // [bp-0x160]
    int v14;  // [bp-0x158], Other Possible Types: unsigned long long
    int v15;  // [bp-0x158], Other Possible Types: unsigned long
    unsigned long v16;  // [bp-0x148]
    unsigned long long v17;  // [bp-0x140]
    unsigned long long v18;  // [bp-0x138]
    unsigned long long v19;  // [bp-0x130]
    int v20;  // [bp-0x128]
    unsigned long v21;  // [bp-0x118]
    unsigned long long v22;  // [bp-0x108]
    char v23;  // [bp-0x100]
    char v24;  // [bp-0xf0]
    unsigned long long v25;  // [bp-0xe0]
    char v26;  // [bp-0xd8]
    unsigned long long v27;  // [bp-0xd0]
    char v28;  // [bp-0xc8]
    struct_1 *v30;  // rax
    unsigned long long v31;  // rax
    struct_1 *v32;  // rcx
    unsigned long long v33;  // rax
    struct_3 *v34;  // rax

    v5 = 0;
    v6 = 8;
    v7 = 0;
    v30 = 8.alloc_impl(24);
    if (!v30)
        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
    v30->field_10 = a1->field_10;
    v30->field_0 = a1->field_0;
    v8 = 1;
    v9 = v30;
    v31 = 1;
    while (true)
    {
        v10 = v31 - 1;
        v32 = v9;
        v33 = v10 * 3;
        *((int128_t *)&v14) = *((int128_t *)((char *)v32 + 8 * v33));
        v16 = (&v32->field_10)[v33];
        if (v15 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v14);
            v13->field_10 = 0;
            v13->field_0 = *((int128_t *)&v5);
            core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v8);
            return;
        }
        v34 = (char *)v32 + 8 * v33;
        v21 = v34->field_10;
        *((uint128_t *)&v20) = v34->field_0;
        std::fs::read_dir(&v0, &v20);
        if ((char)v1 != 2)
        {
            v11 = v0;
            v12 = v1;
            while (true)
            {
                v25.try_fold(&v11);
                if (!v25)
                    break;
                memcpy(&v24, &v28, 16);
                memcpy(&v23, &v26, 16);
                v22 = v25;
                v17.path(&v22);
                if (!(char)v18.is_dir(v19))
                {
LABEL_7d3570:
                    core::ptr::drop_in_place<std::path::PathBuf>(&v17);
                    goto LABEL_7d3578;
                }
                else
                {
                    v25.spec_to_string(v18, v19);
                    v4 = v27;
                    *((int128_t *)&v2) = *((int128_t *)&v25);
                    v8.push(&(char)v2, &g_c0a2f0);
                    (char)v2.join(v18, v19, "Forc.tomlmissing field `workspace`Cannot get parent dir of /capacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.42/src/util/flat_map.rs", 9);
                    std::fs::metadata(&v25, v3, v4);
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v25);
                    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v2);
                    if ((unsigned int)v25 == 2)
                        goto LABEL_7d3570;
                    v5.push(&v17, &g_c0a308);
LABEL_7d3578:
                    core::ptr::drop_in_place<std::fs::DirEntry>(&v22);
                }
            }
            core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<std::fs::DirEntry>>(&v25);
            core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir,forc_fmt::get_sway_dirs::{{closure}}>>(&v11);
            if ((char)v1 != 2)
                goto LABEL_7d34d8;
        }
        core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v0);
LABEL_7d34d8:
        v31 = v10;
        if (!v10)
        {
            v14 = 0x8000000000000000;
            v14 = v15;
            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v14);
            v13->field_10 = 0;
            v13->field_0 = *((int128_t *)&v5);
            core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v8);
            return;
        }
    }
}
