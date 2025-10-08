long long check_docs::main()
{
    int v0;  // [bp-0x1e8], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x1e8]
    unsigned long long v2;  // [bp-0x1e0]
    unsigned long long v3;  // [bp-0x1e0]
    int v4;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x1d8]
    int v6;  // [bp-0x1d0], Other Possible Types: char
    int v7;  // [bp-0x1c8]
    unsigned long long v8;  // [bp-0x1c0]
    int v9;  // [bp-0x1b8]
    unsigned long long v10;  // [bp-0x1b0]
    unsigned long long v11;  // [bp-0x1a8]
    int v12;  // [bp-0x198]
    unsigned long long v13;  // [bp-0x190]
    unsigned long long v14;  // [bp-0x188]
    int v15;  // [bp-0x178]
    unsigned long long v16;  // [bp-0x170]
    unsigned long long v17;  // [bp-0x168]
    int v18;  // [bp-0x158]
    unsigned long long v19;  // [bp-0x150]
    unsigned long long v20;  // [bp-0x148]
    char v21;  // [bp-0x138]
    unsigned long long v22;  // [bp-0x128]
    unsigned long long v23;  // [bp-0x118]
    char v24;  // [bp-0x110]
    unsigned long long v25;  // [bp-0x108]
    unsigned long long v26;  // [bp-0x100]
    int v27;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v28;  // [bp-0xe8]
    int v29;  // [bp-0xd8]
    unsigned long long v30;  // [bp-0xc8]
    unsigned long long v31;  // [bp-0xc0]
    unsigned long long v32;  // [bp-0xb8]
    unsigned long long v33;  // [bp-0xb0]
    unsigned long long v34;  // [bp-0xa8]
    unsigned long long v35;  // [bp-0xa0]
    unsigned long long v36;  // [bp-0x98]
    unsigned long long v37;  // [bp-0x90]
    unsigned long long v38;  // [bp-0x88]
    unsigned long long v39;  // [bp-0x80]
    unsigned long long v40;  // [bp-0x78]
    unsigned long long v41;  // [bp-0x70]
    char v42;  // [bp-0x68]
    unsigned long long v43;  // [bp-0x58]
    char v44;  // [bp-0x48]
    unsigned long long v45;  // [bp-0x38]
    unsigned long long v47;  // r15
    int v48;  // xmm1

    check_docs::search_for_pattern(&v0, "ANCHOR.{{#include.md./docs/src/SUMMARY.md./docs/src/utf8info", 6, ".{{#include.md./docs/src/SUMMARY.md./docs/src/utf8info", 1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v2;
    check_docs::extract_starts_and_ends(&v0, v2, v4);
    v47 = v2;
    if (v0 != 0x8000000000000000)
    {
        memcpy(&v44, &v6, 16);
        v45 = v8;
        v39 = v0;
        v40 = v47;
        v41 = v4;
        check_docs::filter_valid_anchors(&v0, &v39, &v44);
        v22 = v4;
        memcpy(&v21, &v0, 16);
        v11 = v8;
        *((int128_t *)&v9) = *((int128_t *)&v6);
        check_docs::search_for_pattern(&v0, "{{#include.md./docs/src/SUMMARY.md./docs/src/utf8info", 10, ".{{#include.md./docs/src/SUMMARY.md./docs/src/utf8info", 1);
        v47 = v2;
        if (v0 != 0x8000000000000000)
        {
            v30 = v0;
            v31 = v47;
            v32 = v4;
            check_docs::parse_includes(&v0, &v30);
            v43 = v4;
            memcpy(&v42, &v0, 16);
            v14 = v8;
            *((int128_t *)&v12) = *((int128_t *)&v6);
            v28 = v22;
            memcpy(&v27, &v21, 16);
            check_docs::validate_includes(&v0, &v42, &v27);
            v17 = v4;
            *((int128_t *)&v15) = *((int128_t *)&v0);
            v20 = v8;
            *((int128_t *)&v18) = *((int128_t *)&v6);
            check_docs::search_for_pattern(&v0, ".md./docs/src/SUMMARY.md./docs/src/utf8info", 3, "./docs/src/SUMMARY.md./docs/src/utf8info", 21);
            v47 = v2;
            if (v0 != 0x8000000000000000)
            {
                v33 = v0;
                v34 = v47;
                v35 = v4;
                check_docs::parse_md_files(&v27, &v33, "./docs/src/utf8info", 11);
                check_docs::find_files(&v0, "*.md", 4, "./docs/src/utf8info", 11, "SUMMARY.mdwarninginclude pathsanchors", 10);
                v47 = v2;
                if (v0 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v27);
                }
                else
                {
                    v36 = v0;
                    v37 = v47;
                    v38 = v4;
                    v48 = *((int128_t *)&v28);
                    v7 = v29;
                    v4 = v48;
                    v0 = v27;
                    check_docs::validate_md_files(&v24, &v0, &v36);
                    v23 = v20;
                    check_docs::report_errors("warninginclude pathsanchors", 7, v19, v20);
                    check_docs::report_errors("include pathsanchors", 13, v13, v14);
                    check_docs::report_errors("anchors", 7, v10, v11);
                    check_docs::report_errors(&g_446320, 8, v16, v17);
                    check_docs::report_errors(&g_446750, 8, v25, v26);
                    if (!v11 && !v17 && !v14 && !v23 && !v26)
                    {
                        v24.drop_in_place<alloc::vec::Vec<anyhow::Error>>();
                        (char)v18.drop_in_place<alloc::vec::Vec<anyhow::Error>>();
                        (char)v15.drop_in_place<alloc::vec::Vec<anyhow::Error>>();
                        (char)v12.drop_in_place<alloc::vec::Vec<anyhow::Error>>();
                        (char)v9.drop_in_place<alloc::vec::Vec<anyhow::Error>>();
                        core::ptr::drop_in_place<alloc::string::String>(v0, v2);
                        return 0;
                    }
                    v1 = &g_5d28c8;
                    v3 = 1;
                    v5 = 8;
                    *((uint128_t *)&v6) = 0;
                    v47 = ::0x4dfda0::anyhow::__private::format_err(&v1);
                    v24.drop_in_place<alloc::vec::Vec<anyhow::Error>>();
                }
            }
            (char)v18.drop_in_place<alloc::vec::Vec<anyhow::Error>>();
            (char)v15.drop_in_place<alloc::vec::Vec<anyhow::Error>>();
            (char)v12.drop_in_place<alloc::vec::Vec<anyhow::Error>>();
        }
        (char)v9.drop_in_place<alloc::vec::Vec<anyhow::Error>>();
        v21.drop_in_place<alloc::vec::Vec<check_docs::Anchor>>();
    }
    core::ptr::drop_in_place<alloc::string::String>(v0, v2);
    return v47;
}
