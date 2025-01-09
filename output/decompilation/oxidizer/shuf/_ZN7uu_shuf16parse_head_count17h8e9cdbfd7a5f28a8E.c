fn uu_shuf::parse_head_count(a0: &struct16, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x108]
    let v1: i64;  // [sp-0xf8]
    let v2: Option<struct24>;  // [sp-0xf0], Other Possible Types: i192
    let v3: Result<struct8, struct1>;  // [sp-0xd8]
    let v4: i64;  // [sp-0xc8]
    let v5: i64;  // [sp-0xc0]
    let v6: i256;  // [sp-0xb8], Other Possible Types: struct32
    let v7: i64;  // [sp-0x80]
    let v8: i64;  // [sp-0x78]
    let v9: i64;  // [sp-0x70]
    let v10: i64;  // [sp-0x68]
    let v11: i64;  // [sp-0x60]
    let v12: i64;  // [sp-0x50]
    let v13: i128;  // [sp-0x48]
    let v14: i8;  // [sp-0x38]
    let v16: i64;  // r14
    let v17: i256;  // ymm0
    let v18: i128;  // xmm0
    let v19: i64;  // rbx
    let v20: i64;  // r14
    let v21: i64;  // 4096
    let v22: i64;  // rcx

    v6 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v6);
    v16 = -1;
    match v2 {
        Some(_) => {
            do {
                v1 = *((&v2 as &char + 16) as &i64);
                v18 = v2;
                v17 = v17 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18 as u128 as u256;
                v0 = v18;
                v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((&v0 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64));
                match v3 {
                    Err(_) => {
                        v12 = 0;
                        v13 = *((&v0 as &char + 8) as &i128);
                        v14 = 1;
                        v4 = &v12;
                        v5 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v7 = "invalid line count: ";
                        v8 = 1;
                        v11 = 0;
                        v9 = &v4;
                        v10 = 1;
                        core::option::Option<T>::map_or_else();
                        v21 = v22;
                        return v21;
                    },
                    Ok(_) => {
                        v16 = core::cmp::min_by(v16, v19);
                        v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v6);
                    },
                }
            } while (v2 != 0x8000000000000000);
        },
        None => {
            *((a0 + 8) as &i64) = v20;
            *(a0 as &i64) = 0x8000000000000000;
            v21 = a0;
        },
    }
    return v21;
}
