fn uu_sort::ext_sort::reader_writer() -> u32 {
    let v0: u8;  // [bp-0x1c0]
    let v1: u64;  // [sp-0x1b8]
    let v2: u128;  // [sp-0x178], Other Possible Types: Option<struct16>
    let v3: i8;  // [bp-0x168]
    let v4: u64;  // [sp-0x100]
    let v5: u64;  // [sp-0xf8]
    let v6: u64;  // [sp-0xf0]
    let v7: u64;  // [sp-0x10]
    let v8: &u64;  // [bp+0x8]
    let v9: u64;  // r15
    let v10: u64;  // r8
    let v11: u32;  // rdi
    let v12: &struct_0;  // rsi
    let v13: u64;  // rdx
    let v17: u64;  // rax

    v7 = v9;
    v1 = v10;
    v2 = uu_sort::ext_sort::read_write_loop(v11, v8, v12->field_99, v12->field_68 / 10, v12, v13, *(&v0 as &i32));
    if v4 == 9223372036854775811 {
        return;
    }
    v4 = v2;
    v5 = *((&v2 as &char + 8) as &i64);
    v17 = 0x8000000000000000 ^ v4;
    if v17 >= 3 {
        v17 = 3;
    }
    v6 = v3;
    goto *((4396744 + vvar_1{reg 24} * 4) as &i32) + 4396744;
}
