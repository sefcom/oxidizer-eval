fn uu_sort::KeyPosition::new(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32) -> u64 {
    let v0: i8;  // [bp-0x11d]
    let v1: i64;  // [sp-0x118], Other Possible Types: Result<struct24, struct16>
    let v2: i64;  // [sp-0x110]
    let v3: i64;  // [sp-0x108]
    let v4: i8;  // [sp-0x100]
    let v5: Result<struct8, struct1>;  // [sp-0xf8], Other Possible Types: i64
    let v6: i8;  // [bp-0xf0]
    let v7: i192;  // [sp-0xe8], Other Possible Types: struct16, struct24
    let v8: i192;  // [sp-0x98]
    let v9: struct16;  // [bp-0x78]
    let v10: struct41;  // [sp-0x68]
    let v11: i16;  // [sp-0x38]
    let v13: i64;  // rax
    let v14: i64;  // r15
    let v16: i64;  // rdx
    let v17: i128;  // xmm0
    let v18: i64;  // r15
    let v19: i64;  // rax
    let v20: i64;  // rcx

    v10 = <char as core::str::pattern::Pattern>::into_searcher(46, a1, a2);
    v9 = struct16 {
        field_0: 0
        field_8: a2
    };
    v11 = 1;
    v13 = core::str::iter::SplitInternal<P>::next(&v9);
    if !v13 {
        v7 = uu_sort::KeyPosition::new::{{closure}}(a1, a2);
        v17 = v7;
        goto LABEL_51ff75;
    } else {
        v14 = v13;
        v5 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v14, v16);
        match v5 {
            Ok(_) => {
                v18 = v6;
                if !v18 {
                    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, "field index can not be 0");
                } else {
                    v7 = struct16 {
                        field_0: 0x8000000000000000
                        field_8: a3
                    };
                    v1 = core::option::Option<T>::map_or(core::str::iter::SplitInternal<P>::next(&v9), v16, &v7);
                    v20 = v1;
                    v19 = v2;
                    if v20 == 0x8000000000000000 {
                        v19 = a4 as u32 as u64;
                        return struct25 {
                            field_0: 0
                            field_8: v18
                            field_16: v19
                            field_24: v19 as i8
                        };
                    }
                    *((a0 + 8) as &i64) = v20;
                    *((a0 + 16) as &i64) = v19;
                    *((a0 + 24) as &i64) = v3;
                }
            },
            Err(v0) => {
                v1 = 0;
                v2 = v14;
                v3 = v16;
                v4 = 1;
                v8 = format!("failed to parse field index {:?}: {:?}", &v1, &v0);
                v19 = *((&v8 as &char + 16) as &i64);
LABEL_51ff75:
                *((a0 + 8) as &i128) = v17;
                *((a0 + 24) as &i64) = v19;
            },
        }
        return struct8 {
            field_0: 1
        };
    }
}
