fn uu_dd::read_helper(a0: &Result<struct32, struct8>, a1: u32, a2: &struct24, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x80]
    let v1: i128;  // [sp-0x78]
    let v2: i64;  // [sp-0x68]
    let v3: i288;  // [sp-0x60], Other Possible Types: struct24, Result<struct28, struct8>
    let v4: i8;  // [bp-0x38]
    let v5: i8;  // [bp-0x28]
    let v7: i64;  // rax
    let v9: i64;  // r12

    alloc::vec::Vec<T,A>::resize(a2, a3, 221);
    if !*((*((a1 + 8) as &i64) + 104) as &i8) {
        v3 = uu_dd::Input::fill_consecutive(a1, a2);
    } else {
        uu_dd::Input::fill_blocks();
    }
    v7 = *((&v3 as &char + 8) as &i64);
    match v3 {
        Err(_) => {
            return Err(struct8 {
                field_0: v0
            });
        },
        Ok(_) => {
            v2 = v3;
            v1 = *((&v3 as &char + 16) as &i128);
            v0 = v7;
            if !v0 && !v1 {
                return Ok(struct32 {
                    field_0: v8
                    field_16: *((&v1 as &char + 8) as &i128)
                });
            }
            v9 = *((a1 + 8) as &i64);
            if *((v9 + 106) as &i8) {
                v7 = uu_dd::read_helper::perform_swab(*((a2 + 8) as &i64), *((a2 + 16) as &i64));
                v9 = *((a1 + 8) as &i64);
            }
            if *((v9 + 80) as &i8) == 7 {
                return Ok(struct32 {
                    field_0: v10
                    field_16: *((&v1 as &char + 8) as &i128)
                });
            }
            v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a2);
            uu_dd::blocks::conv_block_unblock_helper(&v4, &v3, v9 + 80, &v0);
            *((a2 + 16) as &i8) = v5;
            *(a2 as &i8) = v4;
        },
    }
}
