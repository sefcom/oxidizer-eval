fn uu_sort::KeyPosition::new(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32) -> u64 {
    let v0: i192;  // [sp-0xa8], Other Possible Types: struct24, struct16
    let v1: i192;  // [sp-0x90], Other Possible Types: Result<struct24, struct16>
    let v2: i8;  // [bp-0x88]
    let v3: struct16;  // [bp-0x78]
    let v4: struct41;  // [sp-0x68]
    let v5: i16;  // [sp-0x38]
    let v7: i64;  // rax
    let v8: i64;  // r15
    let v10: i64;  // rdx
    let v11: i128;  // xmm0
    let v12: i64;  // rax
    let v13: i64;  // r15
    let v14: i64;  // rcx
    let v15: i64;  // rdx

    v4 = <char as core::str::pattern::Pattern>::into_searcher(0x2e, a1, a2);
    v3 = struct16 {
        field_0: 0
        field_8: a2
    };
    v5 = 1;
    v7 = core::str::iter::SplitInternal<P>::next(&v3);
    if !v7 {
        v0 = uu_sort::KeyPosition::new::{{closure}}(a1, a2);
        v11 = v0;
        v12 = *((&v0 as &char + 16) as &i64);
        goto LABEL_520e57;
    } else {
        v8 = v7;
        v1 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v8, v10);
        match v1 {
            Ok(v13) => {
                if !v13 {
                    v12 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, "field index can not be 0");
                } else {
                    v0 = struct16 {
                        field_0: 0x8000000000000000
                        field_8: a3
                    };
                    v1 = core::option::Option<T>::map_or(core::str::iter::SplitInternal<P>::next(&v3), v10, &v0);
                    v14 = v1;
                    v12 = *((&v1 as &char + 8) as &i64);
                    match v1 {
                        Err(_) => {
                            v12 = a4 as u32 as u64;
                            return struct25 {
                                field_0: 0
                                field_8: v13
                                field_16: v12
                                field_24: v12 as i8
                            };
                        },
                        Ok(_) => {
                            v15 = *((&v1 as &char + 16) as &i64);
                            *((a0 + 8) as &i64) = v14;
                            *((a0 + 16) as &i64) = v12;
                            *((a0 + 24) as &i64) = v15;
                        },
                    }
                }
            },
            Err(_) => {
                v0 = uu_sort::KeyPosition::new::{{closure}}(v8, v10, *((&v1 as &char + 1) as &i8) as u8 as u64);
                v12 = *((&v0 as &char + 16) as &i64);
LABEL_520e57:
                *((a0 + 8) as &i128) = v11;
                *((a0 + 24) as &i64) = v12;
            },
        }
        return struct8 {
            field_0: 1
        };
    }
}
