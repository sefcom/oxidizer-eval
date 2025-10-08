void forc_fmt::format_file(struct_0 *a0, char a1, unsigned long long a2[3], unsigned long long a3)
{
    char v0;  // [bp-0x208], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x200]
    char *v2;  // [bp-0x1f8]
    unsigned long long v3;  // [bp-0x1f0]
    void* v4;  // [bp-0x1e8], Other Possible Types: unsigned long long
    char *v5;  // [bp-0x1d8], Other Possible Types: int
    unsigned long long v6;  // [bp-0x1d0]
    char *v7;  // [bp-0x1c8], Other Possible Types: int, unsigned long, unsigned long long
    unsigned long long v8;  // [bp-0x1c0]
    void* v9;  // [bp-0x1b8]
    unsigned long v10;  // [bp-0x1b0]
    int v11;  // [bp-0x1a8]
    unsigned long long v12;  // [bp-0x1a0]
    unsigned long long v13;  // [bp-0x198]
    char *v14;  // [bp-0x190]
    char *v15;  // [bp-0x188]
    unsigned long long v16;  // [bp-0x180]
    unsigned long long v17;  // [bp-0x178]
    unsigned long long v18;  // [bp-0x170]
    char *v19;  // [bp-0x168]
    char *v20;  // [bp-0x160]
    unsigned long long v21;  // [bp-0x158]
    unsigned long v22;  // [bp-0x150]
    char *v23;  // [bp-0x148], Other Possible Types: int, unsigned long long
    char *v24;  // [bp-0x140], Other Possible Types: unsigned long long
    char v25;  // [bp-0x138]
    unsigned long long v26;  // [bp-0x128]
    char v27;  // [bp-0x120]
    unsigned long long v28;  // [bp-0x110]
    char *v29;  // [bp-0x108]
    unsigned long long v30;  // [bp-0x100]
    char v31;  // [bp-0xf8]
    unsigned long long v32;  // [bp-0xf0]
    unsigned long long v33;  // [bp-0xe8]
    unsigned long long v34;  // [bp-0xe0]
    int v35;  // [bp-0xd8]
    unsigned long long v36;  // [bp-0xd0]
    unsigned long long v37;  // [bp-0xc8]
    int v38;  // [bp-0xc0]
    unsigned long long v39;  // [bp-0xb8]
    char v40;  // [bp-0xb0]
    int v41;  // [bp-0xa8]
    unsigned long long v42;  // [bp-0x98]
    char v43;  // [bp-0x90]
    char v44;  // [bp-0x78]
    char v45;  // [bp-0x60]
    char v46;  // [bp-0x48]
    unsigned long long v48;  // rax
    unsigned long long v49;  // r8
    char v51;  // al
    unsigned long v52;  // rax
    unsigned long long v53;  // rax
    struct_5 *v54;  // rdx
    unsigned long v55;  // rax
    unsigned long long v56;  // rax
    unsigned long long v57;  // rsi
    unsigned long long v58;  // rcx
    unsigned long long v59;  // r9
    char v61;  // al
    unsigned long v62;  // rax
    unsigned long long v63;  // rax
    struct_3 *v64;  // rdx
    unsigned long v65;  // rax
    char v66;  // bpl
    unsigned long long v67;  // rax
    char v68;  // al

    std::fs::canonicalize(&v0, a2[1], a2[2]);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        a0->field_8 = v18.from();
        a0->field_0 = 1;
        core::ptr::drop_in_place<std::path::PathBuf>(a2);
        return;
    }
    v17 = v0;
    v18 = v1;
    v19 = v2;
    if ((char)forc_util::fs_locking::is_file_dirty(&v17))
    {
        *((int128_t *)&v5) = *((int128_t *)&v18);
        v23 = &(char)v5;
        v24 = <std::path::Display as core::fmt::Display>::fmt;
        v0 = &g_c0a320;
        v1 = 1;
        v4 = 0;
        v2 = &v23;
        v3 = 1;
        v43.map_or_else(0, a2, &v0);
        v48 = v43.msg();
    }
    else
    {
        std::fs::read_to_string(&v27, &v17);
        if (*((long long *)&v27) == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v27);
            v5 = &v17;
            v6 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
            v0 = &g_c0a380;
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            v46.map_or_else(0, a2, &v0);
            v48 = v46.msg();
        }
        else
        {
            v33 = v28;
            memcpy(&v31, &v27, 16);
            v0.from(v32, v33);
            v40.format(a3, &v0, a3, v49);
            if (*((int *)&v40) != 1)
            {
                v13 = v42;
                v11 = v41;
                if ((a1 & 1))
                {
                    if ((char)v32.equal(v33, v12, v13))
                        goto LABEL_7d4065;
                    if (core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E) != 5 && core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E) <= 2)
                    {
                        v61 = _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E.interest();
                        if (!v61 || !tracing::__macro_support::__is_enabled(_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E, v61))
                            goto LABEL_7d406c;
                        v62 = _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E->field_30[1];
                        *((unsigned long long [2])&v5) = _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E->field_30;
                        *((int128_t *)&v7) = *((int128_t *)&_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E->field_38);
                        v9 = 0;
                        v10 = v62;
                        v0.next(&(char)v5);
                        if (!v0)
                            core::option::expect_failed("FieldSet corrupted (this is a bug)File was edited by formatter: \n\nFailed to compile Failed to compile.\nCould not read file: Files contain formatting violations.Improperly formatted manifest file: Manifest Forc.toml formatted correctly: failed to format manifest: Manifest file does not exist+", 34, &g_c0a390); /* do not return */
                        v26 = v4;
                        memcpy(&v25, &v2, 16);
                        *((int128_t *)&v23) = *((int128_t *)&v0);
                        v20 = &v17;
                        v21 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
                        v0 = &g_c0a330;
                        v1 = 2;
                        v4 = 0;
                        v2 = &v20;
                        v3 = 1;
                        v14 = &(char)v23;
                        v15 = &v0;
                        v16 = &g_c0a3a8;
                        v5 = &v14;
                        v6 = 1;
                        v7 = &_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E->field_30;
                        forc_fmt::format_file::{{closure}}(&v5);
                    }
                    else
                    {
LABEL_7d406c:
                        if (!(char)core::sync::atomic::atomic_load(&_ZN12tracing_core10dispatcher6EXISTS17h25c10194e397632bE) && core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h8b86a041fa92d435E) >= 3)
                        {
                            v34 = 3;
                            *((uint128_t *)&v35) = _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E->field_20;
                            v63 = log::logger();
                            if ((char)v64->field_18(v63, &v34))
                            {
                                v65 = _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E->field_30[1];
                                *((unsigned long long [2])&v5) = _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E->field_30;
                                *((int128_t *)&v7) = *((int128_t *)&_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E->field_38);
                                v9 = 0;
                                v10 = v65;
                                v0.next(&(char)v5);
                                if (!v0)
                                    core::option::expect_failed("FieldSet corrupted (this is a bug)File was edited by formatter: \n\nFailed to compile Failed to compile.\nCould not read file: Files contain formatting violations.Improperly formatted manifest file: Manifest Forc.toml formatted correctly: failed to format manifest: Manifest file does not exist+", 34, &g_c0a390); /* do not return */
                                v26 = v4;
                                memcpy(&v25, &v2, 16);
                                *((int128_t *)&v23) = *((int128_t *)&v0);
                                v29 = &v17;
                                v30 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
                                v0 = &g_c0a330;
                                v1 = 2;
                                v4 = 0;
                                v2 = &v29;
                                v3 = 1;
                                v14 = &(char)v23;
                                v15 = &v0;
                                v16 = &g_c0a3a8;
                                v20 = &v14;
                                v21 = 1;
                                v22 = &_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E->field_30;
                                v7 = v36;
                                *((int128_t *)&v5) = *((int128_t *)&v34);
                                tracing::__macro_support::__tracing_log(_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E, v63, v64, &(char)v5, &v20);
                            }
                        }
                    }
                    v66 = 1;
                    forc_fmt::display_file_diff(v32, v33, v12, v13);
                }
                else
                {
                    v67 = forc_fmt::write_file_formatted(v18, v19, v12, v13);
                    if (v67)
                    {
                        a0->field_8 = v67;
                        v68 = 1;
                        goto LABEL_7d4240;
                    }
LABEL_7d4065:
                }
                a0->field_1 = v66;
LABEL_7d4240:
                a0->field_0 = v68;
                core::ptr::drop_in_place<alloc::string::String>(&(char)v11);
LABEL_7d424d:
                core::ptr::drop_in_place<alloc::string::String>(&v31);
                if (*((long long *)&v27) == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v27);
                    core::ptr::drop_in_place<std::path::PathBuf>(&v17);
                    core::ptr::drop_in_place<std::path::PathBuf>(a2);
                    return;
                }
                core::ptr::drop_in_place<std::path::PathBuf>(&v17);
                core::ptr::drop_in_place<std::path::PathBuf>(a2);
                return;
            }
            v13 = v42;
            v11 = v41;
            if (core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E) != 5 && core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E) <= 1)
            {
                v51 = _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E.interest();
                if (!v51 || !tracing::__macro_support::__is_enabled(_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E, v51))
                    goto LABEL_7d3d50;
                v52 = _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E->field_30[1];
                *((unsigned long long [2])&v5) = _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E->field_30;
                *((int128_t *)&v7) = *((int128_t *)&_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E->field_38);
                v9 = 0;
                v10 = v52;
                v0.next(&(char)v5);
                if (!v0)
                    core::option::expect_failed("FieldSet corrupted (this is a bug)File was edited by formatter: \n\nFailed to compile Failed to compile.\nCould not read file: Files contain formatting violations.Improperly formatted manifest file: Manifest Forc.toml formatted correctly: failed to format manifest: Manifest file does not exist+", 34, &g_c0a3c8); /* do not return */
                v26 = v4;
                memcpy(&v25, &v2, 16);
                *((int128_t *)&v23) = *((int128_t *)&v0);
                v20 = &(char)v11;
                v21 = <swayfmt::error::FormatterError as core::fmt::Display>::fmt;
                v0 = &g_566a30;
                v1 = 1;
                v4 = 0;
                v2 = &v20;
                v3 = 1;
                v14 = &(char)v23;
                v15 = &v0;
                v16 = &g_c0a3a8;
                v5 = &v14;
                v6 = 1;
                v7 = &_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E->field_30;
                forc_fmt::format_file::{{closure}}(&v5);
            }
            else
            {
LABEL_7d3d50:
                if (!(char)core::sync::atomic::atomic_load(&_ZN12tracing_core10dispatcher6EXISTS17h25c10194e397632bE) && core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h8b86a041fa92d435E) >= 4)
                {
                    v37 = 4;
                    *((uint128_t *)&v38) = _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E->field_20;
                    v53 = log::logger();
                    if ((char)v54->field_18(v53, &v37))
                    {
                        v55 = _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E->field_30[1];
                        *((unsigned long long [2])&v5) = _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E->field_30;
                        *((int128_t *)&v7) = *((int128_t *)&_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E->field_38);
                        v9 = 0;
                        v10 = v55;
                        v0.next(&(char)v5);
                        if (!v0)
                            core::option::expect_failed("FieldSet corrupted (this is a bug)File was edited by formatter: \n\nFailed to compile Failed to compile.\nCould not read file: Files contain formatting violations.Improperly formatted manifest file: Manifest Forc.toml formatted correctly: failed to format manifest: Manifest file does not exist+", 34, &g_c0a3c8); /* do not return */
                        v26 = v4;
                        memcpy(&v25, &v2, 16);
                        *((int128_t *)&v23) = *((int128_t *)&v0);
                        v29 = &(char)v11;
                        v30 = <swayfmt::error::FormatterError as core::fmt::Display>::fmt;
                        v0 = &g_566a30;
                        v1 = 1;
                        v4 = 0;
                        v2 = &v29;
                        v3 = 1;
                        v14 = &(char)v23;
                        v15 = &v0;
                        v16 = &g_c0a3a8;
                        v20 = &v14;
                        v21 = 1;
                        v22 = &_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E->field_30;
                        v7 = v39;
                        *((int128_t *)&v5) = *((int128_t *)&v37);
                        tracing::__macro_support::__tracing_log(_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E, v53, v54, &(char)v5, &v20);
                    }
                }
            }
            core::str::converts::from_utf8(&v0, v18, v19);
            if (((char)v0 & 1))
            {
                v5 = &(char)v11;
                v6 = <swayfmt::error::FormatterError as core::fmt::Display>::fmt;
                v0 = &g_c0a370;
                v1 = 1;
                v4 = 0;
                v2 = &v5;
                v3 = 1;
                v45.map_or_else(0, a2, &v0);
                v56 = v45.msg();
            }
            else
            {
                v23 = v1;
                v24 = v2;
                v5 = &v23;
                v6 = <&T as core::fmt::Display>::fmt;
                v7 = &(char)v11;
                v8 = <swayfmt::error::FormatterError as core::fmt::Display>::fmt;
                v0 = &g_c0a350;
                v1 = 2;
                v4 = 0;
                v2 = &v5;
                v3 = 2;
                v44.map_or_else(0, a2, &v0);
                v56 = v44.msg();
            }
            a0->field_8 = v56;
            a0->field_0 = 1;
            core::ptr::drop_in_place<swayfmt::error::FormatterError>(&(char)v11, v57, a2, v58, v49, v59);
            goto LABEL_7d424d;
        }
    }
    a0->field_8 = v48;
    a0->field_0 = 1;
    core::ptr::drop_in_place<std::path::PathBuf>(&v17);
    core::ptr::drop_in_place<std::path::PathBuf>(a2);
    return;
}
