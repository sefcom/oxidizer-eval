fn uu_date::make_format_string(a0: void*) -> u64 {
    let v1: u64;  // rcx
    let v2: u64;  // rcx

    v2 = (v1 < 5 ? 0x8000000000000000 ^ a0->field_20 : 3);
    goto *((4516648 + vvar_2{reg 24} * 4) as &i32) + 4516648;
}
