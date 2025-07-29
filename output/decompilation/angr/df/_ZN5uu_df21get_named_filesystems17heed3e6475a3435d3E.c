long long uu_df::get_named_filesystems(struct_1 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x3f8]
    int v1;  // [bp-0x3f8]
    unsigned long long v2;  // [bp-0x3f0]
    char *v3;  // [bp-0x3e8]
    unsigned long long v4;  // [sp-0x3d8]
    int v5;  // [bp-0x3d8]
    unsigned long long v6;  // [sp-0x3d0]
    char *v7;  // [bp-0x3c8], Other Possible Types: unsigned long long
    char v8;  // [bp-0x3c0]
    unsigned long long v9;  // [bp-0x3b0]
    unsigned long long v10;  // [bp-0x3a8]
    void* v11;  // [bp-0x3a0]
    unsigned long long v12;  // [bp-0x398]
    void* v13;  // [bp-0x390]
    unsigned long long v14;  // [bp-0x388]
    unsigned long long v15;  // [bp-0x380]
    unsigned long long v16;  // [bp-0x378]
    unsigned long long v17;  // [bp-0x368]
    unsigned long long v18;  // [bp-0x360]
    int v19;  // [bp-0x358], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x358]
    unsigned long long v21;  // [bp-0x358]
    unsigned long long v22;  // [bp-0x358]
    unsigned long long v23;  // [bp-0x350]
    char *v24;  // [bp-0x348], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v25;  // [bp-0x340], Other Possible Types: unsigned int
    int v26;  // [bp-0x340]
    int v27;  // [bp-0x340]
    void* v28;  // [bp-0x338]
    char *v29;  // [bp-0x330]
    char *v30;  // [bp-0x268]
    int v31;  // [bp-0x268]
    int v32;  // [bp-0x268]
    unsigned long long v33;  // [bp-0x260]
    char *v34;  // [bp-0x258]
    unsigned long long v35;  // [bp-0x250]
    int v36;  // [bp-0x248]
    int v37;  // [bp-0x178]
    unsigned long long v38;  // [bp-0x168]
    int v39;  // [bp-0x160]
    unsigned long long v40;  // [bp-0x150]
    int v41;  // [bp-0x148]
    unsigned long long v42;  // [bp-0x138]
    char v43;  // [bp-0x130]
    unsigned long long v44;  // [bp-0x120]
    unsigned long long v45;  // [bp-0x118]
    unsigned long long v46;  // [sp-0x110]
    unsigned long long *v48;  // rax
    unsigned long long *v49;  // r13
    unsigned int v50;  // eax
    int v51;  // xmm1
    int v54;  // xmm1
    unsigned long long v56;  // rcx
    unsigned long long v57;  // rdx

    uucore::features::fsext::read_fs_list(&(char)v22);
    if ((char)(((0 ^ v19) & (0 ^ -(v19))) >> 63))
    {
        *((unsigned long long *)&a0->padding_1[7]) = v15;
        a0->field_10 = v24;
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        return v23;
    }
    v14 = v19;
    v15 = v23;
    v16 = v24;
    v11 = 0;
    v12 = 8;
    v13 = 0;
    v17 = a1;
    v18 = a1 + a2 * 8;
    v48 = v17.next();
    if (v48)
    {
        v49 = v48;
        do
        {
            v45.from_path(v15, v16, v49);
            if (v45 == 0x8000000000000000)
            {
                v50 = (char)v46;
                if (!v50)
                {
                    v30.to_vec();
                    v3 = v34;
                    *((int128_t *)&v1) = *((int128_t *)&v30);
                    v4 = 1;
                    v6 = *(v49).as_ref();
                    v7 = v57;
                    v8 = 1;
                    v30.spec_to_string(&v4);
                    v24 = v3;
                    *((int128_t *)&v19) = *((int128_t *)&v0);
                    v29 = v34;
                    *((int128_t *)&v27) = *((int128_t *)&v30);
                    v54 = (int128_t)(&v27)[8];
                    *((int128_t *)&v32) = (int128_t)v19;
                    v34 = v24;
                    v35 = v25;
                    v36 = v54;
                    (char)v22.from_iter(&v30);
                    uucore::mods::locale::get_message_with_args(&v41, "df-error-cannot-access-over-mounteddf-error-no-such-file-or-directoryTry ' --help' for more information.\n", 35, &(char)v22);
                    v25 = 1;
                    v19 = v41;
                    v24 = v42;
                    *((double *)&v0) = (char)v22.new();
                    v2 = &g_59c3f0;
                    uucore::mods::error::set_exit_code((unsigned int)v0.code());
                    v4 = uucore::util_name();
                    v6 = v57;
                    v30 = &v4;
                    v33 = <&T as core::fmt::Display>::fmt;
                    v34 = &v0;
                    v35 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v22 = &g_59c3a0;
                    v23 = 3;
                    v28 = 0;
                    v24 = &v30;
                    v25 = 2;
                    std::io::stdio::_eprint(&v22);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v0, &g_59c3f0);
                }
                else if (v50 == 1)
                {
                    v30.to_vec();
                    v7 = v34;
                    *((int128_t *)&v5) = *((int128_t *)&v30);
                    v0 = *(v49).as_ref();
                    v2 = v57;
                    v30.spec_to_string(&v0);
                    v24 = v7;
                    *((int128_t *)&v19) = *((int128_t *)&v4);
                    v29 = v34;
                    *((int128_t *)&v26) = *((int128_t *)&v30);
                    v51 = (int128_t)(&v26)[8];
                    *((int128_t *)&v31) = (int128_t)v19;
                    v34 = v24;
                    v35 = v25;
                    v36 = v51;
                    (char)v22.from_iter(&v30);
                    uucore::mods::locale::get_message_with_args(&v37, "df-error-no-such-file-or-directoryTry ' --help' for more information.\n", 34, &(char)v22);
                    v25 = 1;
                    v19 = v37;
                    v24 = v38;
                    *((double *)&v9) = (char)v22.new();
                    v10 = &g_59c3f0;
                    uucore::mods::error::set_exit_code((unsigned int)v9.code());
                    v4 = uucore::util_name();
                    v6 = v57;
                    v30 = &v4;
                    v33 = <&T as core::fmt::Display>::fmt;
                    v34 = &v9;
                    v35 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v20 = &g_59c3a0;
                    v23 = 3;
                    v28 = 0;
                    v24 = &v30;
                    v25 = 2;
                    std::io::stdio::_eprint(&v20);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v9, &g_59c3f0);
                }
                else
                {
                    uucore::mods::locale::get_message(&v39, "df-error-no-file-systems-processed/mnt/c/Research/Oxidizer/Projects/oxidizer-rustc/projects/coreutils/src/uu/df/src/df.rs", 34);
                    v25 = 1;
                    v19 = v39;
                    v24 = v40;
                    *((double *)&v0) = (char)v22.new();
                    v2 = &g_59c3f0;
                    uucore::mods::error::set_exit_code((unsigned int)v0.code());
                    v4 = uucore::util_name();
                    v6 = v57;
                    v30 = &v4;
                    v33 = <&T as core::fmt::Display>::fmt;
                    v34 = &v0;
                    v35 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v21 = &g_59c3a0;
                    v23 = 3;
                    v28 = 0;
                    v24 = &v30;
                    v25 = 2;
                    std::io::stdio::_eprint(&v21);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v0, &g_59c3f0);
                }
            }
            else
            {
                memcpy(&v30, &v45, 232);
                if ((char)uu_df::is_included(&v30, v56))
                {
                    memcpy(&(char)v22, &v30, 232);
                    v11.push(&(char)v22);
                }
                else
                {
                    ::0x4a6a70::core::ptr::drop_in_place<uu_df::filesystem::Filesystem>(&v30);
                }
            }
            v49 = v17.next();
        } while (v49);
    }
    if (!(int)uucore::mods::error::get_exit_code() && !v13)
    {
        uucore::mods::locale::get_message(&v43, "df-error-no-file-systems-processed/mnt/c/Research/Oxidizer/Projects/oxidizer-rustc/projects/coreutils/src/uu/df/src/df.rs", 34);
        v25 = 1;
        memcpy(&(char)v22, &v43, 16);
        v24 = v44;
        *((double *)&v4) = (char)v22.new();
        v6 = &g_59c3f0;
        uucore::mods::error::set_exit_code((unsigned int)v4.code());
        v45 = uucore::util_name();
        v46 = v57;
        v30 = &v45;
        v33 = <&T as core::fmt::Display>::fmt;
        v34 = &v4;
        v35 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v19 = &g_59c3a0;
        v23 = 3;
        v28 = 0;
        v24 = &v30;
        v25 = 2;
        std::io::stdio::_eprint(&v19);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v4, &g_59c3f0);
    }
    a0->field_10 = v13;
    *((int128_t *)&a0->field_0) = *((int128_t *)&v11);
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::fsext::MountInfo>>(&v14);
}
