fn uu_dd::read_helper(a1: i64, a2: i64, a3: i64) -> Result<struct32, struct8> {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x80]
    let v1: u64;  // [bp-0x78]
    let v2: i8;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v4: u64;  // [bp-0x60], Other Possible Types: struct24
    let v5: u64;  // [bp-0x58]
    let v6: u8;  // [bp-0x50]
    let v7: u64;  // [bp-0x40]
    let v8: u8;  // [bp-0x38]
    let v9: i8;  // [bp-0x28]
    let v11: i64;  // rdi
    let v12: u128;  // xmm0
    let v13: i64;  // rdi
    let v14: i64;  // r12
    let v15: Result<struct16, struct12>;  // xmm0
    let v16: i64;  // rdi

    alloc::vec::Vec<T,A>::resize(a1, a2, 221);
    if *((*((a0 + 8) as &i64) + 104) as &i8) {
        uu_dd::Input::fill_blocks(a0, a1, *((*((a0 + 8) as &i64) + 105) as &i8), a3);
    } else {
        uu_dd::Input::fill_consecutive(a0, a1, a2);
    }
    if v4 {
        *((v11 + 8) as &u64) = v5;
        *(v11 as &i64) = 1;
        return;
    }
    v3 = v7;
    memcpy(&v1, &v6, 16);
    v0 = v5;
    if !v5 && !v1 {
        v12 = *(&v0 as &i128);
        *((v13 + 24) as &i128) = *(&v2 as &i128);
        *((v13 + 8) as &u128) = v12;
        *(v13 as &i64) = 0;
        return;
    }
    v14 = *((a0 + 8) as &i64);
    if *((*((a0 + 8) as &i64) + 106) as &i8) {
        uu_dd::read_helper::perform_swab(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    }
    if *((v14 + 80) as &i8) != 7 {
        v4 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1);
        uu_dd::blocks::conv_block_unblock_helper(&v8, &v4, v14 + 80, &v0);
        *((a1 + 16) as &i64) = *(&v9 as &i64);
        *(a1 as &u128) = v8;
    }
    v15 = *(&v0 as &i128);
    *((v16 + 24) as &i128) = *(&v2 as &i128);
    *((v16 + 8) as &Result<struct16, struct12>) = v15;
    *(v16 as &i64) = 0;
    return;
}
