fn uu_df::mount_info_lt(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x38]
    let v1: struct32;  // [bp-0x34]
    let v3: u64;  // rax
    let v4: u64;  // rdx
    let v5: u64;  // rbp
    let v6: u64;  // r13
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: &mut [u8];  // rax:rdx
    let v10: &mut [u8];  // rax:rdx

    v0 = v3;
    v0 = 0;
    v9 = core::char::methods::encode_utf8_raw(&v0 as u32, a1, v4);
    if !core::slice::<impl [T]>::starts_with(*((a0 + 32) as &i64), *((a0 + 40) as &i64), v9.data_ptr, 1) || !((v1 = 0, v10 = core::char::methods::encode_utf8_raw(&v1 as u32, a1, v4), !core::slice::<impl [T]>::starts_with(*((a1 + 32) as &i64), *((a1 + 40) as &i64), v10.data_ptr, 1) as u8)) {
        v5 = *((a0 + 112) as &i64);
        v6 = *((a1 + 112) as &i64);
        if *((a0 + 88) as &i64) && *((a1 + 88) as &i64) {
            if !(v5 < v6 && *((a0 + 88) as &i64) <= *((a1 + 88) as &i64)) {
                goto LABEL_4c689d;
            }
        } else {
            if v5 >= v6 {
LABEL_4c689d:
                v7 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(*((a0 + 32) as &i64), *((a0 + 40) as &i64), *((a1 + 32) as &i64), *((a1 + 40) as &i64));
                if v7 {
                    return v7 & -0x100 | 1;
                }
                v8 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(*((a0 + 104) as &i64), v5, *((a1 + 104) as &i64), v6);
                return v8 & -0x100 | v8 ^ 1;
            }
        }
    }
    return 0;
}
