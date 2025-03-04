fn uu_head::parse::process_num_block(a0: &struct17, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i32;  // [sp-0xfc]
    let v7: i64;  // [sp-0x98]
    let v8: i64;  // [sp-0x90]
    let v9: i64;  // [sp-0x88]
    let v10: i64;  // [sp-0x80]
    let v12: i8;  // [bp-0x70]
    let v13: i8;  // [bp-0x68]
    let v17: i64;  // r12
    let v20: i64;  // r14
    let v24: i64;  // rbp

    v17 = a3 as u64;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(a1, a2);
    if v12 {
        return struct17 {
            field_0: 1
            field_8: 0
            field_16: 1
        };
    }
    v7 = a0;
    v8 = *(&v13 as &i64);
    v10 = v8;
    v0 = 0;
    v20 = 0;
    v24 = 0;
    v9 = 0;
}
