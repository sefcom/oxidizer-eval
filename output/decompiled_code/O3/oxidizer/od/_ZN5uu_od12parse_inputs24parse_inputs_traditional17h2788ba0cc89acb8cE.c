fn uu_od::parse_inputs::parse_inputs_traditional(a0: &struct40, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa8], Other Possible Types: struct16
    let v1: i64;  // [sp-0xa0]
    let v2: i64;  // [sp-0x98]
    let v3: struct24;  // [sp-0x90], Other Possible Types: i192, struct40
    let v4: i64;  // [sp-0x80]
    let v5: struct16;  // [sp-0x60], Other Possible Types: i128
    let v6: struct16;  // [sp-0x50], Other Possible Types: i128
    let v7: struct16;  // [sp-0x40], Other Possible Types: i128
    let v8: i128;  // [sp-0x30], Other Possible Types: struct16
    let v10: i64;  // r15
    let v11: i64;  // r12
    let v12: i64;  // r14
    let v13: i64;  // rax
    let v14: i128;  // xmm0
    let v15: i64;  // rax
    let v17: i64;  // r15
    let v18: i64;  // 4096
    let v21: i64;  // r12

    switch (a2) {
    case 0:
        v12 = alloc::alloc::Global::alloc_impl();
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v4;
        v14 = v3;
        v0 = v14;
        *((v12 + 16) as &i64) = v2;
        *(v12 as &i128) = v14;
        v15 = alloc::slice::hack::into_vec(a0, v12, 1);
        *((a0 + 32) as &i64) = 2;
        return v15;
    case 1:
        v0 = uu_od::parse_inputs::parse_offset_operand(*(a1 as &i64), *((a1 + 8) as &i64));
        if !v0 {
            v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
            v15 = 0;
            v18 = v1;
        } else {
            v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, a1 + 16);
            v15 = 2;
        }
        return struct40 {
            field_0: v3
            field_16: v4
            field_24: v18
            field_32: v15
        };
    case 2:
        v10 = *(a1 as &i64);
        v11 = *((a1 + 8) as &i64);
        v6 = uu_od::parse_inputs::parse_offset_operand(v10, v11);
        v5 = uu_od::parse_inputs::parse_offset_operand(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
        v13 = v5;
        if !v6 && !v13 {
            v17 = *((&v5 as &char + 8) as &i64);
            v15 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "-");
            *((a0 + 24) as &i64) = *((&v6 as &char + 8) as &i64);
            *((a0 + 32) as &i64) = 1;
            *((a0 + 40) as &i64) = v17;
            return v15;
        } else if !v13 {
            v15 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0, v10, v11);
            *((a0 + 24) as &i64) = *((&v5 as &char + 8) as &i64);
            *((a0 + 32) as &i64) = 0;
            return v15;
        }
LABEL_4d2fb0:
        v0 = a1 + 16;
        v1 = <&T as core::fmt::Display>::fmt;
        break;
    case 3:
        v7 = uu_od::parse_inputs::parse_offset_operand(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
        v8 = uu_od::parse_inputs::parse_offset_operand(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
        if !(!v7) {
            goto LABEL_4d2fb0;
        }
        if !v8 {
            v21 = *((&v8 as &char + 8) as &i64);
            v15 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0, *(a1 as &i64), *((a1 + 8) as &i64));
            *((a0 + 24) as &i64) = *((&v7 as &char + 8) as &i64);
            *((a0 + 32) as &i64) = 1;
            *((a0 + 40) as &i64) = v21;
            return v15;
        }
        v0 = a1 + 32;
        v1 = <&T as core::fmt::Display>::fmt;
        break;
    default:
        v0 = a1 + 48;
        v1 = <&T as core::fmt::Display>::fmt;
        break;
    }
    v3 = struct40 {
        field_0: v22
        field_8: 1
        field_16: &v0
        field_24: 1
        field_32: 0
    };
    v15 = core::option::Option<T>::map_or_else(a0, &v3);
    *((a0 + 32) as &i64) = 3;
    return v15;
}
