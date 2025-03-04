fn uu_truncate::truncate_reference_and_size(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: Result<struct32, struct24>;  // [sp-0x158]
    let v1: Result<struct32, struct24>;  // [sp-0x128]
    let v2: String;  // [sp-0x100]
    let v3: i64;  // [sp-0xe8], Other Possible Types: Result<struct176, struct8>, int, struct24
    let v4: i64;  // [sp-0xe0]
    let v5: i32;  // [bp-0xd0]
    let v6: i64;  // [bp+0x8]
    let v7: i64;  // r13
    let v9: i64;  // rsi
    let v10: i64;  // rdx
    let v11: i64;  // rax
    let v14: struct8;  // rax

    v0 = uu_truncate::parse_mode_and_size(a2, a3);
    if v0 as i32 != 3 {
        v1 = v0;
        v2 = format!("Invalid number: {}", &v1);
        v3 = *(&v2 as &i224);
        v11 = alloc::boxed::Box<T>::new(&v3);
        return v11;
    }
    v7 = *((&v0 as &char + 8) as &i64);
    if !v7 {
        v9 = &g_41cc9b;
        v10 = 55;
    } else if !(v7 as u32 == 5) && !(v7 as u32 == 6) || !(!*((&v0 as &char + 16) as &i64)) {
        v3 = std::fs::metadata(a0, a1);
        match v3 {
            Err(_) => {
                v11 = uu_truncate::truncate_reference_and_size::{{closure}}(a0, a1, v4);
                return v11;
            },
            Ok(_) => {
                v3 = a4;
                v4 = a4 + a5 * 24;
                loop {
                    v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v14 {
                        return 0;
                    }
                    v11 = uu_truncate::file_truncate(*((v14 + 8) as &i64), *((v14 + 16) as &i64), v6 as i8 as u8 as u32 as u64, uu_truncate::TruncateMode::to_size(v7));
                    if v11 {
                        return v11;
                    }
                }
            },
        }
    } else {
        v9 = &g_413bb0;
        v10 = 16;
    }
    v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(v9, v10);
    *(&v5 as &i32) = 1;
    v11 = alloc::boxed::Box<T>::new(&v3);
    return v11;
}
