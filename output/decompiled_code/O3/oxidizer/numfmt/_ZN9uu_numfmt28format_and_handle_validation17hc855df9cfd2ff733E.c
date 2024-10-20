fn uu_numfmt::format_and_handle_validation() -> u32 {
    let v0: u8;  // [bp-0x70]
    let v1: i8;  // [bp-0x60]
    let v2: u128;  // [sp-0x58]
    let v3: u64;  // [sp-0x48]
    let v4: u64;  // [sp-0x40]
    let v5: u64;  // [sp-0x38]
    let v7: u64;  // rdi
    let v8: u64;  // rsi
    let v9: u64;  // rdx

    v4 = v7;
    v5 = v8;
    uu_numfmt::format::format_and_print(&v0, v7, v8, v9);
    if *(&v0 as &i64) == 0x8000000000000000 {
        return;
    }
    v3 = v1;
    v2 = *(&v0 as &i128);
    goto *((4316548 + *((vvar_14{reg 32} + 200) as &i8) * 4) as &i32) + 4316548;
}
