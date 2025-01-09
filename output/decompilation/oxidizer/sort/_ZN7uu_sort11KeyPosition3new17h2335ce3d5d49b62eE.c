fn uu_sort::KeyPosition::new(a0: &struct32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [bp-0xa8], Other Possible Types: struct16
    let v2: Result<struct24, struct8>;  // [sp-0x90], Other Possible Types: i72
    let v3: struct16;  // [bp-0x78]
    let v4: struct41;  // [sp-0x68]
    let v5: i16;  // [sp-0x38]
    let v7: i64;  // rax
    let v8: i64;  // r15
    let v10: i64;  // rdx
    let v12: i64;  // rax
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
        uu_sort::KeyPosition::new::{{closure}}(&v0, a1, a2);
    } else {
        v8 = v7;
        v2 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v8, v10);
        if v2 {
            uu_sort::KeyPosition::new::{{closure}}(&v0, v8, v10, *((&v2 as &char + 1) as &i8));
        } else if !v2 {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, "field index can not be 0");
        } else {
            v0 = struct16 {
                field_0: 0x8000000000000000
                field_8: a3
            };
            v2 = core::option::Option<T>::map_or(core::str::iter::SplitInternal<P>::next(&v3), v10, &v0);
            v14 = v2;
            v12 = *((&v2 as &char + 8) as &i64);
            match v2 {
                Err(_) => {
                    return struct25 {
                        field_0: 0
                        field_8: v13
                        field_16: v12
                        field_24: v12 as i8
                    };
                },
                Ok(_) => {
                    v15 = *((&v2 as &char + 16) as &i64);
                    *((a0 + 8) as &i64) = v14;
                    *((a0 + 16) as &i64) = v12;
                    *((a0 + 24) as &i64) = v15;
                },
            }
        }
    }
    return struct32 {
        field_0: 1
        field_8: v11
        field_24: v12
    };
}
