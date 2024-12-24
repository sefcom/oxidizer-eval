fn uu_truncate::truncate_reference_and_size(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i256;  // [sp-0x158], Other Possible Types: Result<struct32, struct32>
    let v1: i64;  // [sp-0x138]
    let v2: i64;  // [sp-0x130]
    let v3: i256;  // [bp-0x128]
    let v4: i192;  // [sp-0x100], Other Possible Types: struct24
    let v5: i64;  // [sp-0xe8], Other Possible Types: struct24, Result<struct176, struct16>
    let v6: i64;  // [sp-0xe0]
    let v7: i64;  // [sp-0xd8]
    let v8: i32;  // [bp-0xd0]
    let v9: i64;  // [sp-0xc8]
    let v10: i64;  // [bp+0x8]
    let v11: i64;  // r13
    let v13: i64;  // rsi
    let v14: i64;  // rdx
    let v15: i64;  // rax
    let v18: struct8;  // rax

    v0 = uu_truncate::parse_mode_and_size(a2, a3);
    if v0 != 3 {
        v3 = v0;
        v1 = &v3;
        v2 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
        v5 = "Invalid number: ";
        v6 = 1;
        v9 = 0;
        v7 = &v1;
        v8 = 1;
        v4 = core::option::Option<T>::map_or_else(&v5);
        v8 = 1;
        v5 = v4;
        v7 = *((&v4 as &char + 16) as &i64);
        v15 = alloc::boxed::Box<T>::new(&v5);
        return v15;
    }
    v11 = *((&v0 as &char + 8) as &i64);
    if !v11 {
        v13 = &g_41cd1b;
        v14 = 55;
    } else if !(v11 == 5) && !(v11 == 6) || !(!*((&v0 as &char + 16) as &i64)) {
        v5 = std::fs::metadata(a0, a1);
        match v5 {
            Err(_) => {
                v15 = uu_truncate::truncate_reference_and_size::{{closure}}(a0, a1, v6);
                return v15;
            },
            Ok(_) => {
                v5 = a4;
                v6 = a4 + a5 * 24;
                loop {
                    v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v18 {
                        return 0;
                    }
                    v15 = uu_truncate::file_truncate(*((v18 + 8) as &i64), *((v18 + 16) as &i64), v10 as u64 as u32 as u64, uu_truncate::TruncateMode::to_size(v11));
                    if v15 {
                        return v15;
                    }
                }
            },
        }
    } else {
        v13 = &g_413d90;
        v14 = 16;
    }
    v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(v13, v14);
    v8 = 1;
    v15 = alloc::boxed::Box<T>::new(&v5);
    return v15;
}
