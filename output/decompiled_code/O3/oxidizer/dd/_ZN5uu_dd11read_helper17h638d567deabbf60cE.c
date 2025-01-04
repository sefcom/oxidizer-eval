fn uu_dd::read_helper(a0: &Result<struct32, struct8>, a1: u32, a2: &struct24, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x80]
    let v1: i128;  // [sp-0x78]
    let v2: i64;  // [sp-0x68]
    let v3: i192;  // [sp-0x60], Other Possible Types: struct24, Result<struct28, struct8>, struct36
    let v4: i8;  // [bp-0x38]
    let v5: i8;  // [bp-0x28]
    let v7: i64;  // rax
    let v8: i64;  // rdx
    let v9: i64;  // rax
    let v10: i128;  // xmm0
    let v11: i64;  // r12
    let v12: i128;  // xmm0

    alloc::vec::Vec<T,A>::resize(a2, a3, 221);
    v7 = *((a1 + 8) as &i64);
    if !*((v7 + 104) as &i8) {
        v3 = uu_dd::Input::fill_consecutive(a1, a2);
    } else {
        v3 = uu_dd::Input::fill_blocks(a1, a2, *((v7 + 105) as &i8));
    }
    v9 = *((&v3 as &char + 8) as &i64);
    match v3 {
        Err(_) => {
            return struct16 {
                field_0: 1
                field_8: v0
            };
        },
        Ok(_) => {
            v2 = v3;
            v1 = *((&v3 as &char + 16) as &i128);
            v0 = v9;
            if !v0 && !v1 {
                v10 = v0;
                return struct40 {
                    field_0: 0
                    field_8: v10
                    field_24: *((&v1 as &char + 8) as &i128)
                };
            }
            v11 = *((a1 + 8) as &i64);
            if *((v11 + 106) as &i8) {
                v9 = uu_dd::read_helper::perform_swab(*((a2 + 8) as &i64), *((a2 + 16) as &i64), v8);
                v11 = *((a1 + 8) as &i64);
            }
            if *((v11 + 80) as &i8) != 7 {
                v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a2);
                uu_dd::blocks::conv_block_unblock_helper(&v4, &v3, v11 + 80, &v0);
                v9 = v5;
                *((a2 + 16) as &i64) = v9;
                *(a2 as &i8) = v4;
            }
            v12 = v0;
            return struct40 {
                field_0: 0
                field_8: v12
                field_24: *((&v1 as &char + 8) as &i128)
            };
        },
    }
}
