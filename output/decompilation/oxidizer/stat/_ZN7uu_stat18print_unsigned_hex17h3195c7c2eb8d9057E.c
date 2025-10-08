fn uu_stat::print_unsigned_hex(a0: i384, a1: u64, a2: u32, a3: u64, a4: u64, a5: u64, a6: u8) -> void {
    let v0: core::fmt::Arguments;  // [bp-0xa0]
    let v12: struct16;  // [bp-0x38]
    let v14: u64;  // [bp-0x20]
    let v15: u8;  // [bp-0x18]
    let v16: i64;  // rdi
    let v17: i64;  // rsi

    v0 = a0;
    v12 = struct16 {
        field_0: ((a1 as u8 & 1) ? &g_41d589 : 1)
        field_8: ((a1 as u32 & 1) * 2) as u64
    };
    if a4 && a4 != 1 && a5 > 65535 {
        panic!("Formatting argument out of range");
    }
    core::option::Option<T>::map_or_else(v16, v17);
    uu_stat::pad_and_print(v14, *(&v15 as &i64), a2, a3, a6);
    return;
}
