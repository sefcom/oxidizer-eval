fn uu_truncate::truncate_reference_and_size(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: Result<struct32, struct32>;  // [sp-0x158], Other Possible Types: i256
    let v1: i128;  // [sp-0x128]
    let v2: i128;  // [sp-0x118]
    let v3: i192;  // [sp-0x100]
    let v4: i192;  // [bp-0xe8], Other Possible Types: Result<struct176, struct16>, struct24
    let v5: i64;  // [sp-0xe0]
    let v6: i64;  // [sp-0xd8]
    let v7: i32;  // [bp-0xd0]
    let v8: i64;  // [bp+0x8]
    let v9: i64;  // r13
    let v11: i64;  // rsi
    let v12: i64;  // rdx
    let v13: i64;  // rax
    let v16: struct8;  // rax

    v0 = uu_truncate::parse_mode_and_size(a2, a3);
    if v0 != 3 {
        v2 = *((&v0 as &char + 16) as &i128);
        v1 = v0;
        v3 = format!("Invalid number: {:?}", &v1);
        v7 = 1;
        v4 = v3;
        v6 = *((&v3 as &char + 16) as &i64);
        v13 = alloc::boxed::Box<T>::new(&v4);
        return v13;
    }
    v9 = *((&v0 as &char + 8) as &i64);
    if !v9 {
        v11 = &g_41cd1b;
        v12 = 55;
    } else if !(v9 == 5) && !(v9 == 6) || !(!*((&v0 as &char + 16) as &i64)) {
        v4 = std::fs::metadata(a0, a1);
        match v4 {
            Err(_) => {
                v13 = uu_truncate::truncate_reference_and_size::{{closure}}(a0, a1, v5);
                return v13;
            },
            Ok(_) => {
                v4 = a4;
                v5 = a4 + a5 * 24;
                loop {
                    v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v16 {
                        return 0;
                    }
                    v13 = uu_truncate::file_truncate(*((v16 + 8) as &i64), *((v16 + 16) as &i64), v8 as u64 as u32 as u64, uu_truncate::TruncateMode::to_size(v9));
                    if v13 {
                        return v13;
                    }
                }
            },
        }
    } else {
        v11 = &g_413d90;
        v12 = 16;
    }
    v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(v11, v12);
    v7 = 1;
    v13 = alloc::boxed::Box<T>::new(&v4);
    return v13;
}
