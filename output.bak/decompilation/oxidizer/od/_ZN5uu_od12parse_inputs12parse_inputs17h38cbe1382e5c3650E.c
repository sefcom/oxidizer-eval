fn uu_od::parse_inputs::parse_inputs(a0: &struct40, a1: u32, a2: u32) -> u64 {
    let v0: struct16;  // [sp-0x60], Other Possible Types: i128
    let v1: i8;  // [bp-0x58]
    let v2: i8;  // [bp-0x50]
    let v3: struct24;  // [bp-0x48], Other Possible Types: struct1
    let v4: i128;  // [sp-0x30], Other Possible Types: struct16
    let v6: i64;  // rdx
    let v7: i64;  // r15
    let v8: i64;  // rdx
    let v9: i64;  // rax
    let v11: i64;  // rax
    let v12: i64;  // r14
    let v13: i64;  // r15
    let v14: i64;  // rax

    v6 = a2;
    *((a2 + 24) as &i64)();
    v7 = *((a2 + 32) as &i64);
    if v7() {
        uu_od::parse_inputs::parse_inputs_traditional(a0, v1, v2);
    } else {
        v8 = v2;
        if v8 - 1 < 2 {
            v8 = v2;
            if !v7() {
                v9 = v1;
                v4 = uu_od::parse_inputs::parse_offset_operand(*((v9 + (v8 - 1) * 16) as &i64), *((v9 + (v8 - 1) * 16 + 8) as &i64));
                v8 = v2;
                if !v4 {
                    if v8 == 1 {
                        v11 = v1;
                        v12 = *(v11 as &i64);
                        v13 = *((v11 + 8) as &i64);
                        v3 = struct1 {
                            field_0: 0
                        };
                        if core::slice::<impl [T]>::starts_with(v12, v13, core::char::methods::encode_utf8_raw(43, &v3), 1) as i8 {
                            v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
                            return struct40 {
                                field_0: v3
                                field_16: *((&v3 as &char + 16) as &i64)
                                field_24: v10
                                field_32: 0
                            };
                        }
                        v8 = v2;
                    }
                    if v8 == 2 {
                        v14 = v1;
                        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v14 as &i64), *((v14 + 8) as &i64));
                    }
                }
            }
        }
        if v8 {
            v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(*((&v0 as &char + 8) as &i64), v2 * 16 + *((&v0 as &char + 8) as &i64));
            return struct32 {
                field_0: v3
                field_16: *((&v3 as &char + 16) as &i64)
                field_32: <UNKNOWN>
            };
        }
        v0 = alloc::vec::Vec<T,A>::push();
    }
}
