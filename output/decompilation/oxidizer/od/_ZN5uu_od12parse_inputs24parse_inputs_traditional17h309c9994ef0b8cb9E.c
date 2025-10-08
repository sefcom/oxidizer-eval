fn uu_od::parse_inputs::parse_inputs_traditional(a1: i64, a2: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0xa8], Other Possible Types: u64
    let v1: core::fmt::rt::Argument;  // [bp-0xa8]
    let v2: i64;  // [bp-0xa0]
    let v3: u64;  // [bp-0x98]
    let v4: core::fmt::Arguments;  // [bp-0x90], Other Possible Types: struct24
    let v5: struct24;  // [bp-0x90]
    let v6: struct24;  // [bp-0x80], Other Possible Types: u64
    let v7: u64;  // [bp-0x60]
    let v8: struct712;  // [bp-0x58], Other Possible Types: u64
    let v9: u64;  // [bp-0x50]
    let v10: struct712;  // [bp-0x48]
    let v11: u64;  // [bp-0x40]
    let v12: struct712;  // [bp-0x38]
    let v13: u8;  // [bp-0x30]
    let v14: i8;  // [bp-0x28]
    let v17: i64;  // r14
    let v18: u128;  // xmm0
    let v19: u64;  // rax
    let v20: u64;  // r12
    let v21: u64;  // rax
    let v22: i64;  // 4096

    match (a2) {
        0 => {
            v17 = alloc::alloc::Global::alloc_impl(8, 24);
            v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
            v3 = v6;
            v18 = *(&v4.field_0 as &i128);
            v0 = v18;
            *((v17 + 16) as &u64) = v6;
            *(v17 as &u128) = v18;
            return struct40 {
                field_0: 1
                field_8: v17
                field_16: 1
                padding_24: <UNKNOWN>
                field_32: 2
            };
        }
        1 => {
            uu_od::parse_inputs::parse_offset_operand(&v0 as u8, *(a1 as &i64), *((a1 + 8) as &i64));
            if v0 {
                core::iter::traits::iterator::Iterator::collect(&v4 as u8, a1, a1 + 16);
                v21 = 2;
                v22 = a1;
                break;
            } else {
                v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
                v21 = 0;
                v22 = v2;
                break;
            }
            return struct40 {
                field_0: *(&v5.field_0 as &i128)
                field_16: v6
                field_24: v22
                field_32: v21
            };
        }
        2 => {
            uu_od::parse_inputs::parse_offset_operand(&v9, *(a1 as &i64), *((a1 + 8) as &i64));
            uu_od::parse_inputs::parse_offset_operand(&v7, *((a1 + 16) as &i64), *((a1 + 24) as &i64));
            if !v9 && !v7 {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "-");
                *((a0 + 24) as &struct712) = v10;
                *((a0 + 32) as &i64) = 1;
                *((a0 + 40) as &u64) = v8;
                return;
            } else if !v7 {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, *(a1 as &i64), *((a1 + 8) as &i64));
                *((a0 + 24) as &struct712) = v8;
                *((a0 + 32) as &i64) = 0;
                return;
            }
        }
        3 => {
            uu_od::parse_inputs::parse_offset_operand(&v11, *((a1 + 16) as &i64), *((a1 + 24) as &i64));
            uu_od::parse_inputs::parse_offset_operand(&v13, *((a1 + 32) as &i64), *((a1 + 40) as &i64));
            if !v11 && !v13 {
                v20 = *(&v14 as &i64);
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, *(a1 as &i64), *((a1 + 8) as &i64));
                *((a0 + 24) as &struct712) = v12;
                *((a0 + 32) as &i64) = 1;
                *((a0 + 40) as &u64) = v20;
                return;
            }
            break;
        }
        _ => {
            v4 = core::fmt::Arguments {
                pieces: &[&str] {
                    ptr: v19
                    len: 1
                }
                args: [v1]
                fmt: 0
            };
            core::option::Option<T>::map_or_else(a0, &v4);
            *((a0 + 32) as &i64) = 3;
            return;
        }
    }
}
