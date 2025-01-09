fn uu_sort::KeyPosition::new(a0: &struct32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [bp-0xa8], Other Possible Types: struct16
    let v2: Result<struct24, struct8>;  // [sp-0x90], Other Possible Types: i64
    let v3: i8;  // [bp-0x88]
    let v4: struct16;  // [bp-0x78]
    let v5: struct41;  // [sp-0x68]
    let v6: i16;  // [sp-0x38]
    let v8: i64;  // rax
    let v9: i64;  // r15
    let v11: i64;  // rdx

    v5 = <char as core::str::pattern::Pattern>::into_searcher(0x2e, a1, a2);
    v4 = struct16 {
        field_0: 0
        field_8: a2
    };
    v6 = 1;
    v8 = core::str::iter::SplitInternal<P>::next(&v4);
    if !v8 {
        uu_sort::KeyPosition::new::{{closure}}(&v0, a1, a2);
    } else {
        v9 = v8;
        v2 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v9, v11) as u64;
        if v2 {
            uu_sort::KeyPosition::new::{{closure}}(&v0, v9, v11, *((&v2 as &char + 1) as &i8));
        } else if !v3 {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, "field index can not be 0");
            return struct8 {
                field_0: 1
            };
        } else {
            v0 = struct16 {
                field_0: 0x8000000000000000
                field_8: a3
            };
            v2 = core::option::Option<T>::map_or(core::str::iter::SplitInternal<P>::next(&v4), v11, &v0);
            match v2 {
                Err(_) => {
                    return struct25 {
                        field_0: 0
                        field_8: v14
                        field_16: v13
                        field_24: v13 as i8
                    };
                },
                Ok(_) => {
                    return struct32 {
                        field_0: 1
                        field_8: v15
                        field_16: v13
                        field_24: v16
                    };
                },
            }
        }
    }
    return struct32 {
        field_0: 1
        field_8: v12
        field_24: v13
    };
}
