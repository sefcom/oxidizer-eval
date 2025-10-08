fn starship::context::ScanDir::is_match(a0: &struct72) -> u64 {
    let v0: struct16;  // [bp-0x38], Other Possible Types: u64
    let v2: u64;  // rax
    let v3: u64;  // rbx
    let v4: struct700;  // r14
    let v5: u32;  // r14d

    v0 = v2;
    v3 = *(a0 as &i64);
    v4 = *((a0 + 40) as &i64);
    if starship::context::DirContents::has_no_negative_extension(v3, v4, *((a0 + 48) as &i64)) && starship::context::DirContents::has_no_negative_file_name(v3, *((a0 + 8) as &i64), *((a0 + 16) as &i64)) {
        v0 = *((a0 + 32) as &i64);
        if starship::context::DirContents::has_no_negative_folder(v3, *((a0 + 24) as &i64), *((a0 + 32) as &i64)) {
            v5 = v4 as u32 & -0x100 | 1;
            if starship::context::DirContents::has_any_positive_extension(v3, v4, *((a0 + 48) as &i64)) {
                return v5;
            } else if starship::context::DirContents::has_any_positive_file_name(v3, *((a0 + 8) as &i64), *((a0 + 16) as &i64)) {
                return v5;
            } else {
                return starship::context::DirContents::has_any_positive_folder(v3, *((a0 + 24) as &i64), v0);
            }
        }
    }
    return 0;
}
