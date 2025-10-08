long long uu_df::get_named_filesystems(void* a0, unsigned long long *a1, unsigned long a2, unsigned long long a3)
{
    char *v0;  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x370]
    unsigned long long v2;  // [bp-0x368]
    unsigned long long v3;  // [bp-0x360]
    void* v4;  // [bp-0x358]
    unsigned long long v5;  // [bp-0x350]
    void* v6;  // [bp-0x348]
    unsigned long long v7;  // [bp-0x330]
    unsigned long long v8;  // [bp-0x328]
    void* v9;  // [bp-0x320]
    int v10;  // [bp-0x318], Other Possible Types: unsigned long long
    int v12;  // [bp-0x318]
    unsigned long long v13;  // [bp-0x318]
    unsigned long long v14;  // [bp-0x318]
    unsigned long long v15;  // [bp-0x318]
    unsigned long long v16;  // [bp-0x310]
    unsigned long long v17;  // [bp-0x310]
    char *v18;  // [bp-0x308], Other Possible Types: unsigned long long
    void* v19;  // [bp-0x308]
    unsigned int v20;  // [bp-0x300], Other Possible Types: unsigned long long
    void* v21;  // [bp-0x2f8]
    char *v22;  // [sp-0x230], Other Possible Types: unsigned long long
    char *v23;  // [bp-0x230]
    unsigned long long v24;  // [sp-0x228]
    char *v25;  // [sp-0x220], Other Possible Types: unsigned long long
    char *v26;  // [bp-0x220]
    char v27;  // [bp-0x218], Other Possible Types: unsigned long long
    int v28;  // [bp-0x148]
    unsigned long long v29;  // [bp-0x138]
    int v30;  // [bp-0x130]
    unsigned long long v31;  // [bp-0x120]
    unsigned long long v32;  // [bp-0x118]
    unsigned long long v33;  // [sp-0x110]
    unsigned long long *v35;  // r12
    unsigned long long v36;  // r15
    unsigned long long v37;  // r15
    unsigned int v38;  // eax
    unsigned long v42;  // rdx
    unsigned long v43;  // r15

    v35 = a1;
    uucore::features::fsext::read_fs_list(&(char)v15);
    if ((char)(((0 ^ v10) & (0 ^ -(v10))) >> 63))
    {
        *((unsigned long long *)&a0[8]) = v17;
        *((void* *)&a0[16]) = v19;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v10;
    }
    v7 = v10;
    v8 = v17;
    v9 = v19;
    v4 = 0;
    v5 = 8;
    v6 = 0;
    if (a2)
    {
        v36 = a2 * 8;
        do
        {
            v37 = v36;
            v32.from_path(v17, v19, v35);
            if (v32 == 0x8000000000000000)
            {
                v38 = (char)v33;
                if (!v38)
                {
                    v22 = 1;
                    v24 = *(v35).as_ref();
                    v25 = v42;
                    v27 = 1;
                    v0 = &v22;
                    v1 = <os_display::Quoted as core::fmt::Display>::fmt;
                    *((unsigned long long **)&v12) = &g_502038;
                    v16 = 2;
                    v21 = 0;
                    v18 = &v0;
                    v20 = 1;
                    v30.map_or_else(&(unsigned long long)v12);
                    v20 = 1;
                    v12 = v30;
                    v18 = v31;
                    *((double *)&v2) = (unsigned long long)v12.new();
                    v3 = &g_502078;
                    uucore::mods::error::set_exit_code((unsigned int)v2.code());
                    v0 = uucore::util_name();
                    v1 = v42;
                    v23 = &v0;
                    v24 = <&T as core::fmt::Display>::fmt;
                    v26 = &v2;
                    v27 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v15 = &g_502008;
                    v16 = 3;
                    v21 = 0;
                    v18 = &v23;
                    v20 = 2;
                    std::io::stdio::_eprint(&v15);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v2, &g_502078);
                }
                else if (v38 == 1)
                {
                    v22 = *(v35).as_ref();
                    v24 = v42;
                    v0 = &v22;
                    v1 = <std::path::Display as core::fmt::Display>::fmt;
                    *((unsigned long long **)&v12) = &g_501fe8;
                    v16 = 2;
                    v21 = 0;
                    v18 = &v0;
                    v20 = 1;
                    v28.map_or_else(&(unsigned long long)v12);
                    v20 = 1;
                    v12 = v28;
                    v18 = v29;
                    *((double *)&v2) = (unsigned long long)v12.new();
                    v3 = &g_502078;
                    uucore::mods::error::set_exit_code((unsigned int)v2.code());
                    v0 = uucore::util_name();
                    v1 = v42;
                    v23 = &v0;
                    v24 = <&T as core::fmt::Display>::fmt;
                    v26 = &v2;
                    v27 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v13 = &g_502008;
                    v16 = 3;
                    v21 = 0;
                    v18 = &v23;
                    v20 = 2;
                    std::io::stdio::_eprint(&v13);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v2, &g_502078);
                }
                else
                {
                    v23.to_vec("no file systems processed: No such file or directory: \ncannot access ", 25);
                    v18 = v26;
                    *((int128_t *)&v10) = *((int128_t *)&v23);
                    v20 = 1;
                    *((double *)&v2) = (char)v15.new();
                    v3 = &g_502078;
                    uucore::mods::error::set_exit_code((unsigned int)v2.code());
                    v0 = uucore::util_name();
                    v1 = v42;
                    v23 = &v0;
                    v24 = <&T as core::fmt::Display>::fmt;
                    v26 = &v2;
                    v27 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v14 = &g_502008;
                    v16 = 3;
                    v21 = 0;
                    v18 = &v23;
                    v20 = 2;
                    std::io::stdio::_eprint(&v14);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v2, &g_502078);
                }
            }
            else
            {
                memcpy(&v23, &v32, 232);
                if (!(char)uu_df::is_included(&v23, a3))
                {
                    core::ptr::drop_in_place<uu_df::filesystem::Filesystem>(&v23);
                }
                else
                {
                    memcpy(&(char)v15, &v23, 232);
                    v4.push(&(char)v15);
                }
            }
            v35 += 1;
            v43 = v37 - 8;
            v36 = v43;
        } while (v37 != 8);
    }
    if (!(int)uucore::mods::error::get_exit_code() && !v6)
    {
        v23.to_vec("no file systems processed: No such file or directory: \ncannot access ", 25);
        v18 = v26;
        memcpy(&(char)v15, &v23, 16);
        v20 = 1;
        *((double *)&v0) = (char)v15.new();
        v1 = &g_502078;
        uucore::mods::error::set_exit_code((unsigned int)v0.code());
        v32 = uucore::util_name();
        v33 = v42;
        v22 = &v32;
        v24 = <&T as core::fmt::Display>::fmt;
        v25 = &v0;
        v27 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v10 = &g_502008;
        v16 = 3;
        v21 = 0;
        v18 = &v22;
        v20 = 2;
        std::io::stdio::_eprint(&v10);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, &g_502078);
    }
    *((void* *)&a0[16]) = v6;
    *((int128_t *)a0) = *((int128_t *)&v4);
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::fsext::MountInfo>>(&v7);
}
