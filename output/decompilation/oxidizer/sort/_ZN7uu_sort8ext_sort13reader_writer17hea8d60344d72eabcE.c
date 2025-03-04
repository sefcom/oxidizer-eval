fn uu_sort::ext_sort::reader_writer(a0: u32, a1: void*, a2: u32, a3: u32, a4: u32, a5: &struct32, a6: u32) -> u64 {
    let v0: u8;  // [bp-0x1c8]
    let v1: u64;  // [sp-0x1c0]
    let v2: u64;  // [sp-0x1b8]
    let v3: u8;  // [bp-0x178]
    let v4: i8;  // [bp-0x170]
    let v5: i8;  // [bp-0x168]
    let v6: u64;  // [sp-0x100]
    let v7: u64;  // [sp-0xf8]
    let v8: u64;  // [sp-0xf0]
    let v9: u64;  // [sp-0x10]
    let v10: u64;  // r15
    let v14: u64;  // rcx
    let v15: u64;  // rcx

    v9 = v10;
    v2 = a4;
    v1 = a3;
    uu_sort::ext_sort::read_write_loop(&v3, a0, a6, a1->field_99, a1->field_68 / 10, a1, *(&v0 as &i32));
    if v6 == 9223372036854775811 {
        return v7;
    }
    v6 = *(&v3 as &i64);
    v7 = *(&v4 as &i64);
    v15 = (v14 < 3 ? 0x8000000000000000 ^ v6 : 3);
    v8 = *(&v5 as &i64);
    goto *((4396760 + vvar_8{reg 24} * 4) as &i32) + 4396760;
}
