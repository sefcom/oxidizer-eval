fn uu_dd::read_helper(a1: i64, a2: i64, a3: i64) -> Result<struct32, struct8> {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x80]
    let v1: u128;  // [bp-0x78]
    let v2: u64;  // [bp-0x68]
    let v3: struct24;  // [bp-0x60], Other Possible Types: struct40
    let v4: struct40;  // [bp-0x58]
    let v5: u128;  // [bp-0x50]
    let v6: struct16;  // [bp-0x40]
    let v7: alloc::string::String;  // [bp-0x38], Other Possible Types: u8
    let v8: i8;  // [bp-0x28]
    let v10: i64;  // rdi
    let v11: u128;  // xmm0
    let v12: i64;  // rdi
    let v13: i64;  // r12
    let v14: Result<struct16, struct12>;  // xmm0
    let v15: i64;  // rdi

    alloc::vec::Vec<T,A>::resize(a1, a2, 221);
    if *((*((a0 + 8) as &i64) + 104) as &i8) {
        uu_dd::Input::fill_blocks(a0, a1, *((*((a0 + 8) as &i64) + 105) as &i8), a3);
    } else {
        uu_dd::Input::fill_consecutive(a0, a1, a2);
    }
    if v3 {
        *((v10 + 8) as &struct40) = v4;
        *(v10 as &i64) = 1;
        return;
    }
    v2 = v6;
    v1 = v5;
    v0 = v4;
    if !v4 && !v1 as i64 {
        v11 = *(&v0 as &i128);
        *((v12 + 24) as &i128) = *((&v1 as &char + 8) as &i128);
        *((v12 + 8) as &u128) = v11;
        *(v12 as &i64) = 0;
        return;
    }
    v13 = *((a0 + 8) as &i64);
    if *((*((a0 + 8) as &i64) + 106) as &i8) {
        uu_dd::read_helper::perform_swab(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    }
    if *((v13 + 80) as &i8) != 7 {
        v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1);
        uu_dd::blocks::conv_block_unblock_helper(&v7, &v3, v13 + 80, &v0);
        *((a1 + 16) as &i64) = *(&v8 as &i64);
        *(a1 as &alloc::string::String) = v7;
    }
    v14 = *(&v0 as &i128);
    *((v15 + 24) as &i128) = *((&v1 as &char + 8) as &i128);
    *((v15 + 8) as &Result<struct16, struct12>) = v14;
    *(v15 as &i64) = 0;
    return;
}
