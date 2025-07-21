fn uu_od::parse_inputs::parse_inputs(a1: i64, a2: i64) -> : struct40 {
    let a0: u64;  // rsi
    let v0: struct16;  // [bp-0x60], Other Possible Types: u8
    let v1: &u64;  // [bp-0x58], Other Possible Types: struct16, struct_2 *
    let v2: u64;  // [bp-0x50]
    let v3: struct24;  // [bp-0x50]
    let v4: struct24;  // [bp-0x48], Other Possible Types: u32
    let v5: struct24;  // [bp-0x48]
    let v6: u64;  // [bp-0x38]
    let v7: u64;  // [bp-0x30]
    let v8: i8;  // [bp-0x28]
    let v10: u64;  // rdi
    let v11: struct16;  // rdx
    let v13: u64;  // rdx
    let v14: u64;  // r12
    let v15: u64;  // rdx
    let v21: u64;  // rdx
    let v23: i64;  // rdi
    let v24: i64;  // rdi
    let v26: &mut [u8];  // rax:rdx

    *((a1 + 24) as &i64)(&v0);
    if *((a1 + 32) as &i64)(a0, "traditional", 1) as i8 {
        uu_od::parse_inputs::parse_inputs_traditional(v10, v1, v2);
        return;
    }
    v3 = v2;
    if v3 - 1 < 2 {
        v11 = v2;
        v3 = v11;
        if !*((a1 + 32) as &i64)(a0, "address-radix", 6) as i8 {
            uu_od::parse_inputs::parse_offset_operand(&v7, *((v1 + (v11 - 1) * 16) as &i64), *((v1 + (v11 - 1) * 16 + 8) as &i64));
            v13 = v2;
            v3 = v13;
            if !v7 {
                v14 = *(&v8 as &i64);
                v15 = v13;
                if v15 == 1 {
                    v4 = 0;
                    v26 = core::char::methods::encode_utf8_raw(43, &v4, v13);
                    if core::slice::<impl [T]>::starts_with(*(v1 as &i64), *((v1 + 8) as &i64), v26.data_ptr, 1) {
                        v5 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
                        *((v23 + 16) as &u64) = v6;
                        *(v23 as &i128) = *(&v4 as &i128);
                        *((v23 + 24) as &u64) = v14;
                        *((v23 + 32) as &i64) = 0;
                        return;
                    }
                    v15 = v2;
                }
                v3 = v15;
                if v3 == 2 {
                    v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v1 as &i64), *((v1 + 8) as &i64));
                    *((v23 + 16) as &u64) = v6;
                    *(v23 as &i128) = *(&v4 as &i128);
                    *((v23 + 24) as &u64) = v14;
                    *((v23 + 32) as &i64) = 0;
                    return;
                }
            }
        }
    }
    vvar_254{stack -88} = struct16 {0: 𝜙@64b [((5057725, None), vvar_234{stack -88}), ((5057928, None), vvar_234{stack -88}), ((5057678, None), None), ((5057645, None), None)], 16: 𝜙@32b [((5057725, None), None), ((5057928, None), vvar_222{stack -72}), ((5057678, None), None), ((5057645, None), None)]}
    v21 = v3;
    if !v21 {
        v0 = alloc::vec::Vec<T,A>::push();
        v21 = v2;
    }
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v0.field_8, v21 * 16 + v0.field_8);
    *((v24 + 16) as &u64) = v6;
    *(v24 as &u128) = v4.field_0;
    *((v24 + 32) as &i64) = 2;
    return;
}
