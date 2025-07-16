fn uu_basenc::uumain::uumain(a1: i64) -> Result<struct49, struct24> {
    let a0: u64;  // rsi
    let v0: u128;  // [bp-0x98]
    let v1: u256;  // [bp-0x88]
    let v2: u64;  // [bp-0x80]
    let v3: i8;  // [bp-0x78]
    let v4: u8;  // [bp-0x70]
    let v5: u8;  // [bp-0x68]
    let v6: u64;  // [bp-0x60]
    let v7: u8;  // [bp-0x58]
    let v8: u64;  // [bp-0x48]
    let v9: u64;  // [bp-0x40]
    let v10: u64;  // [bp-0x38]
    let v11: u8;  // [bp-0x30]
    let v12: u8;  // [bp-0x28]
    let v13: u64;  // [bp-0x20]
    let v15: u64;  // rdi
    let v16: u64;  // rcx
    let v17: u32;  // ebp
    let v18: u128;  // xmm0

    uu_basenc::parse_cmd_args(v15, a0, v16);
    if *(&v1 as &i64) == 2 {
        return;
    }
    v13 = v6;
    memcpy(&v11, &v4, 16);
    v17 = v7;
    v8 = *(&v1 as &i64);
    v9 = v2;
    v10 = *(&v3 as &i64);
    uu_base32::base_common::get_input(&v1, &v8);
    if *(&v1 as &i64) {
        return;
    }
    v0 = v2;
    v18 = *(&v8 as &i128);
    memcpy(&v5, &v12, 16);
    v1 = struct32 {
        field_0: v18
        field_16: *(&v10 as &i128)
    };
    uu_base32::base_common::handle_input(&v0, v17, &v1);
    return;
}
