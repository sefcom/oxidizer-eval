fn uu_od::parse_inputs::parse_inputs_traditional(a0: &struct40, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa8], Other Possible Types: struct16, int
    let v1: i64;  // [sp-0xa0]
    let v2: i64;  // [sp-0x98]
    let v3: struct24;  // [sp-0x90]
    let v4: struct24;  // [bp-0x90], Other Possible Types: struct40
    let v5: i64;  // [sp-0x80]
    let v6: struct16;  // [sp-0x60]
    let v7: struct16;  // [sp-0x50]
    let v8: struct16;  // [sp-0x40]
    let v9: struct16;  // [sp-0x30]
    let v14: i64;  // r15
    let v15: i64;  // r12
    let v16: i64;  // r14
    let v17: i64;  // rax
    let v18: iNone;  // xmm0
    let v21: i64;  // r15
    let v24: i64;  // r12

    match (a2) {
        0 => {
            v16 = alloc::alloc::Global::alloc_impl();
            v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
            v2 = v5;
            v18 = *(&v4.field_0 as &i128);
            v0 = v18;
            *((v16 + 16) as &unsigned long) = v2;
            *(v16 as void*) = v18;
            alloc::slice::hack::into_vec(a0, v16, 1);
            *((a0 + 32) as &i64) = 2;
        }
        1 => {
            v0 = uu_od::parse_inputs::parse_offset_operand(*(a1 as &i64), *((a1 + 8) as &i64));
            if v0 {
                v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, a1 + 16);
            } else {
                v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
            }
            return struct40 {
                field_0: v3 as i128
                field_16: v5
                field_24: v11
                field_32: v19
            };
        }
        2 => {
            v14 = *(a1 as &i64);
            v15 = *((a1 + 8) as &i64);
            v7 = uu_od::parse_inputs::parse_offset_operand(v14, v15);
            v6 = uu_od::parse_inputs::parse_offset_operand(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
            v17 = v6.field_0;
            if !v7.field_0 && !v17 {
                v21 = v6.field_8;
                <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "-");
                *((a0 + 24) as &u64) = v7.field_8;
                *((a0 + 32) as &i64) = 1;
                *((a0 + 40) as &unsigned long) = v21;
            } else if !v17 {
                <T as alloc::slice::hack::ConvertVec>::to_vec(a0, v14, v15);
                *((a0 + 24) as &u64) = v6.field_8;
                *((a0 + 32) as &i64) = 0;
            }
LABEL_4d2fb0:
            v0 = a1 + 16;
            v1 = <&T as core::fmt::Display>::fmt;
            break;
        }
        3 => {
            v8 = uu_od::parse_inputs::parse_offset_operand(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
            v9 = uu_od::parse_inputs::parse_offset_operand(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
            if !(!v8.field_0) {
                goto LABEL_4d2fb0;
            }
            if !v9.field_0 {
                v24 = v9.field_8;
                <T as alloc::slice::hack::ConvertVec>::to_vec(a0, *(a1 as &i64), *((a1 + 8) as &i64));
                *((a0 + 24) as &u64) = v8.field_8;
                *((a0 + 32) as &i64) = 1;
                *((a0 + 40) as &unsigned long) = v24;
            }
            v0 = a1 + 32;
            v1 = <&T as core::fmt::Display>::fmt;
            break;
        }
        _ => {
            v0 = a1 + 48;
            v1 = <&T as core::fmt::Display>::fmt;
            break;
        }
    }
    v4 = struct40 {
        field_0: v12
        field_8: 1
        field_16: &v0
        field_24: 1
        field_32: 0
    };
    core::option::Option<T>::map_or_else(a0, &v4);
    *((a0 + 32) as &i64) = 3;
}
