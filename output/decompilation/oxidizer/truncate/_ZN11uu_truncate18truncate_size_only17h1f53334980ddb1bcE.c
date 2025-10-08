fn uu_truncate::truncate_size_only(a0: u64, a1: u64, a2: i64, a3: u64, a4: u8) -> long long {
    let v0: core::fmt::rt::Argument;  // [bp-0x170]
    let v1: struct28;  // [bp-0x168], Other Possible Types: struct32
    let v2: u64;  // [bp-0x160]
    let v3: u64;  // [bp-0x158]
    let v4: void*;  // [bp-0x120]
    let v5: u64;  // [bp-0x118]
    let v6: u64;  // [bp-0x110]
    let v7: u8;  // [bp-0x108]
    let v8: alloc::string::String;  // [bp-0x100]
    let v9: u64;  // [bp-0xf0]
    let v10: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe8], Other Possible Types: struct24, struct32
    let v13: void*;  // r12
    let v14: i64;  // 4096
    let v15: u64;  // rdx
    let v16: i64;  // r14
    let v17: u64;  // rax
    let v18: u64;  // rax
    let v21: iNone;  // xmm0
    let v22: Result<struct4, struct8>;  // [bp-0xb0]

    v1 = uu_truncate::parse_mode_and_size(a0, a1);
    if v1.field_0 as i32 != 4 {
        v21 = *(&v1.field_0 as &i128);
        v10 = struct32 {
            field_0: v21
            field_16: *((&v1.field_8 as &char + 8) as &i128)
        };
        return uu_truncate::truncate_size_only::{{closure}}(&v10);
    }
    v0 = v3;
    if (v2 == 5 || v2 == 6) && !v0 {
        v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("division by zero");
        return alloc::boxed::Box<T>::new(&v10) as u64;
    }
    v13 = 0;
    v14 = a2;
    loop {
        v16 = v14;
        if a3 * 24 == v13 {
            return 0;
        }
        v10 = std::fs::metadata(v16, v15);
        if let Ok(_) = v10 {
            if (v22 as i32 as i16 & 0xf000) == 0x1000 {
                v4 = 0;
                v5 = *((8 + a2 + v13 as &u8) as &i64);
                v6 = *((16 + a2 + v13 as &u8) as &i64);
                v7 = 1;
                v8 = format!("cannot open {} for writing: No such device or address", &v4);
                v1 = struct28 {
                    field_0: *(&v8.vec.buf.inner.cap as &i128)
                    field_16: v9
                    field_24: 1
                };
                return alloc::boxed::Box<T>::new(&v1) as u64;
            }
        }
        v17 = uu_truncate::TruncateMode::to_size(v2) as u64;
        v18 = uu_truncate::file_truncate(*((v16 + 8) as &i64), *((v16 + 16) as &i64), a4, v17);
        v13 += 24;
        v14 = v16 + 24;
        if v18 {
            return v18;
        }
    }
}
