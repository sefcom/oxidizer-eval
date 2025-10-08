long long uu_nice::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x404]
    char *v1;  // [bp-0x400], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x3f8]
    char v3;  // [bp-0x3f0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x3e8]
    unsigned long v5;  // [bp-0x3e0]
    char *v6;  // [bp-0x3d8], Other Possible Types: char
    char *v7;  // [bp-0x3d8]
    char **v8;  // [bp-0x3d0], Other Possible Types: unsigned long long
    char *v9;  // [bp-0x3c8], Other Possible Types: char
    char v10;  // [bp-0x3c4]
    unsigned long long v11;  // [bp-0x3c0]
    char v12;  // [bp-0x3b8]
    char v13;  // [bp-0x3b4]
    char v14;  // [bp-0x3a8]
    char v15;  // [bp-0x3a4]
    char *v16;  // [bp-0x398], Other Possible Types: unsigned long long
    char **v17;  // [bp-0x390]
    unsigned long long v18[3];  // [bp-0x388]
    char *v19;  // [bp-0x380]
    char **v20;  // [bp-0x378]
    unsigned int v21;  // [bp-0x370]
    char v22;  // [bp-0x36c]
    char v23;  // [bp-0x35c]
    unsigned int v24;  // [bp-0x34c]
    int v25;  // [bp-0x348], Other Possible Types: char
    unsigned long long v26;  // [bp-0x338]
    int v27;  // [bp-0x330], Other Possible Types: char
    unsigned long long v28;  // [bp-0x320]
    char v29;  // [bp-0x318]
    int v30;  // [bp-0x2f8], Other Possible Types: char, unsigned long
    unsigned int v31;  // [bp-0x2f4]
    unsigned long long v32;  // [bp-0x2f0]
    int v33;  // [bp-0x2e8], Other Possible Types: char *, unsigned long long
    unsigned int v34;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v35;  // [bp-0x2d8]
    char v36;  // [bp-0x2c8]
    unsigned int v38;  // eax
    unsigned int *v39;  // rbx
    unsigned long long v40;  // r15
    void* v41;  // rax
    unsigned long long v42[3];  // r15
    unsigned long long v43;  // rax
    void* v44;  // r14
    unsigned int v45;  // eax
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rax
    int v48;  // xmm0
    unsigned long long v49;  // r14

    uu_nice::standardize_nice_args(&v29, a0, a1);
    uu_nice::uu_app(&(char)v30);
    v6.try_get_matches_from(&(char)v30, &v29);
    if ((char)(((0 ^ v7) & (0 ^ -(v7))) >> 63))
        return v20.new(125);
    memcpy(&v22, &v10, 16);
    memcpy(&v23, &v13, 16);
    v24 = *((int *)&v15);
    v19 = v7;
    v20 = v8;
    v21 = *((int *)&v9);
    nix::errno::<impl nix::errno::consts::Errno>::clear();
    v38 = getpriority(0, 0);
    v0 = v38;
    v39 = __errno_location();
    v40 = *(v39) * 0x100000000 | 2;
    std::io::error::repr_bitpacked::decode_repr(&(char)v30, v40);
    if (v30)
    {
        core::option::unwrap_failed(&g_4daf40); /* do not return */
    }
    else if (v31)
    {
        core::ptr::drop_in_place<std::io::error::Error>(v40);
        v3 = *(v39) * 0x100000000 | 2;
        v6 = &v3;
        v8 = <std::io::error::Error as core::fmt::Display>::fmt;
        v30 = &g_4daed0;
        v32 = 1;
        v35 = 0;
        v33 = &v6;
        v34 = 1;
        v25.map_or_else(&(char)v30);
        core::ptr::drop_in_place<std::io::error::Error>(v3);
        v34 = 125;
        v30 = v25;
        v33 = v26;
        v41 = (char)v30.new();
        goto LABEL_4528ea;
    }
    else
    {
        core::ptr::drop_in_place<std::io::error::Error>(v40);
        (char)v30.try_get_one(&v19, _ZN7uu_nice7options10ADJUSTMENT17h1e587a7ee185f87dE, g_4dba68);
        v42 = _ZN7uu_nice7options10ADJUSTMENT17h1e587a7ee185f87dE.unwrap(g_4dba68, &(char)v30);
        if (!v42)
        {
            v45 = 10;
            if (((int)v19.contains_id(_ZN7uu_nice7options7COMMAND17h4229ca6852529be8E, g_4dba78) & 255))
                goto LABEL_452b52;
            v6 = &v0;
            v8 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
            v30 = &g_4dae78;
            v32 = 2;
            v35 = 0;
            v33 = &v6;
            v34 = 1;
            std::io::stdio::_print(&(char)v30);
            goto LABEL_452e64;
        }
        v18[0] = v42;
        if ((char)v19.contains_id(_ZN7uu_nice7options7COMMAND17h4229ca6852529be8E, g_4dba78))
        {
            v43 = core::num::<impl i32>::from_ascii_radix(v18[1], v18[2]);
            if (((char)v43 & 1))
            {
                v3 = v43 >> 8;
                v6 = &v18;
                v8 = <&T as core::fmt::Display>::fmt;
                v9 = &v3;
                v11 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
                v30 = &g_4daee0;
                v32 = 2;
                v35 = 0;
                v33 = &v6;
                v34 = 2;
                v27.map_or_else(&(char)v30);
                v34 = 125;
                v30 = v27;
                v33 = v28;
                v41 = (char)v30.new();
LABEL_4528ea:
                v44 = v41;
            }
            else
            {
                v45 = v43 >> 32;
LABEL_452b52:
                v0 = v38 + v45;
                if (setpriority(0, 0, v0) != -1)
                {
LABEL_452b6d:
                    (char)v30.try_get_many(&v19, _ZN7uu_nice7options7COMMAND17h4229ca6852529be8E, g_4dba78);
                    v6.unwrap(_ZN7uu_nice7options7COMMAND17h4229ca6852529be8E, g_4dba78, &(char)v30);
                    if (!v7)
                        core::option::unwrap_failed(&g_4dafe0); /* do not return */
                    v48 = *((int128_t *)&v7);
                    memcpy(&v36, &v14, 16);
                    memcpy(&v35, &v12, 16);
                    *((int128_t *)&v33) = *((int128_t *)&v9);
                    v30 = v48;
                    v3.collect(&(char)v30);
                    v6.collect(v4, v5 * 16 + v4);
                    v6.push();
                    if (!v9)
                        core::panicking::panic_bounds_check(0, 0, &g_4db010); /* do not return */
                    execvp(*(v8), v8);
                    v1 = uucore::util_name();
                    v2 = v46;
                    v16 = &v1;
                    v17 = &<&T as core::fmt::Display>::fmt;
                    v30 = &g_4dae58;
                    v32 = 2;
                    v35 = 0;
                    v33 = &v16;
                    v34 = 1;
                    std::io::stdio::_eprint(&(char)v30);
                    v16 = *(v39) * 0x100000000 | 2;
                    v1 = &v16;
                    v2 = <std::io::error::Error as core::fmt::Display>::fmt;
                    v30 = &g_4daf20;
                    v32 = 2;
                    v35 = 0;
                    v33 = &v1;
                    v34 = 1;
                    std::io::stdio::_eprint(&(char)v30);
                    core::ptr::drop_in_place<std::io::error::Error>(v16);
                    v49 = *(v39) * 0x100000000 | 2;
                    std::io::error::repr_bitpacked::decode_repr(&(char)v30, v49);
                    if (v30)
                        core::option::unwrap_failed(&g_4db028); /* do not return */
                    core::ptr::drop_in_place<std::io::error::Error>(v49);
                    uucore::mods::error::set_exit_code(v31 == 2 | 126);
                    core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v7, v8);
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::ffi::c_str::CString>>(&v3);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
                    return 0;
                }
                v16 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
                v3 = uucore::util_name();
                v4 = v46;
                v1 = *(v39) * 0x100000000 | 2;
                v7 = &v3;
                v8 = &<&T as core::fmt::Display>::fmt;
                v9 = &v1;
                v11 = <std::io::error::Error as core::fmt::Display>::fmt;
                v30 = &g_4daf00;
                v32 = 2;
                v35 = 0;
                v33 = &v7;
                v34 = 2;
                v47 = v16.write_fmt(&(char)v30);
                if (v47)
                {
                    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v47);
                    core::ptr::drop_in_place<std::io::error::Error>(v1);
                    uucore::mods::error::set_exit_code(125);
LABEL_452e64:
                    v44 = 0;
                }
                else
                {
                    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
                    core::ptr::drop_in_place<std::io::error::Error>(v1);
                    goto LABEL_452b6d;
                }
            }
        }
        else
        {
            v6.to_vec("A command must be given with an adjustment.\"\" is not a valid number: : warning: setpriority: /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 43);
            v33 = v9;
            *((int128_t *)&v30) = *((int128_t *)&v7);
            v34 = 125;
            v44 = (char)v30.new();
        }
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
        return v44;
    }
}
