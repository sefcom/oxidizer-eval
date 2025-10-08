long long uu_env::EnvAppData::run_program(struct_0 *a0, struct_1 *a1, char a2)
{
    unsigned long v0;  // [bp-0x2e8]
    char *v1;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long v2;  // [bp-0x2d8], Other Possible Types: unsigned long long
    char *v3;  // [bp-0x2d0], Other Possible Types: unsigned long
    char v4;  // [bp-0x2c8], Other Possible Types: unsigned long long
    unsigned long v5;  // [bp-0x2c0]
    unsigned int v6;  // [bp-0x2bc]
    unsigned long long v7;  // [bp-0x2b8]
    void* v8;  // [bp-0x2b0]
    char v9;  // [bp-0x2a8], Other Possible Types: unsigned long long
    unsigned long v10;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long v11;  // [bp-0x298]
    unsigned long v12;  // [bp-0x290]
    unsigned long v13;  // [bp-0x288]
    char *v14;  // [bp-0x280], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x278]
    unsigned long long v16;  // [bp-0x270]
    char *v17;  // [bp-0x270]
    unsigned long long v18;  // [bp-0x268]
    char *v19;  // [bp-0x260]
    unsigned long long v20;  // [bp-0x258]
    char *v21;  // [bp-0x250], Other Possible Types: void*
    unsigned long long v22;  // [bp-0x248]
    unsigned long v23;  // [bp-0x1c8]
    char *v24;  // [bp-0x1c0], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x1c0]
    int v26;  // [bp-0x1b8], Other Possible Types: unsigned long long [2], unsigned long long, unsigned long
    char *v27;  // [bp-0x1b0], Other Possible Types: unsigned long
    unsigned long long v28;  // [bp-0x1a8], Other Possible Types: char
    void* v29;  // [bp-0x1a0]
    unsigned long long v30;  // [bp-0x128]
    unsigned long v31;  // [bp-0x120]
    unsigned long v32;  // [bp-0x118]
    char v33;  // [bp-0x110]
    unsigned long long v35[2];  // r13
    unsigned long v36;  // r15
    unsigned long v37;  // r12
    unsigned long v38;  // rbx
    unsigned long long v39;  // rax
    unsigned long long v40[2];  // rdx
    unsigned long long v41[2];  // rdx
    unsigned long long v42;  // rax
    unsigned long v43;  // r15
    void* v45;  // rax
    unsigned long v46;  // rax
    unsigned int v47;  // edi
    void* v48;  // r15
    unsigned long long v50;  // rdi

    v13 = a1->field_58;
    if (!a1->field_58)
        core::panicking::panic_bounds_check(0, 0, &g_510ba8); /* do not return */
    v35 = a1->field_50;
    v31 = v35[0];
    v32 = v35[1];
    v30 = 0x8000000000000000;
    v0 = v31;
    v9.clone(&v30);
    v12 = v32;
    v33.new(v31, v32);
    v36 = v35 + 1;
    v33.args(v36, v13 - 1);
    v37 = a1->field_88;
    if (v37)
    {
        v38 = a1->field_90;
        v33.arg0(v37, v38);
        core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(v9, v10);
        v9 = 0x8000000000000000;
        v10 = v37;
        v11 = v38;
        if (a2)
        {
            v24 = 1;
            v26 = v37;
            v27 = v38;
            v28 = 1;
            v1 = &v24;
            v2 = <os_display::Quoted as core::fmt::Display>::fmt;
            v16 = &g_510ab8;
            v18 = 2;
            v21 = 0;
            v19 = &v1;
            v20 = 1;
            std::io::stdio::_eprint(&v16);
LABEL_4746aa:
            v24 = 1;
            v26 = v0;
            v27 = v12;
            v28 = 0;
            v1 = &v24;
            v2 = <os_display::Quoted as core::fmt::Display>::fmt;
            v16 = &g_510ad8;
            v18 = 2;
            v21 = 0;
            v19 = &v1;
            v20 = 1;
            std::io::stdio::_eprint(&v16);
            v14 = "   argcannot unset : Invalid argument";
            v15 = 6;
            v25 = 1;
            *((int128_t *)&v26) = *((int128_t *)&v10);
            v28 = 1;
            v1 = &v14;
            v2 = <&T as core::fmt::Display>::fmt;
            v3 = &v25;
            v4 = <os_display::Quoted as core::fmt::Display>::fmt;
            v17 = &g_510af8;
            v18 = 3;
            v21 = 0;
            v19 = &v1;
            v20 = 2;
            std::io::stdio::_eprint(&v17);
            v5 = v36;
            v7 = &v35[v13];
            v8 = 0;
            v39 = (char)v5.next();
            if (v40)
            {
                do
                {
                    v23 = v39 + 1;
                    v1 = 1;
                    v2 = v41[0];
                    v3 = v41[1];
                    v4 = 1;
                    v17 = &v14;
                    v18 = <&T as core::fmt::Display>::fmt;
                    v19 = &v23;
                    v20 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                    v21 = &v1;
                    v22 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v25 = &g_510b28;
                    v26 = 4;
                    v29 = 0;
                    v27 = &v17;
                    v28 = 3;
                    std::io::stdio::_eprint(&v25);
                    v39 = (char)v5.next();
                    v40 = v40;
                } while (v40);
            }
        }
    }
    else if (!(!a2))
    {
        goto LABEL_4746aa;
    }
    (char)v5.status(&v33);
    if ((int)v5 == 1)
    {
        v14 = &v7;
        v42 = (unsigned long long)v7.kind();
        v43 = v12;
        if (!(v42 & 255))
            goto LABEL_474944;
        switch ((unsigned int)v42)
        {
        case 1:
            v24 = uucore::util_name();
            v26[0] = v40;
            v1 = &v24;
            v2 = <&T as core::fmt::Display>::fmt;
            v16 = &g_510958;
            v18 = 2;
            v21 = 0;
            v19 = &v1;
            v20 = 1;
            std::io::stdio::_eprint(&v16);
            v24 = 1;
            v26 = v0;
            v27 = v43;
            v28 = 1;
            v1 = &v24;
            v2 = <os_display::Quoted as core::fmt::Display>::fmt;
            v16 = &g_510b68;
            v18 = 2;
            v21 = 0;
            v19 = &v1;
            v20 = 1;
            std::io::stdio::_eprint(&v16);
            break;
        case 20:
LABEL_474944:
            v45 = a0->field_1.make_error_no_such_file_or_dir(v0, v43);
            goto LABEL_474b76;
        default:
            v24 = uucore::util_name();
            v26[0] = v40;
            v1 = &v24;
            v2 = <&T as core::fmt::Display>::fmt;
            v16 = &g_510958;
            v18 = 2;
            v21 = 0;
            v19 = &v1;
            v20 = 1;
            std::io::stdio::_eprint(&v16);
            v24 = &v14;
            v26 = <&T as core::fmt::Debug>::fmt;
            v16 = &g_510b88;
            v18 = 2;
            v21 = 0;
            v19 = &v24;
            v20 = 1;
            std::io::stdio::_eprint(&v16);
        }
        v45 = 126.from();
        goto LABEL_474b76;
    }
    else
    {
        v46 = v6;
        if ((unsigned int)v46)
        {
            v47 = v46;
            if (!((char)v47 & 127))
            {
                v45 = v46 >> 8 & 4294967295.from();
            }
            else
            {
                if (((char)v47 & 127) + 1 > 1)
                {
                    v47 & 127.try_from().unwrap((unsigned int)v40);
                    v17.all();
                    v25.new(&v17);
                    nix::sys::signal::sigaction(&v17, (unsigned int)v40, &v25);
                    nix::sys::signal::raise((unsigned int)v40);
                    v50 = &g_510bf0;
                }
                else
                {
                    v50 = &g_510bc0;
                }
                core::option::unwrap_failed(v50); /* do not return */
            }
LABEL_474b76:
            v48 = v45;
            core::ptr::drop_in_place<core::result::Result<std::process::ExitStatus,std::io::error::Error>>(&(char)v5);
            core::ptr::drop_in_place<std::process::Command>(&v33);
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<std::process::ExitStatus,std::io::error::Error>>(&(char)v5);
            core::ptr::drop_in_place<std::process::Command>(&v33);
            v48 = 0;
        }
        core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(v9, v10);
        core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(0x8000000000000000, v0);
        return v48;
    }
}
