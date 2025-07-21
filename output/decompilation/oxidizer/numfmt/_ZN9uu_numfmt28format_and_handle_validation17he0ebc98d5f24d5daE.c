fn uu_numfmt::format_and_handle_validation(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: struct8;  // [bp-0x80]
    let v4: u64;  // [bp-0x30]
    let v5: u64;  // [bp-0x28]

    v4 = a0;
    v5 = a1;
    v0 = uu_numfmt::format::format_and_print(a0, a1, a2);
    return 0;
}
