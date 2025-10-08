fn uu_truncate::truncate_reference_and_size(a0: u64, a1: u64, a2: u64, a3: u64, a4: i64, a5: u64, a6: u8) -> long long {
    let v0: struct32;  // [bp-0x158]
    let v1: u64;  // [bp-0x150]
    let v2: iNone;  // [bp-0x148]
    let v3: u128;  // [bp-0x128]
    let v4: iNone;  // [bp-0x118]
    let v5: alloc::string::String;  // [bp-0x100]
    let v6: u64;  // [bp-0xf0]
    let v7: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe8], Other Possible Types: struct24, struct28
    let v8: u64;  // [bp-0xe0]
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u64;  // r12
    let v13: void*;  // rsi
    let v14: u64;  // rdx
    let v15: u64;  // r14

    v0 = uu_truncate::parse_mode_and_size(a2, a3);
    if v0.field_0 as i32 == 4 {
        if v1 && (v1 != 5 && v1 != 6 || *((&v0.field_8 as &char + 8) as &i64)) {
            v7 = std::fs::metadata(a0, a1);
            match v7 {
                Err(_) => {
                    v10 = uu_truncate::truncate_reference_and_size::{{closure}}(a0, a1, v8);
                },
                Ok(_) => {
                    v11 = uu_truncate::TruncateMode::to_size(v1) as u64;
                    do {
                        if !v12 {
                            return 0;
                        }
                        v10 = uu_truncate::file_truncate(*((a4 + 8) as &i64), *((a4 + 16) as &i64), a6, v11);
                        v12 -= 24;
                        a4 += 24;
                    } while (!v10);
                },
            }
            return v10;
        }
        v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v13, v14);
        v15 = alloc::boxed::Box<T>::new(&v7) as u64;
    } else {
        v4 = v2;
        v3 = *(&v0.field_0 as &i128);
        v5 = format!("Invalid number: {}", &v3);
        v7 = struct28 {
            field_0: *(&v5.vec.buf.inner.cap as &i128)
            field_16: v6
            field_24: 1
        };
        v15 = alloc::boxed::Box<T>::new(&v7) as u64;
    }
    return v15;
}
