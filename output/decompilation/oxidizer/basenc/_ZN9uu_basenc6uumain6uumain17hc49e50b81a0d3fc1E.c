fn uu_basenc::uumain::uumain(a1: i64) -> Result<struct49, struct24> {
    let a0: u64;  // rsi
    let v0: struct16;  // [bp-0x98]
    let v1: struct48;  // [bp-0x88], Other Possible Types: u8
    let v2: struct16;  // [bp-0x80], Other Possible Types: u64
    let v3: i8;  // [bp-0x78]
    let v4: i8;  // [bp-0x70]
    let v5: u64;  // [bp-0x60]
    let v6: u8;  // [bp-0x58]
    let v7: u64;  // [bp-0x48]
    let v8: u64;  // [bp-0x40]
    let v9: u64;  // [bp-0x38]
    let v10: u128;  // [bp-0x30]
    let v11: u64;  // [bp-0x20]
    let v13: u64;  // rdi
    let v14: u64;  // rcx
    let v15: u64;  // rax
    let v16: u64;  // r14
    let v17: u32;  // ebp
    let v18: u128;  // xmm0
    let v19: u128;  // xmm1

    uu_basenc::parse_cmd_args(v13, a0, v14);
    v15 = *(&v1 as &i64);
    v16 = *(&v3 as &i64);
    if v15 == 2 {
        return;
    }
    v11 = v5;
    v10 = *(&v4 as &i128);
    v17 = v6;
    v7 = v15;
    v8 = v2;
    v9 = v16;
    uu_base32::base_common::get_input(&v1, &v7);
    if *(&v1 as &i64) {
        return;
    }
    v0 = v2;
    v0 = v2;
    v18 = *(&v7 as &i128);
    v19 = *(&v9 as &i128);
    v1 = struct48 {
        field_0: v18
        field_16: v19
        field_32: *((&v10 as &char + 8) as &i128)
    };
    uu_base32::base_common::handle_input(&v0, v17, &v1);
    return;
}
