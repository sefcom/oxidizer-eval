long long uu_who::platform::unix::Who::print_user(struct_0 *a0, struct_1 *a1)
{
    void* v0;  // [bp-0x200]
    unsigned int v1;  // [bp-0x1f0]
    unsigned int v2;  // [bp-0x1ec]
    unsigned long long v3;  // [bp-0x1e8]
    void* v4;  // [bp-0x1e0]
    unsigned long v5;  // [bp-0x1d8]
    char v6;  // [bp-0x1d0], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x1c8]
    unsigned long long v8;  // [bp-0x1c0]
    unsigned long long v9;  // [bp-0x1b8]
    char v10;  // [bp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x1a8]
    unsigned long long v12;  // [bp-0x1a0]
    char v13;  // [bp-0x198]
    unsigned long long v14;  // [bp-0x198]
    unsigned long long v15;  // [bp-0x190]
    unsigned long long v17;  // [bp-0x188]
    char *v19;  // [bp-0x180]
    unsigned long long v20;  // [bp-0x178]
    unsigned long long v21;  // [bp-0x170]
    int v22;  // [bp-0x168]
    unsigned long long v23;  // [bp-0x160]
    unsigned long long v24;  // [bp-0x158]
    unsigned long long v25;  // [bp-0x148]
    unsigned long long v26;  // [bp-0x140]
    unsigned long long v27;  // [bp-0x138]
    unsigned long long v28;  // [bp-0x130]
    char v29;  // [bp-0x128]
    unsigned long long v30;  // [bp-0x120]
    unsigned long long v31;  // [bp-0x118]
    char v32;  // [bp-0x110]
    unsigned long long v33;  // [bp-0x108]
    unsigned long long v34;  // [bp-0x100]
    char *v35;  // [bp-0xf8]
    unsigned long long v36;  // [bp-0xf0]
    char v37;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v38;  // [bp-0xe8]
    unsigned long long v39;  // [bp-0xe0]
    char *v40;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v41;  // [bp-0xd0]
    void* v42;  // [bp-0xc8]
    char v43;  // [bp-0xb0]
    char v44;  // [bp-0x80]
    unsigned int v46;  // ebp
    unsigned long long v48;  // r14

    v10.to_vec("/devCyan    LINE\"`$\\EADV", 4);
    v37.tty_device(a1);
    v10.push(v39, v40);
    core::ptr::drop_in_place<alloc::string::String>(&v37);
    std::fs::metadata(&v37, v11, v12);
    if (v37 == 2)
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, v39);
        v46 = 63;
LABEL_468886:
        v15 = "  ?()failed to canonicalize ";
        v17 = 3;
        v14 = 0x8000000000000000;
        if (a0->field_18)
            goto LABEL_46880f;
LABEL_4688b4:
        (char)v3.host(a1);
        v48 = v5;
        if (v48)
        {
LABEL_4688cc:
            v19 = &v3;
            v20 = <alloc::string::String as core::fmt::Display>::fmt;
            v37 = &g_4fefa8;
            v39 = 2;
            v42 = 0;
            v40 = &v19;
            v41 = 1;
            v6.map_or_else(&v37);
            *((int128_t *)&v22) = *((int128_t *)&v6);
            v24 = v8;
LABEL_46895a:
            v9 = v48;
            v29.user(a1);
            v1 = v46;
            v32.tty_device(a1);
            v27 = v31;
            v28 = v30;
            v26 = v33;
            v25 = v34;
            uu_who::platform::unix::time_string(&v19, a1);
            v2 = a1->field_4;
            v35 = &v2;
            v36 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
            v37 = &g_418a60;
            v39 = 1;
            v42 = 0;
            v40 = &v35;
            v41 = 1;
            v6.map_or_else(&v37);
            v40 = v8;
            *((int128_t *)&v38) = *((int128_t *)&v6);
            v0 = 0;
            a0.print_line(v28, v27, v1, v26, v25, (unsigned int)v20, v21, (unsigned int)v15, v17, (int)(int128_t)(&v38)[8], (int128_t)(&v38)[8], (int)*((int128_t *)&v23), *((int128_t *)&v23), 1);
            core::ptr::drop_in_place<alloc::string::String>(&v37);
            core::ptr::drop_in_place<alloc::string::String>(&v19);
            core::ptr::drop_in_place<alloc::string::String>(&v32);
            core::ptr::drop_in_place<alloc::string::String>(&v29);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v22);
            if (v9)
                core::ptr::drop_in_place<alloc::string::String>(&v3);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v13);
            core::ptr::drop_in_place<std::path::PathBuf>(v10, v11);
            return 0;
        }
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v37, v39);
        v46 = (!(v43 & 16)) * 2 + 43;
        if (!*((long long *)&v44))
            goto LABEL_468886;
        uu_who::platform::unix::idle_string(&v13, *((long long *)&v44));
        if (!a0->field_18)
            goto LABEL_4688b4;
LABEL_46880f:
        v37.canon_host(a1);
        v6.map_err_context(&v37, a1);
        v48 = v8;
        if (v6 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v13);
            core::ptr::drop_in_place<std::path::PathBuf>(v10, v11);
            return v7;
        }
        v3 = v6;
        v4 = v7;
        v5 = v48;
        if (v48)
            goto LABEL_4688cc;
    }
    v24 = v5;
    *((int128_t *)&v22) = *((int128_t *)&v3);
    goto LABEL_46895a;
}
