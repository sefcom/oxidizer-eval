fn uu_truncate::truncate_reference_and_size(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: Result<struct32, struct24>;  // [sp-0x158], Other Possible Types: i264
    let v1: i64;  // [sp-0x138]
    let v2: i64;  // [sp-0x130]
    let v3: i128;  // [sp-0x128]
    let v4: i128;  // [sp-0x118]
    let v7: i128;  // [sp-0xe8], Other Possible Types: struct28, struct16, struct24
    let v8: i64;  // [sp-0xe0]
    let v9: i64;  // [sp-0xd8]
    let v10: i32;  // [bp-0xd0]
    let v11: i64;  // [sp-0xc8]
    let v12: i64;  // [bp+0x8]
    let v13: i64;  // r13
    let v15: i64;  // rsi
    let v16: i64;  // rdx
    let v17: i64;  // rax
    let v20: struct8;  // rax

    v0 = uu_truncate::parse_mode_and_size(a2, a3);
    if v0 != 3 {
        v4 = *((&v0 as &char + 16) as &i128);
        v3 = v0;
        v1 = &v3;
        v2 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
        v7 = "Invalid number: ";
        v8 = 1;
        v11 = 0;
        v9 = &v1;
        v10 = 1;
        core::option::Option<T>::map_or_else();
        v7 = struct28 {
            field_0: v5
            field_16: v6
            field_24: 1
        };
        v17 = alloc::boxed::Box<T>::new(&v7);
        return v17;
    }
    v13 = *((&v0 as &char + 8) as &i64);
    if !v13 {
        v15 = &g_41cc9b;
        v16 = 55;
    } else if !(v13 == 5) && !(v13 == 6) || !(!*((&v0 as &char + 16) as &i64)) {
        v7 = std::fs::metadata(a0, a1);
        if v7 == 2 {
            v17 = uu_truncate::truncate_reference_and_size::{{closure}}(a0, a1, v8);
            return v17;
        }
        v7 = a4;
        v8 = a4 + a5 * 24;
        loop {
            v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v20 {
                return 0;
            }
            v17 = uu_truncate::file_truncate(*((v20 + 8) as &i64), *((v20 + 16) as &i64), v12, uu_truncate::TruncateMode::to_size(v13));
            if v17 {
                return v17;
            }
        }
    } else {
        v15 = &g_413bb0;
        v16 = 16;
    }
    v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(v15, v16);
    v10 = 1;
    v17 = alloc::boxed::Box<T>::new(&v7);
    return v17;
}
