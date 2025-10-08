void uu_cp::copydir::copy_direntry(void* a0, unsigned long long a1, struct_0 *a2, struct_1 *a3, unsigned long long a4, unsigned int a5, unsigned long long a6, unsigned long long a7)
{
    struct_2 *v0;  // [bp-0x218]
    unsigned int v1;  // [bp-0x20c]
    int v2;  // [bp-0x208]
    unsigned long long v3;  // [bp-0x200]
    unsigned long v4;  // [bp-0x1f8]
    int v5;  // [bp-0x1e8]
    unsigned long long v6;  // [bp-0x1e0]
    unsigned long v7;  // [bp-0x1d8]
    unsigned long long v8;  // [bp-0x1c8]
    unsigned long long v9;  // [bp-0x1c0]
    unsigned long long v10;  // [bp-0x1b0]
    char *v11;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x1a0]
    char *v13;  // [bp-0x198]
    unsigned long long v14;  // [bp-0x190]
    void* v15;  // [bp-0x188]
    char *v16;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x170]
    int v18;  // [bp-0x168], Other Possible Types: char
    int v19;  // [bp-0x158]
    int v20;  // [bp-0x148]
    unsigned long long v21;  // [bp-0x138]
    unsigned long v22;  // [bp-0x130]
    unsigned long long v23;  // [bp-0x128]
    char *v24;  // [bp-0x118], Other Possible Types: unsigned long long
    int v25;  // [bp-0x110], Other Possible Types: unsigned long long
    char *v26;  // [bp-0x108]
    char v27;  // [bp-0x100], Other Possible Types: unsigned long long
    char v28;  // [bp-0xf8], Other Possible Types: unsigned long long
    int v29;  // [bp-0xf8]
    unsigned long long v30;  // [bp-0xf0]
    int v31;  // [bp-0xe8], Other Possible Types: char *, char
    unsigned long long v32;  // [bp-0xe0]
    int v33;  // [bp-0xd8], Other Possible Types: void*, char, unsigned long long
    char v34;  // [bp-0xd0]
    unsigned long long v35;  // [bp-0xc8]
    char v36;  // [bp-0x48]
    unsigned long long v37;  // r12
    unsigned long long v38;  // r15
    void* v39;  // rcx
    int v40;  // xmm0
    int v41;  // xmm1
    int v42;  // xmm2
    int v43;  // xmm0
    int v44;  // xmm1
    char *v45;  // r14
    char *v46;  // rdi
    unsigned long long v47;  // r14
    unsigned int v48;  // eax
    unsigned long long v50;  // rdx

    v1 = a5;
    v7 = *((long long *)((char *)&a2->field_18 + 8));
    *((int128_t *)&v5) = *((int128_t *)&(&a2->field_10)[1]);
    v4 = a2->field_30;
    *((int128_t *)&v2) = *((int128_t *)&a2->field_28);
    v37 = a2->field_8;
    v38 = a2->field_10;
    if ((char)v37.is_symlink(v38) && !a3->padding_4b[12])
    {
        uu_cp::copy_link(a0, v37, v38, v3, v4, a4);
        goto LABEL_4998ae;
    }
    if ((char)v37.is_dir(v38))
    {
        v23 = v3;
        v22 = v4;
        std::fs::metadata(&v28, v3, v4);
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v28);
        if ((unsigned int)v28 != 2)
            goto LABEL_49949e;
        if (*((char *)&a2->field_30 + 8))
        {
            v28.from("cannot overwrite non-directory with directorycannot open  for reading-r not specified; omitting directory cannot copy a directory, , into itself, ", 45);
            v39 = a0;
            v0->field_28[0] = v35;
            v40 = *((int128_t *)&v28);
            v41 = *((int128_t *)&v31);
            v42 = *((int128_t *)&v33);
            goto LABEL_4998a3;
        }
        else
        {
            uu_cp::copydir::build_dir(&v28, &(char)v2, 0, (char)a3->field_48, a3->field_48[2], v37, v38);
            if (v28 == 9223372036854775820)
            {
                if (a3->padding_5a[4])
                {
                    uu_cp::context_for(&v18, v6, v7, v23, v22);
                    v11 = &v18;
                    v12 = <alloc::string::String as core::fmt::Display>::fmt;
                    v28 = &g_55e620;
                    v30 = 2;
                    v33 = 0;
                    v31 = &v11;
                    v32 = 1;
                    std::io::stdio::_print(&v28);
                    core::ptr::drop_in_place<alloc::string::String>(&v18);
                }
                *((unsigned long long *)a0) = 9223372036854775820;
            }
            else
            {
                v43 = *((int128_t *)&v30);
                v44 = *((int128_t *)&v32);
                *((int128_t *)((char *)&v0->field_18 + 8)) = *((int128_t *)&v34);
                *((void*)((char *)&v0->field_8 + 8)) = v44;
                *((void*)&(&v0->field_0)[1]) = v43;
                v0->field_0 = v28;
            }
            v45 = &(char)v5;
            v46 = &(char)v2;
            goto LABEL_4998b8;
        }
    }
LABEL_49949e:
    if (!(char)v37.is_dir(v38))
    {
        uu_cp::copy_file(&v18, a1, v37, v38, v3, v4, a3, a4, a6, a7, 0);
        if (*((long long *)&v18) == 9223372036854775820)
        {
            v18.drop_in_place<core::result::Result<(),uu_cp::Error>>();
            goto LABEL_499515;
        }
        v35 = v21;
        v33 = v20;
        v31 = v19;
        v29 = v18;
        if ((char)v1)
        {
            if (!(char)v37.is_symlink(v38))
                goto LABEL_49987b;
            if (v28 + 9223372036854775820 == 14)
            {
                core::ptr::drop_in_place<std::io::error::Error>(&(char)v33);
                goto LABEL_499869;
            }
            else
            {
                core::ptr::drop_in_place<uu_cp::Error>(&v18);
                goto LABEL_499515;
            }
        }
        if (v28 + 9223372036854775820 == 14)
        {
            v47 = v33;
            if ((char)v47.kind() != 1)
                goto LABEL_49987b;
            v10 = v47;
            v48 = (unsigned int)v47.kind();
            v24 = 1;
            *((int128_t *)&v25) = (int128_t)(&v5)[8];
            v27 = 1;
            v16 = &v24;
            v17 = <os_display::Quoted as core::fmt::Display>::fmt;
            v11 = &g_55e640;
            v12 = 2;
            v15 = 0;
            v13 = &v16;
            v14 = 1;
            v36.map_or_else(&v11);
            v8 = v48.new(&v36);
            v9 = &g_55e348;
            uucore::mods::error::set_exit_code((unsigned int)uucore::mods::error::UError::code());
            v16 = uucore::util_name();
            v17 = v50;
            v24 = &v16;
            v25 = <&T as core::fmt::Display>::fmt;
            v26 = &v8;
            v27 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v11 = &g_55e660;
            v12 = 3;
            v15 = 0;
            v13 = &v24;
            v14 = 2;
            std::io::stdio::_eprint(&v11);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v8, &g_55e348);
            core::ptr::drop_in_place<std::io::error::Error>(&v10);
LABEL_499869:
            core::ptr::drop_in_place<alloc::string::String>(&(char)v29);
            goto LABEL_499515;
        }
        else
        {
LABEL_49987b:
            v39 = a0;
            v0->field_28[0] = v21;
            v40 = v18;
            v41 = v19;
            v42 = v20;
LABEL_4998a3:
            v39[32] = v42;
            v39[16] = v41;
            *(v39) = v40;
LABEL_4998ae:
            v45 = &(char)v5;
            v46 = &(char)v2;
        }
    }
    else
    {
LABEL_499515:
        v45 = &(&a2->field_10)[1];
        v46 = &a2->field_28;
        *((long long *)a0) = 9223372036854775820;
    }
LABEL_4998b8:
    core::ptr::drop_in_place<std::path::PathBuf>(v46);
    core::ptr::drop_in_place<std::path::PathBuf>(v45);
    core::ptr::drop_in_place<std::path::PathBuf>(a2);
    return;
}
