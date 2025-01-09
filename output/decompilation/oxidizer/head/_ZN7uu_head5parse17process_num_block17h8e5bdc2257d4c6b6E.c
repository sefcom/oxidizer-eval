fn uu_head::parse::process_num_block(a0: &Option<struct9>, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i32;  // [sp-0xfc]
    let v9: i64;  // [sp-0x90]
    let v10: i64;  // [sp-0x88]
    let v11: i64;  // [sp-0x80]
    let v13: i8;  // [bp-0x70]
    let v14: i8;  // [bp-0x68]
    let v18: i64;  // r12
    let v20: i64;  // r14
    let v21: i64;  // rbp

    v18 = a3;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(a1, a2);
    if v13 {
        return struct17 {
            field_0: 1
            field_8: 0
            field_16: 1
        };
    }
    v9 = v14;
    v11 = v9;
    v0 = 0;
    v20 = 0;
    v21 = 0;
    v10 = 0;
}
