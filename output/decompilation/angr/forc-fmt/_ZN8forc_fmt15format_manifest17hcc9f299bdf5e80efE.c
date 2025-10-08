void forc_fmt::format_manifest(char *a0, char a1, void* a2)
{
    unsigned long v0;  // [bp-0x198], Other Possible Types: unsigned long long
    int v1;  // [bp-0x198]
    unsigned long long v2;  // [bp-0x190]
    char *v3;  // [sp-0x188], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x180]
    void* v5;  // [sp-0x178], Other Possible Types: unsigned long long
    struct_0 *v6;  // [bp-0x160]
    char *v7;  // [bp-0x158], Other Possible Types: void*, int
    unsigned long long v8;  // [bp-0x150]
    int v9;  // [bp-0x148], Other Possible Types: unsigned long, unsigned long long
    void* v10;  // [bp-0x138]
    unsigned long v11;  // [bp-0x130]
    char *v12;  // [bp-0x120]
    char *v13;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x110]
    int v15;  // [bp-0x108], Other Possible Types: char
    unsigned long long v16;  // [bp-0xf8]
    int v17;  // [bp-0xf0], Other Possible Types: char *
    unsigned long long v18;  // [bp-0xe8]
    char v19;  // [bp-0xe0]
    unsigned long long v20;  // [bp-0xd8]
    unsigned long long v21;  // [bp-0xd0]
    int v22;  // [bp-0xc8], Other Possible Types: char
    char v23;  // [bp-0xb8]
    unsigned long long v24;  // [bp-0xa8]
    int v25;  // [bp-0xa0], Other Possible Types: char *
    unsigned long long v26;  // [bp-0x98]
    unsigned long v27;  // [bp-0x90]
    int v28;  // [bp-0x88]
    unsigned long long v29;  // [bp-0x80]
    unsigned long long v30;  // [bp-0x78]
    unsigned long long v31;  // [bp-0x70]
    int v32;  // [bp-0x68]
    unsigned long long v33;  // [bp-0x60]
    char *v34;  // [bp-0x58]
    unsigned long long v35;  // [bp-0x50]
    char v36;  // [bp-0x48]
    unsigned long long v38;  // r14
    char v40;  // al
    unsigned long v41;  // rax
    unsigned long long v42;  // rax
    struct_3 *v43;  // rdx
    unsigned long v44;  // rax
    char v45;  // r14b
    unsigned long long v46;  // rax
    char *v47;  // rcx
    char v48;  // al

    std::fs::read_to_string(&v15, a2);
    v38 = *((long long *)&v15);
    if ((char)(((0 ^ v38) & (0 ^ -(v38))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v15);
        v7 = a2;
        v8 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        v0 = &g_c0a428;
        v2 = 1;
        v5 = 0;
        v3 = &v7;
        v4 = 1;
        v36.map_or_else(0, a2, &v0);
        v6->field_8 = v36.msg();
        v6->field_0 = 1;
    }
    else
    {
        v30 = v16;
        v28 = v15;
        (char)v0.default();
        taplo::formatter::format(&v19, v29, v30, &(char)v0);
        if ((a1 & 1))
        {
            if ((char)v20.eq(v21, v29, v30))
            {
                if (core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E) != 5 && core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E) <= 2)
                {
                    v40 = _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E.interest();
                    if (!v40 || !tracing::__macro_support::__is_enabled(_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E, v40))
                        goto LABEL_7d4f87;
                    v41 = _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E->field_30[1];
                    *((unsigned long long [2])&v7) = _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E->field_30;
                    *((int128_t *)&v9) = *((int128_t *)&_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E->field_38);
                    v10 = 0;
                    v11 = v41;
                    (char)v0.next(&(char)v7);
                    if (!v0)
                        core::option::expect_failed("FieldSet corrupted (this is a bug)File was edited by formatter: \n\nFailed to compile Failed to compile.\nCould not read file: Files contain formatting violations.Improperly formatted manifest file: Manifest Forc.toml formatted correctly: failed to format manifest: Manifest file does not exist+", 34, &g_c0a438); /* do not return */
                    v24 = v5;
                    memcpy(&v23, &v3, 16);
                    memcpy(&v22, &v0, 16);
                    *((int128_t *)&v25) = (int128_t)a2[8];
                    v17 = &(char)v25;
                    v18 = <std::path::Display as core::fmt::Display>::fmt;
                    v0 = &g_c0a418;
                    v2 = 1;
                    v5 = 0;
                    v3 = &v17;
                    v4 = 1;
                    v12 = &v22;
                    v13 = &v0;
                    v14 = &g_c0a3a8;
                    v7 = &v12;
                    v8 = 1;
                    v9 = &_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E->field_30;
                    forc_fmt::format_manifest::{{closure}}(&v7);
                }
                else
                {
LABEL_7d4f87:
                    if (!(char)core::sync::atomic::atomic_load(&_ZN12tracing_core10dispatcher6EXISTS17h25c10194e397632bE) && core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h8b86a041fa92d435E) >= 3)
                    {
                        v31 = 3;
                        *((uint128_t *)&v32) = _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E->field_20;
                        v42 = log::logger();
                        if ((char)v43->field_18(v42, &v31))
                        {
                            v44 = _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E->field_30[1];
                            *((unsigned long long [2])&v7) = _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E->field_30;
                            *((int128_t *)&v9) = *((int128_t *)&_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E->field_38);
                            v10 = 0;
                            v11 = v44;
                            (char)v0.next(&(char)v7);
                            if (!v0)
                                core::option::expect_failed("FieldSet corrupted (this is a bug)File was edited by formatter: \n\nFailed to compile Failed to compile.\nCould not read file: Files contain formatting violations.Improperly formatted manifest file: Manifest Forc.toml formatted correctly: failed to format manifest: Manifest file does not exist+", 34, &g_c0a438); /* do not return */
                            v24 = v5;
                            memcpy(&v23, &v3, 16);
                            memcpy(&v22, &v0, 16);
                            *((int128_t *)&v17) = (int128_t)a2[8];
                            v34 = &(char)v17;
                            v35 = <std::path::Display as core::fmt::Display>::fmt;
                            v0 = &g_c0a418;
                            v2 = 1;
                            v5 = 0;
                            v3 = &v34;
                            v4 = 1;
                            v12 = &v22;
                            v13 = &v0;
                            v14 = &g_c0a3a8;
                            v25 = &v12;
                            v26 = 1;
                            v27 = &_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E->field_30;
                            v9 = v33;
                            *((int128_t *)&v7) = *((int128_t *)&v31);
                            tracing::__macro_support::__tracing_log(_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E, v42, v43, &(char)v7, &v25);
                        }
                    }
                }
LABEL_7d513e:
            }
            else
            {
                *((int128_t *)&v22) = (int128_t)a2[8];
                v12 = &v22;
                v13 = <std::path::Display as core::fmt::Display>::fmt;
                v0 = &g_c0a408;
                v2 = 1;
                v5 = 0;
                v3 = &v12;
                v4 = 1;
                (char)v7.map_or_else(0, a2, &v0);
                *((int128_t *)&v1) = (int128_t)v7;
                v3 = v9;
                forc_tracing::println_error(1, v9);
                core::ptr::drop_in_place<alloc::string::String>(&v0);
                v45 = 1;
                forc_fmt::display_file_diff(v29, v30, v20, v21);
            }
            v47 = a0;
            v6->field_1 = v45;
            v38 = *((long long *)&v15);
        }
        else
        {
            v46 = forc_fmt::write_file_formatted((long long)a2[8], (long long)a2[16], v20, v21);
            if (!v46)
                goto LABEL_7d513e;
            v47 = a0;
            v6->field_8 = v46;
            v48 = 1;
        }
        *(v47) = v48;
        core::ptr::drop_in_place<alloc::string::String>(&v19);
        core::ptr::drop_in_place<alloc::string::String>(&(char)v28);
        if (v38 == 0x8000000000000000)
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v15);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(a2);
    return;
}
