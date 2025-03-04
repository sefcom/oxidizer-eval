fn uu_realpath::resolve_path(a0: u32, a1: u32, a2: u8, a3: u32, a4: u32, a5: u32, a6: u32, a7: u32, a8: u32) -> u64 {
    let v0: struct1;  // [bp-0x61]
    let v1: struct16;  // [sp-0x60], Other Possible Types: unsigned long
    let v2: iNone;  // [sp-0x48], Other Possible Types: unsigned long
    let v3: struct24;  // [sp-0x30]
    let v4: i64;  // rax

    v1 = uucore::features::fs::canonicalize(a0, a1, a4 as u64, a3 as u64);
    v4 = v1.field_8;
    if v2 == 0x8000000000000000 {
        return v4;
    }
    v2 = *(&v1 as &i192);
    v3 = uu_realpath::process_relative(&v2, a7, a8, a5, a6);
    v4 = uucore::mods::display::print_verbatim(&v3);
    if !v4 {
        v1 = std::io::stdio::stdout();
        v0 = struct1 {
            field_0: a2
        };
        v4 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v1, &v0, 1);
        return v4;
    }
    return v4;
}
