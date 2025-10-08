fn uu_dd::read_helper(a0: i64, a1: i64, a2: void*, a3: u32) -> long long {
    let v0: u64;  // [bp-0x80]
    let v1: u128;  // [bp-0x78]
    let v2: u64;  // [bp-0x68]
    let v3: struct16;  // [bp-0x60], Other Possible Types: struct24, u8
    let v4: u64;  // [bp-0x58]
    let v5: u128;  // [bp-0x50]
    let v6: u64;  // [bp-0x40]
    let v7: u8;  // [bp-0x38]
    let v8: i8;  // [bp-0x28]
    let v10: u64;  // rax
    let v11: i64;  // r12
    let v14: u64;  // rax

    alloc::vec::Vec<T,A>::resize(a2, a3, 221);
    if *((*((a1 + 8) as &i64) + 104) as &i8) == 1 {
        uu_dd::Input::fill_blocks(&v3, a1, a2, *((*((a1 + 8) as &i64) + 105) as &i8));
        v10 = v4;
        if (v3 & 1) {
            *((a0 + 8) as &u64) = v10;
        }
    } else {
        v3 = uu_dd::Input::fill_consecutive(a1, a2);
        v10 = v4;
        if (v3.field_0 as i8 & 1) {
            *((a0 + 8) as &u64) = v10;
        }
    }
    v2 = v6;
    v1 = v5;
    v0 = v10;
    if v10 || v1 as i64 {
        if *((*((a1 + 8) as &i64) + 106) as &i8) {
            uu_dd::read_helper::perform_swab(a2[8] as i64, a2[16] as i64);
        }
        if *((v11 + 80) as &i8) != 7 {
            v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a2[8] as i64, a2[16] as i64);
            uu_dd::blocks::conv_block_unblock_helper(&v7, &v3, v11 + 80, &v0);
            *(&a2[16] as &i64) = *(&v8 as &i64);
            *(a2 as &u128) = v7;
        }
    }
    return struct40 {
        field_0: v14
        field_8: *(&v0 as &i128)
        field_24: *((&v1 as &char + 8) as &i128)
    };
}
