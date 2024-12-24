fn uu_shuf::parse_head_count(a0: &u64, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x108]
    let v1: i64;  // [sp-0xf8]
    let v2: i192;  // [sp-0xf0], Other Possible Types: Option<struct24>
    let v3: i64;  // [sp-0xd8], Other Possible Types: Result<struct8, struct1>
    let v4: i8;  // [bp-0xd0]
    let v5: i64;  // [sp-0xc8]
    let v6: i64;  // [sp-0xc0]
    let v7: i256;  // [sp-0xb8], Other Possible Types: struct32
    let v8: i192;  // [sp-0x98], Other Possible Types: struct24
    let v9: i64;  // [sp-0x80]
    let v10: i64;  // [sp-0x78]
    let v11: i64;  // [sp-0x70]
    let v12: i64;  // [sp-0x68]
    let v13: i64;  // [sp-0x60]
    let v14: i64;  // [sp-0x50]
    let v15: i128;  // [sp-0x48]
    let v16: i8;  // [sp-0x38]
    let v18: i64;  // r14
    let v19: i256;  // ymm0
    let v20: i128;  // xmm0
    let v22: i64;  // rcx

    v7 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
    v18 = -1;
    if v2 != 0x8000000000000000 {
        do {
            v1 = *((&v2 as &char + 16) as &i64);
            v20 = v2;
            v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20;
            v0 = v20;
            v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((&v0 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64));
            if v3 {
                v14 = 0;
                v15 = *((&v0 as &char + 8) as &i128);
                v16 = 1;
                v5 = &v14;
                v6 = <os_display::Quoted as core::fmt::Display>::fmt;
                v9 = "invalid line count: ";
                v10 = 1;
                v13 = 0;
                v11 = &v5;
                v12 = 1;
                v8 = core::option::Option<T>::map_or_else(&v9);
                v22 = a0;
                *((v22 + 16) as &i64) = *((&v8 as &char + 16) as &i64);
                *(v22 as &i192) = v8;
                return v22;
            }
            v18 = core::cmp::min_by(v18, v4);
            v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
        } while (v2 != 0x8000000000000000);
    }
    v22 = a0;
    *((v22 + 8) as &i64) = v18;
    *(v22 as &i64) = 0x8000000000000000;
    return v22;
}
