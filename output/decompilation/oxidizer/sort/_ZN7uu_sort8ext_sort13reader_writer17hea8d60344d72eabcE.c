fn uu_sort::ext_sort::reader_writer(a0: u32, a1: void*, a2: u32, a3: u32, a4: u32, a5: &struct32) -> u64 {
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
    let v10: u64;  // [bp+0x8]
    let v11: u64;  // r15
    let v15: u64;  // rax

    v9 = v11;
    v2 = a4;
    v1 = a3;
    uu_sort::ext_sort::read_write_loop(&v3, a0, v10, a1->field_99, a1->field_68 / 10, a1, *(&v0 as &i32));
    if v6 == 9223372036854775811 {
        return v7;
    }
    v6 = *(&v3 as &i64);
    v7 = v4;
    v15 = 0x8000000000000000 ^ v6;
    if v15 >= 3 {
        v15 = 3;
    }
    v8 = v5;
    goto *((4396760 + vvar_7{reg 24} * 4) as &i32) + 4396760;
}
