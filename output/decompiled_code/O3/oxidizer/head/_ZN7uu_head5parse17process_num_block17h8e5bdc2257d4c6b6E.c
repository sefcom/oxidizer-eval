fn uu_head::parse::process_num_block(a0: &Option<struct9>, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i32;  // [sp-0xfc]
    let v6: i64;  // [sp-0x90]
    let v7: i64;  // [sp-0x88]
    let v8: i64;  // [sp-0x80]
    let v10: i8;  // [bp-0x70]
    let v11: i8;  // [bp-0x68]
    let v15: i64;  // r12
    let v17: i64;  // r14
    let v18: i64;  // rbp

    v15 = a3;
    if v10 {
        *((a0 + 8) as &i64) = 0;
        *((a0 + 16) as &i8) = 1;
        *(a0 as &i64) = 1;
        return core::num::<impl core::str::traits::FromStr for usize>::from_str(a1, a2);
    }
    v6 = v11;
    v8 = v6;
    v0 = 0;
    v17 = 0;
    v18 = 0;
    v7 = 0;
}
