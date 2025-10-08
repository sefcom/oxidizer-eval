fn forc_fmt::format_pkg_at_dir(a0: i32, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: struct24;  // [bp-0x108], Other Possible Types: struct40
    let v1: u128;  // [bp-0x108]
    let v2: u64;  // [bp-0xf8]
    let v3: struct9;  // [bp-0xd0]
    let v4: u56;  // [bp-0xcf]
    let v5: u128;  // [bp-0xb8]
    let v6: u64;  // [bp-0xb0]
    let v7: u64;  // [bp-0xa8]
    let v8: Option<struct24>;  // [bp-0x90]
    let v9: struct24;  // [bp-0x90], Other Possible Types: u64
    let v10: void*;  // [bp-0x88]
    let v11: u64;  // [bp-0x80]
    let v12: struct24;  // [bp-0x78]
    let v13: u64;  // [bp-0x68]
    let v14: Option<struct24>;  // [bp-0x60]
    let v15: Option<struct24>;  // [bp-0x60]
    let v16: u64;  // [bp-0x48]
    let v18: u8;  // bpl
    let v19: u8;  // bl
    let v20: u64;  // rbx
    let v21: struct1;  // [bp-0xd0]

    v8 = sway_utils::helpers::find_parent_dir_with_file(a1, a2);
    if (((0 ^ v8 as i64) & (0 ^ -(v9))) >> 63) as char {
        v0 = struct40 {
            field_0: "Manifest file does not exist"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        return anyhow::__private::format_err(&v0);
    }
    v0 = <&str as alloc::string::SpecToString>::spec_to_string(v10, v11);
    v7 = v2;
    v5 = *(&v0.field_0 as &i128);
    v12 = std::path::Path::join(v6, v2, "Forc.toml");
    v0 = v9;
    sway_utils::helpers::get_sway_files(&v16, &v0);
    v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v16);
    v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v1);
    v18 = a0;
    if let Some(_) = v14 {
        do {
            v3 = forc_fmt::format_file(v18, &v14, a3);
            if v3.field_0 == 1 {
                return v20;
            }
            v15 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v1 as u256);
        } while (v15 as i64 != 0x8000000000000000);
    }
    v2 = v13;
    v1 = *(&v12.field_0 as &i128);
    v21 = forc_fmt::format_manifest(v18, &v1);
    if v21 == 1 {
        return v20;
    }
    if !(a0 & 1) || !((v19 | v4) & 1) {
        return 0;
    }
    v0 = struct40 {
        field_0: "Files contain formatting violations."
        field_8: 1
        field_16: 8
        field_24: 0
    };
    anyhow::__private::format_err(&v0);
    return v20;
    return 0;
}
