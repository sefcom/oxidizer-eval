fn uu_sort::ext_sort::reader_writer(a0: u32, a1: void*, a2: u32, a3: u32, a4: u32, a5: &struct32) -> u64 {
    let v0: i8;  // [bp-0x1c8]
    let v1: i64;  // [sp-0x1c0]
    let v2: i64;  // [sp-0x1b8]
    let v3: i136;  // [sp-0x178], Other Possible Types: Option<struct16>
    let v4: i64;  // [sp-0x100]
    let v5: i64;  // [sp-0xf8]
    let v6: i64;  // [sp-0xf0]
    let v7: i64;  // [sp-0x10]
    let v8: i64;  // [bp+0x8]
    let v9: i64;  // r15
    let v13: i64;  // rax

    v7 = v9;
    v2 = a4;
    v1 = a3;
    v3 = uu_sort::ext_sort::read_write_loop(a0, v8, *((a1 + 153) as &i8), *((a1 + 104) as &i64) / 10, a1, v0);
    if v4 == 9223372036854775811 {
        return v5;
    }
    v4 = v3;
    v5 = *((&v3 as &char + 8) as &i64);
    v13 = 0x8000000000000000 ^ v4;
    if v13 >= 3 {
        v13 = 3;
    }
    v6 = v3;
    goto *((4396760 + vvar_7{reg 24} * 4) as &i32) + 4396760;
}
