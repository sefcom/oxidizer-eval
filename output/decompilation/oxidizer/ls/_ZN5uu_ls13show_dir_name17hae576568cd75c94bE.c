fn uu_ls::show_dir_name(a0: i64, a1: u64, a2: i64) -> long long {
    let v0: struct24;  // [bp-0x80]
    let v1: u64;  // [bp-0x78]
    let v2: u64;  // [bp-0x70]
    let v3: struct24;  // [bp-0x68], Other Possible Types: u128
    let v4: u64;  // [bp-0x60]
    let v5: u64;  // [bp-0x58]
    let v6: struct40;  // [bp-0x50]
    let v8: u64;  // rax

    v0 = uucore::features::quoting_style::escape_dir_name(*((a0 + 32) as &i64), *((a0 + 40) as &i64), a2 + 252);
    if !*((a2 + 247) as &i8) || *((a2 + 246) as &i8) {
        v5 = v2;
        v3 = v0.field_0;
    } else {
        v3 = uu_ls::create_hyperlink(v1, v2, a0);
    }
    v8 = uu_ls::write_os_str(a1, v4, v5);
    if !v8 {
        v6 = struct40 {
            field_0: ":"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        v8 = std::io::Write::write_fmt(a1, &v6);
    }
    return v8;
}
