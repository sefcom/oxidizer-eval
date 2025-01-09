fn uu_shuf::parse_head_count(a0: &Result<struct24, struct8>, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x108]
    let v1: i64;  // [sp-0xf8]
    let v2: i192;  // [sp-0xf0], Other Possible Types: Option<struct24>
    let v3: Result<struct8, struct1>;  // [sp-0xd8], Other Possible Types: i64
    let v4: i8;  // [bp-0xd0]
    let v5: i64;  // [sp-0xc8]
    let v6: i64;  // [sp-0xc0]
    let v7: i256;  // [sp-0xb8], Other Possible Types: struct32
    let v10: i64;  // [sp-0x80]
    let v11: i64;  // [sp-0x78]
    let v12: i64;  // [sp-0x70]
    let v13: i64;  // [sp-0x68]
    let v14: i64;  // [sp-0x60]
    let v15: i64;  // [sp-0x50]
    let v16: i128;  // [sp-0x48]
    let v17: i8;  // [sp-0x38]
    let v19: i64;  // r14
    let v20: i256;  // ymm0
    let v21: i128;  // xmm0

    v7 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
    v19 = -1;
    if v2 == 0x8000000000000000 {
        return Err(struct8 {
            field_0: v19
        });
    }
    do {
        v1 = *((&v2 as &char + 16) as &i64);
        v21 = v2;
        v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21;
        v0 = v21;
        v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((&v0 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64)) as u64;
        if v3 {
            v15 = 0;
            v16 = *((&v0 as &char + 8) as &i128);
            v17 = 1;
            v5 = &v15;
            v6 = <os_display::Quoted as core::fmt::Display>::fmt;
            v10 = "invalid line count: ";
            v11 = 1;
            v14 = 0;
            v12 = &v5;
            v13 = 1;
            core::option::Option<T>::map_or_else();
            return Ok(struct24 {
                field_0: v8
                field_16: v9
            });
        }
        v19 = core::cmp::min_by(v19, v4);
        v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
    } while (v2 != 0x8000000000000000);
}
