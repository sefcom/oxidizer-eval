fn uu_dd::read_helper(a0: &Result<struct32, struct8>, a1: u32, a2: &struct24, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x80]
    let v1: iNone;  // [sp-0x78]
    let v2: i64;  // [sp-0x68]
    let v3: Result<struct28, struct8>;  // [sp-0x60], Other Possible Types: struct36, int
    let v4: struct24;  // [sp-0x60]
    let v5: i8;  // [bp-0x38]
    let v6: i8;  // [bp-0x28]
    let v8: i64;  // rax
    let v9: i64;  // rax
    let v11: i64;  // r12

    alloc::vec::Vec<T,A>::resize(a2, a3, 221);
    v8 = *((a1 + 8) as &i64);
    if !*((v8 + 104) as &i8) {
        v3 = uu_dd::Input::fill_consecutive(a1, a2);
    } else {
        v3 = uu_dd::Input::fill_blocks(a1, a2, *((v8 + 105) as &i8));
    }
    v9 = (&v3)[8] as i64;
    if v3 as i64 {
        return Err(struct8 {
            field_0: v0
        });
    }
    v2 = v3 as i64;
    v1 = (&v3)[16] as i128;
    v0 = v9;
    if !v0 && !v1 as i64 {
        return Ok(struct16 {
            field_8: <UNKNOWN>
        });
    }
    v11 = *((a1 + 8) as &i64);
    if *((v11 + 106) as &i8) {
        v9 = uu_dd::read_helper::perform_swab(*((a2 + 8) as &i64), *((a2 + 16) as &i64));
        v11 = *((a1 + 8) as &i64);
    }
    if *((v11 + 80) as &i8) == 7 {
        return Ok(struct16 {
            field_8: <UNKNOWN>
        });
    }
    v4 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a2);
    uu_dd::blocks::conv_block_unblock_helper(&v5, &v4, v11 + 80, &v0);
    *((a2 + 16) as &i64) = *(&v6 as &i64);
    *(a2 as &i128) = *(&v5 as &i128);
}
