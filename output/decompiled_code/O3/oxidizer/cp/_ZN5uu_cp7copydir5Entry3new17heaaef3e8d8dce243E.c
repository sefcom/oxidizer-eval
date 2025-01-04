fn uu_cp::copydir::Entry::new(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8) -> u64 {
    let v0: i128;  // [sp-0xe8]
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: i64;  // [sp-0xc8], Other Possible Types: struct24, struct8
    let v4: i64;  // [sp-0xc0]
    let v5: i64;  // [sp-0xb8]
    let v6: i192;  // [sp-0xb0]
    let v7: i64;  // [sp-0xa8]
    let v8: i64;  // [sp-0xa0]
    let v9: i128;  // [bp-0x98]
    let v10: i64;  // [sp-0x88]
    let v11: struct24;  // [sp-0x78], Other Possible Types: i192
    let v12: i64;  // [sp-0x60], Other Possible Types: struct24
    let v13: i64;  // [sp-0x58]
    let v14: i192;  // [sp-0x48], Other Possible Types: struct24
    let v20: i64;  // r14
    let v21: i64;  // r15
    let v22: i64;  // rdx
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v25: i64;  // rdx
    let v26: i64;  // rax
    let v27: i128;  // xmm0

    v14 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
    v11 = std::path::Path::join(*((a1 + 8) as &i64), *((a1 + 16) as &i64), &v14);
    v3 = uu_cp::copydir::get_local_to_root_parent(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64), (*((a1 + 24) as &i64) == 0x8000000000000000 ? 0 : *((a1 + 32) as &i64)), *((a1 + 40) as &i64));
    if v3 == 0x8000000000000000 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v1 = v5;
    v0 = v3;
    if !a4 {
        v20 = *((a1 + 48) as &i64);
        v21 = *((a1 + 56) as &i64);
    } else {
        v20 = *((a1 + 48) as &i64);
        v21 = *((a1 + 56) as &i64);
        if (uucore::features::fs::path_ends_with_terminator(v20, v21) as i8 & std::path::Path::is_dir(a2, a3) as i32) {
            v23 = std::fs::create_dir_all(v20, v21, v22);
            if v23 {
                v2 = v23;
                v12 = &v2;
                v13 = <std::io::error::Error as core::fmt::Display>::fmt;
                v3 = "Failed to create directory: ";
                v4 = 2;
                v7 = 0;
                v5 = &v12;
                v6 = 1;
                std::io::stdio::_eprint(&v3);
            }
        } else {
            v24 = std::path::Path::strip_prefix(*((&v0 as &char + 8) as &i64), v1, *((a1 + 64) as &i64), *((a1 + 72) as &i64));
            if !v24 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(v24, v25);
            v1 = v5;
            v0 = v3;
        }
    }
    v3 = v0;
    v12 = std::path::Path::join(v20, v21, &v3);
    v26 = std::path::Path::is_file(v20, v21);
    v5 = *((&v11 as &char + 16) as &i64);
    v27 = v11;
    v3 = v27;
    v6 = v14;
    v9 = v12;
    *((a0 + 64) as &i64) = v10;
    *((a0 + 48) as &i128) = v9;
    *(a0 as &i128) = v27;
    *((a0 + 32) as &i64) = v7;
    *((a0 + 40) as &i64) = v8;
    *((a0 + 16) as &i64) = v5;
    *((a0 + 72) as &i8) = v26;
    return v26;
}
