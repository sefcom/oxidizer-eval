fn uu_od::parse_inputs::parse_inputs_traditional(a0: &struct40, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa8], Other Possible Types: struct16
    let v1: i64;  // [sp-0xa0]
    let v2: i64;  // [sp-0x98]
    let v3: struct24;  // [sp-0x90], Other Possible Types: i192
    let v4: i64;  // [sp-0x88]
    let v5: i64;  // [sp-0x80]
    let v6: i64;  // [sp-0x78]
    let v7: i64;  // [sp-0x70]
    let v8: i128;  // [sp-0x60], Other Possible Types: struct16
    let v9: struct16;  // [sp-0x50], Other Possible Types: i128
    let v10: struct16;  // [sp-0x40], Other Possible Types: i128
    let v11: i128;  // [sp-0x30], Other Possible Types: struct16
    let v13: i64;  // rax
    let v14: i64;  // r15
    let v15: i64;  // r12
    let v16: i64;  // r14
    let v17: i64;  // rax
    let v18: i128;  // xmm0
    let v21: i64;  // r15
    let v22: i64;  // 4096
    let v25: i64;  // r12

    switch (a2) {
    case 0:
        v16 = alloc::alloc::Global::alloc_impl();
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v5;
        v18 = v3;
        v0 = v18;
        *((v16 + 16) as &i64) = v2;
        *(v16 as &i128) = v18;
        alloc::slice::hack::into_vec(a0, v16, 1);
        *((a0 + 32) as &i64) = 2;
    case 1:
        v0 = uu_od::parse_inputs::parse_offset_operand(*(a1 as &i64), *((a1 + 8) as &i64));
        if !v0 {
            v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
            v22 = v1;
        } else {
            v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, a1 + 16);
        }
        return struct40 {
            field_0: v3
            field_16: v5
            field_24: v22
            field_32: v19
        };
    case 2:
        v14 = *(a1 as &i64);
        v15 = *((a1 + 8) as &i64);
        v9 = uu_od::parse_inputs::parse_offset_operand(v14, v15);
        v8 = uu_od::parse_inputs::parse_offset_operand(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
        v17 = v8;
        if !v9 && !v17 {
            v21 = *((&v8 as &char + 8) as &i64);
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "-");
            *((a0 + 24) as &i64) = *((&v9 as &char + 8) as &i64);
            *((a0 + 32) as &i64) = 1;
            *((a0 + 40) as &i64) = v21;
        } else if !v17 {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0, v14, v15);
            *((a0 + 24) as &i64) = *((&v8 as &char + 8) as &i64);
            *((a0 + 32) as &i64) = 0;
        }
LABEL_4d2fb0:
        v0 = a1 + 16;
        v1 = <&T as core::fmt::Display>::fmt;
        v13 = "invalid offset: ";
        break;
    case 3:
        v10 = uu_od::parse_inputs::parse_offset_operand(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
        v11 = uu_od::parse_inputs::parse_offset_operand(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
        if !(!v10) {
            goto LABEL_4d2fb0;
        }
        if !v11 {
            v25 = *((&v11 as &char + 8) as &i64);
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0, *(a1 as &i64), *((a1 + 8) as &i64));
            *((a0 + 24) as &i64) = *((&v10 as &char + 8) as &i64);
            *((a0 + 32) as &i64) = 1;
            *((a0 + 40) as &i64) = v25;
        }
        v0 = a1 + 32;
        v1 = <&T as core::fmt::Display>::fmt;
        v13 = "invalid label: ";
        break;
    default:
        v0 = a1 + 48;
        v1 = <&T as core::fmt::Display>::fmt;
        v13 = "too many inputs after --traditional: ";
        break;
    }
    v3 = v13;
    v4 = 1;
    v7 = 0;
    v5 = &v0;
    v6 = 1;
    core::option::Option<T>::map_or_else();
    *((a0 + 32) as &i64) = 3;
}
