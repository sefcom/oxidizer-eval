fn check_docs::main() -> long long {
    let v0: struct40;  // [bp-0x1e8], Other Possible Types: struct48, Result<struct24, struct16>
    let v1: struct48;  // [bp-0x1e8], Other Possible Types: u64
    let v2: struct24;  // [bp-0x1e8], Other Possible Types: struct48
    let v3: Result<struct48, struct16>;  // [bp-0x1e8]
    let v4: struct48;  // [bp-0x1e8]
    let v5: u64;  // [bp-0x1e0]
    let v6: u64;  // [bp-0x1d8]
    let v7: struct24;  // [bp-0x1d0]
    let v8: u64;  // [bp-0x1c0]
    let v9: u128;  // [bp-0x1b8]
    let v10: u64;  // [bp-0x1b0]
    let v11: u64;  // [bp-0x1a8]
    let v12: u128;  // [bp-0x198]
    let v13: u64;  // [bp-0x190]
    let v14: u64;  // [bp-0x188]
    let v15: u128;  // [bp-0x178]
    let v16: u64;  // [bp-0x170]
    let v17: u64;  // [bp-0x168]
    let v18: u128;  // [bp-0x158]
    let v19: u64;  // [bp-0x150]
    let v20: u64;  // [bp-0x148]
    let v21: iNone;  // [bp-0x138]
    let v22: struct24;  // [bp-0x138]
    let v23: u64;  // [bp-0x128]
    let v24: u64;  // [bp-0x118]
    let v25: u8;  // [bp-0x110]
    let v26: u64;  // [bp-0x108]
    let v27: u64;  // [bp-0x100]
    let v28: struct24;  // [bp-0xf8]
    let v29: struct48;  // [bp-0xf8]
    let v30: u128;  // [bp-0xd8]
    let v31: struct24;  // [bp-0xc8]
    let v32: u64;  // [bp-0xb0]
    let v33: u64;  // [bp-0xa8]
    let v34: u64;  // [bp-0xa0]
    let v35: struct24;  // [bp-0x98]
    let v36: struct24;  // [bp-0x80]
    let v37: struct24;  // [bp-0x68]
    let v38: struct24;  // [bp-0x48]
    let v40: u64;  // r15
    let v41: iNone;  // xmm1

    v0 = check_docs::search_for_pattern("ANCHOR", ".");
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        return v5;
    }
    v3 = check_docs::extract_starts_and_ends(v5, v6);
    v40 = v5;
    if let Err(_) = v3 {
        return v40;
    }
    v38 = v7;
    v36 = struct24 {
        field_0: v3 as i64
        field_8: v40
        field_16: v6
    };
    v4 = check_docs::filter_valid_anchors(&v36, &v38);
    v23 = v6;
    v21 = v4.field_0;
    v11 = v8;
    v9 = v4.field_24;
    v0 = check_docs::search_for_pattern("{{#include", ".");
    v40 = v5;
    if let Ok(_) = v0 {
        v31 = struct24 {
            field_0: v0 as i64
            field_8: v40
            field_16: v6
        };
        v1 = check_docs::parse_includes(&v31);
        v37 = v2;
        v14 = v8;
        v12 = v1.field_24;
        v28 = v22;
        v2 = check_docs::validate_includes(&v37, &v28);
        v17 = v6;
        v15 = v2.field_0;
        v20 = v8;
        v18 = v2.field_24;
        v0 = check_docs::search_for_pattern(".md", "./docs/src/SUMMARY.md");
        v40 = v5;
        if let Ok(_) = v0 {
            v32 = v0 as i64;
            v33 = v40;
            v34 = v6;
            v29 = check_docs::parse_md_files(&v32, "./docs/src/");
            check_docs::find_files(&v0, "*.md", "./docs/src/", "SUMMARY.md");
            v40 = v5;
            if let Ok(_) = v0 {
                v35 = struct24 {
                    field_0: v0 as i64
                    field_8: v40
                    field_16: v6
                };
                v41 = *(&v29.field_16 as &i128);
                v0 = struct48 {
                    field_0: v29.field_0
                    field_16: v41
                    field_32: v30
                };
                check_docs::validate_md_files(&v25, &v0, &v35);
                v24 = v20;
                check_docs::report_errors("warning", v19, v20);
                check_docs::report_errors("include paths", v13, v14);
                check_docs::report_errors("anchors", v10, v11);
                check_docs::report_errors("includes", v16, v17);
                check_docs::report_errors("md files", v26, v27);
                if !v11 && !v17 && !v14 && !v24 && !v27 {
                    return 0;
                }
                v0 = struct40 {
                    field_0: "Finished with errors"
                    field_8: 1
                    field_16: 8
                    field_24: 0
                };
                v40 = anyhow::__private::format_err(&v0);
            }
        }
    }
    return v40;
}
