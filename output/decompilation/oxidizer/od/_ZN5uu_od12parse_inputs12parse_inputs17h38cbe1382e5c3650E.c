fn uu_od::parse_inputs::parse_inputs(a1: i64, a2: i64) -> : struct40 {
    let a0: u64;  // rsi
    let v0: struct16;  // [bp-0x60], Other Possible Types: u8
    let v1: &u64;  // [bp-0x58], Other Possible Types: struct_4 *
    let v2: u64;  // [bp-0x50]
    let v3: core::option::Option<u32>;  // [bp-0x50]
    let v4: u32;  // [bp-0x48]
    let v5: struct24;  // [bp-0x48]
    let v6: struct24;  // [bp-0x48]
    let v7: u64;  // [bp-0x38]
    let v8: u8;  // [bp-0x30]
    let v9: i8;  // [bp-0x28]
    let v11: u64;  // rdi
    let v12: u64;  // rdx
    let v14: u64;  // rdx
    let v15: u64;  // r12
    let v16: u64;  // rdx
    let v22: u64;  // rdx
    let v24: i64;  // rdi
    let v26: i64;  // rdi
    let v29: &mut [u8];  // rax:rdx

    *((a1 + 24) as &i64)(&v0);
    if *((a1 + 32) as &i64)(a0, "traditional", 1) as i8 {
        uu_od::parse_inputs::parse_inputs_traditional(v11, v1, v2);
        return;
    }
    v3 = v2;
    if v3 - 1 < 2 {
        v12 = v2;
        v3 = v12;
        if !*((a1 + 32) as &i64)(a0, "address-radix", 6) as i8 {
            uu_od::parse_inputs::parse_offset_operand(&v8, *((v1 + (v12 - 1) * 16) as &i64), *((v1 + (v12 - 1) * 16 + 8) as &i64));
            v14 = v2;
            v3 = v14;
            if !v8 {
                v15 = *(&v9 as &i64);
                v16 = v14;
                if v16 == 1 {
                    v4 = 0;
                    v29 = core::char::methods::encode_utf8_raw(43, &v4, v14);
                    if core::slice::<impl [T]>::starts_with(*(v1 as &i64), *((v1 + 8) as &i64), v29.data_ptr, 1) {
                        v5 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
                        *((v24 + 16) as &u64) = v7;
                        *(v24 as &i128) = *(&v4 as &i128);
                        *((v24 + 24) as &u64) = v15;
                        *((v24 + 32) as &i64) = 0;
                        return;
                    }
                    v16 = v2;
                }
                v3 = v16;
                if v3 == 2 {
                    v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v1 as &i64), *((v1 + 8) as &i64));
                    *((v24 + 16) as &u64) = v7;
                    *(v24 as &i128) = *(&v4 as &i128);
                    *((v24 + 24) as &u64) = v15;
                    *((v24 + 32) as &i64) = 0;
                    return;
                }
            }
        }
    }
    v22 = v3;
    if !v22 {
        v0 = alloc::vec::Vec<T,A>::push();
        v22 = v2;
    }
    v6 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v1, v22 * 16 + v1);
    *((v26 + 16) as &u64) = v7;
    *(v26 as &i128) = *(&v6.field_0 as &i128);
    *((v26 + 32) as &i64) = 2;
    return;
}
