fn uu_od::parse_inputs::parse_inputs(a0: &struct40, a1: u32, a2: u32) -> u64 {
    let v0: struct16;  // [sp-0x60]
    let v1: i128;  // [bp-0x58]
    let v2: i8;  // [bp-0x50]
    let v3: struct24;  // [bp-0x48], Other Possible Types: i192, struct1
    let v4: i128;  // [sp-0x30], Other Possible Types: struct16
    let v6: i64;  // rdx
    let v7: i64;  // r15
    let v8: i64;  // rdx
    let v9: i64;  // rax
    let v10: i64;  // r12
    let v11: i64;  // rax
    let v12: i64;  // r14
    let v13: i64;  // r15
    let v14: i64;  // rax

    v6 = a2;
    *((a2 + 24) as &i64)();
    v7 = *((a2 + 32) as &i64);
    if v7() {
        uu_od::parse_inputs::parse_inputs_traditional(a0, v1, v2);
        return a0;
    }
    v8 = v2;
    if v8 - 1 < 2 {
        v8 = v2;
        if !v7() && (v9 = v1, v4 = uu_od::parse_inputs::parse_offset_operand(*((v9 + (v8 - 1) * 16) as &i64), *((v9 + (v8 - 1) * 16 + 8) as &i64)), v8 = v2, !v4) {
            v10 = *((&v4 as &char + 8) as &i64);
            if v8 != 1 {
LABEL_4d2d88:
                if !(v8 == 2) {
                    goto LABEL_4d2cca;
                }
                v14 = v1;
                v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v14 as &i64), *((v14 + 8) as &i64));
            } else {
                v11 = v1;
                v12 = *(v11 as &i64);
                v13 = *((v11 + 8) as &i64);
                v3 = struct1 {
                    field_0: 0
                };
                if !core::slice::<impl [T]>::starts_with(v12, v13, core::char::methods::encode_utf8_raw(43, &v3), 1) as i8 {
                    v8 = v2;
                    goto LABEL_4d2d88;
                } else {
                    v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
                }
            }
            return struct40 {
                field_0: v3
                field_16: *((&v3 as &char + 16) as &i64)
                field_24: v10
                field_32: 0
            };
        }
    }
LABEL_4d2cca:
    if !v8 {
        v0 = alloc::vec::Vec<T,A>::push();
    }
    v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v1, v2 * 16 + v1);
    *((a0 + 16) as &i64) = *((&v3 as &char + 16) as &i64);
    *(a0 as &i192) = v3;
    *((a0 + 32) as &i64) = 2;
    return a0;
}
