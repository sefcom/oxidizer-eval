fn uu_numfmt::format_and_handle_validation() -> u32 {
    let v0: Option<struct24>;  // [sp-0x80], Other Possible Types: i192
    let v1: i192;  // [bp-0x48]
    let v2: i64;  // [sp-0x30]
    let v3: i64;  // [sp-0x28]
    let v5: i64;  // rdi
    let v6: i64;  // rsi
    let v7: i64;  // rdx
    let v8: i64;  // r8
    let v9: i64;  // r9

    v2 = v5;
    v3 = v6;
    v0 = uu_numfmt::format::format_and_print(v5, v6, v7, v8, v9);
    if v0 == 0x8000000000000000 {
        return;
    }
    v1 = v0;
    goto *((4334868 + *((vvar_10{reg 32} + 200) as &i8) * 4) as &i32) + 4334868;
}
