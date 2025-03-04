fn uu_sort::KeyPosition::new(a0: &struct32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct24;  // [sp-0xa8], Other Possible Types: struct16
    let v1: Result<struct8, struct1>;  // [sp-0x90]
    let v2: struct16;  // [bp-0x78]
    let v3: struct41;  // [sp-0x68]
    let v4: i16;  // [sp-0x38]
    let v6: i64;  // rax
    let v7: i64;  // r15
    let v9: i64;  // rdx
    let v10: iNone;  // xmm0
    let v11: i64;  // rax
    let v13: i64;  // rcx
    let v14: i64;  // rdx

    v3 = <char as core::str::pattern::Pattern>::into_searcher(0x2e, a1, a2);
    v2 = struct16 {
        field_0: 0
        field_8: a2
    };
    v4 = 1;
    v6 = core::str::iter::SplitInternal<P>::next(&v2);
    if !v6 {
        v0 = uu_sort::KeyPosition::new::{{closure}}(a1, a2);
        v10 = v0.field_0;
        v11 = v0.field_16;
        goto LABEL_520e57;
    } else {
        v7 = v6;
        v1 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v7, v9);
        if v1 as i8 {
            v0 = uu_sort::KeyPosition::new::{{closure}}(v7, v9, *((&v1 as &char + 1) as &i8));
            v11 = v0.field_16;
LABEL_520e57:
            *((a0 + 8) as void*) = v10;
            *((a0 + 24) as &unsigned long) = v11;
        } else if !v1 as i64 {
            v11 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, "field index can not be 0");
        } else {
            v0 = struct16 {
                field_0: 0x8000000000000000
                field_8: a3
            };
            v1 = core::option::Option<T>::map_or(core::str::iter::SplitInternal<P>::next(&v2), v9, &v0);
            v13 = v1 as i64;
            v11 = *((&v1 as &char + 8) as &i64);
            match v1 {
                Err(_) => {
                    return struct25 {
                        field_0: 0
                        field_8: v12
                        field_16: v11
                        field_24: v11 as u8
                    };
                },
                Ok(_) => {
                    v14 = *((&v1 as &char + 16) as &i64);
                    *((a0 + 8) as &unsigned long) = v13;
                    *((a0 + 16) as &unsigned long) = v11;
                    *((a0 + 24) as &unsigned long) = v14;
                },
            }
        }
        return struct8 {
            field_0: 1
        };
    }
}
