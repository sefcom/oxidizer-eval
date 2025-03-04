fn uu_shuf::parse_head_count(a0: &struct16, a1: u32) -> u64 {
    let v0: iNone;  // [sp-0x108]
    let v1: i64;  // [sp-0xf8]
    let v2: Option<struct24>;  // [sp-0xf0], Other Possible Types: int
    let v3: Result<struct8, struct1>;  // [sp-0xd8]
    let v4: i64;  // [sp-0xc8]
    let v5: i64;  // [sp-0xc0]
    let v6: struct32;  // [sp-0xb8]
    let v7: struct24;  // [sp-0x98]
    let v8: i64;  // [sp-0x80]
    let v9: i64;  // [sp-0x78]
    let v10: i64;  // [sp-0x70]
    let v11: i64;  // [sp-0x68]
    let v12: i64;  // [sp-0x60]
    let v13: i64;  // [sp-0x50]
    let v14: iNone;  // [sp-0x48]
    let v15: i8;  // [sp-0x38]
    let v17: i64;  // r14
    let v18: iNone;  // ymm0
    let v19: iNone;  // xmm0
    let v20: i64;  // rbx

    v6 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v6);
    v17 = -1;
    match v2 {
        None => {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v22
            };
        },
        Some(_) => {
            do {
                v1 = (&v2)[16] as i64;
                v19 = v2 as i128;
                v18 = v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19 as u256;
                v0 = v19;
                v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str((&v0)[8] as i64, (&v2)[16] as i64);
                match v3 {
                    Err(_) => {
                        v13 = 0;
                        v14 = (&v0)[8] as i128;
                        v15 = 1;
                        v4 = &v13;
                        v5 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v8 = "invalid line count: ";
                        v9 = 1;
                        v12 = 0;
                        v10 = &v4;
                        v11 = 1;
                        v7 = core::option::Option<T>::map_or_else(&v8);
                    },
                    Ok(_) => {
                        v17 = core::cmp::min_by(v17, v20);
                        v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v6);
                    },
                }
            } while (v2 as i64 != 0x8000000000000000);
        },
    }
}
