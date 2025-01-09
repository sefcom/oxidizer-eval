fn uu_realpath::resolve_path(a0: u32, a1: u32, a2: u8, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct1;  // [bp-0x61]
    let v1: i64;  // [sp-0x60], Other Possible Types: struct16
    let v2: i192;  // [sp-0x48]
    let v3: i192;  // [sp-0x30], Other Possible Types: struct24
    let v4: i64;  // [bp+0x8]
    let v5: i8;  // [bp+0x10]
    let v6: i8;  // [bp+0x18]
    let v7: i64;  // rax

    v1 = uucore::features::fs::canonicalize(a0, a1, a4, a3);
    v7 = *((&v1 as &char + 8) as &i64);
    if v2 == 0x8000000000000000 {
        return v7;
    }
    v2 = v1;
    v3 = uu_realpath::process_relative(&v2, v5, v6, a5, v4);
    v7 = uucore::mods::display::print_verbatim(&v3);
    if !v7 {
        v1 = std::io::stdio::stdout();
        v0 = struct1 {
            field_0: a2
        };
        v7 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v1, &v0, 1);
        return v7;
    }
    return v7;
}
