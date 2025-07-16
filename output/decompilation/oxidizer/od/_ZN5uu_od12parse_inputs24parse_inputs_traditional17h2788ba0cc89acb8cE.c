fn uu_od::parse_inputs::parse_inputs_traditional(a1: i64, a2: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0xa8]
    let v1: i64;  // [bp-0xa0]
    let v2: u64;  // [bp-0x98]
    let v3: struct24;  // [bp-0x90], Other Possible Types: u192
    let v4: struct24;  // [bp-0x90], Other Possible Types: u320
    let v5: u64;  // [bp-0x80]
    let v6: u64;  // [bp-0x60]
    let v7: u64;  // [bp-0x58]
    let v8: u8;  // [bp-0x50]
    let v9: u64;  // [bp-0x48]
    let v10: u64;  // [bp-0x40]
    let v11: u64;  // [bp-0x38]
    let v12: u64;  // [bp-0x30]
    let v13: i8;  // [bp-0x28]
    let v15: core::option::Option<u32>;  // rax
    let v17: i64;  // r14
    let v18: u128;  // xmm0
    let v19: struct24;  // rax
    let v20: struct24;  // rax
    let v21: u64;  // rax
    let v22: i64;  // 4096
    let v23: struct24;  // rax
    let v24: u64;  // r12
    let v25: struct24;  // rax
    let v26: u64;  // rax

    match (a2) {
        0 => {
            v17 = alloc::alloc::Global::alloc_impl(a0, a1, a2) as u64;
            v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
            v2 = v5;
            v18 = v4.field_0;
            v0 = v18;
            *((v17 + 16) as &u64) = v5;
            *(v17 as &u128) = v18;
            v19 = alloc::slice::hack::into_vec(a0, v17, 1) as u64;
            *((a0 + 32) as &i64) = 2;
            return v19;
        }
        1 => {
            uu_od::parse_inputs::parse_offset_operand(&v0, *(a1 as &i64), *((a1 + 8) as &i64));
            if v0 {
                v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, a1 + 16);
                v21 = 2;
                v22 = a1;
                break;
            } else {
                v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
                v21 = 0;
                v22 = v1;
                break;
            }
            return struct40 {
                field_0: v3 as i128
                field_16: v5
                field_24: v22
                field_32: v21
            };
        }
        2 => {
            uu_od::parse_inputs::parse_offset_operand(&v8, *(a1 as &i64), *((a1 + 8) as &i64));
            uu_od::parse_inputs::parse_offset_operand(&v6, *((a1 + 16) as &i64), *((a1 + 24) as &i64));
            if !v8 && !v6 {
                v20 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "-") as u64;
                *((a0 + 24) as &u64) = v9;
                *((a0 + 32) as &i64) = 1;
                *((a0 + 40) as &u64) = v7;
                return v20;
            } else if !v6 {
                v23 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0, *(a1 as &i64), *((a1 + 8) as &i64)) as u64;
                *((a0 + 24) as &u64) = v7;
                *((a0 + 32) as &i64) = 0;
                return v23;
            }
        }
        3 => {
            uu_od::parse_inputs::parse_offset_operand(&v10, *((a1 + 16) as &i64), *((a1 + 24) as &i64));
            uu_od::parse_inputs::parse_offset_operand(&v12, *((a1 + 32) as &i64), *((a1 + 40) as &i64));
            if !v10 && !v12 {
                v24 = *(&v13 as &i64);
                v25 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0, *(a1 as &i64), *((a1 + 8) as &i64)) as u64;
                *((a0 + 24) as &u64) = v11;
                *((a0 + 32) as &i64) = 1;
                *((a0 + 40) as &u64) = v24;
                return v25;
            }
            break;
        }
        _ => {
            v4 = struct40 {
                field_0: v15
                field_8: 1
                field_16: &v0
                field_24: 1
                field_32: 0
            };
            v26 = core::option::Option<T>::map_or_else(a0, &v4);
            *((a0 + 32) as &i64) = 3;
            return v26;
        }
    }
}
