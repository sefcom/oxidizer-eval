fn uu_df::mount_info_lt(a0: i64, a1: i64) -> long long {
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x38], Other Possible Types: u64
    let v1: struct16;  // [bp-0x34]
    let v3: u64;  // rax
    let v4: u64;  // rdx
    let v5: u64;  // rcx
    let v6: u64;  // rbp
    let v7: u64;  // r13
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: &mut [u8];  // rax:rdx
    let v11: &mut [u8];  // rax:rdx

    v0 = v3;
    v0 = 0;
    v10 = core::char::methods::encode_utf8_raw(&v0 as u32, a1, v4);
    if core::slice::<impl [T]>::starts_with(*((a0 + 32) as &i64), *((a0 + 40) as &i64), v10.data_ptr, v5) {
        v1 = 0;
        v11 = core::char::methods::encode_utf8_raw(&v1 as u32, a1, v4);
        if !core::slice::<impl [T]>::starts_with(*((a1 + 32) as &i64), *((a1 + 40) as &i64), v11.data_ptr, v5) {
            return 0;
        }
    }
    v6 = *((a0 + 112) as &i64);
    v7 = *((a1 + 112) as &i64);
    if *((a0 + 88) as &i64) && *((a1 + 88) as &i64) {
        if (*((a0 + 88) as &i64) <= *((a1 + 88) as &i64) ^ 1 | v7 <= v6) != 1 {
            return 0;
        }
    } else {
        if v6 < v7 {
            return 0;
        }
    }
    v8 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(*((a0 + 32) as &i64), *((a0 + 40) as &i64), *((a1 + 32) as &i64), *((a1 + 40) as &i64));
    if v8 {
        return v8 & -0x100 | 1;
    }
    v9 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(*((a0 + 104) as &i64), v6, *((a1 + 104) as &i64), v7);
    return v9 & -0x100 | v9 ^ 1;
}
