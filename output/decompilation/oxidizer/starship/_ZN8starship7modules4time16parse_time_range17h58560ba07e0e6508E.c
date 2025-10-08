fn starship::modules::time::parse_time_range(a0: i64, a1: i64, a2: i32) -> int {
    let v0: Result<struct8, struct1>;  // [bp-0xb8], Other Possible Types: u384
    let v1: Result<struct8, struct1>;  // [bp-0xb8]
    let v2: Option<struct32>;  // [bp-0xb8], Other Possible Types: core::str::pattern::CharSearcher
    let v3: struct20;  // [bp-0xb4]
    let v4: u64;  // [bp-0xb0]
    let v5: i64;  // [bp-0xa8]
    let v6: i64;  // [bp-0xa0]
    let v7: struct24;  // [bp-0x80]
    let v8: i64;  // [bp-0x78]
    let v9: u64;  // [bp-0x70]
    let v10: struct48;  // [bp-0x68]
    let v12: u64;  // rdx
    let v15: core::option::Option<&str>;  // rax
    let v16: &str;  // r14d
    let v17: &mut [u8];  // eax
    let v18: i32;  // edx
    let v19: i64;  // rcx

    v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
    v2 = <char as core::str::pattern::Pattern>::into_searcher(0x2d, v8, v9);
    v10 = v0;
    if core::iter::traits::iterator::Iterator::fold(&v10) != 1 {
        *(a0 as &i32) = 0;
        v17 = 0;
        v19 = 12;
    } else if (core::str::<impl str>::find(v8, v9, 45) & 1) {
        v2 = core::str::<impl str>::split_at_checked(v8, v9, v12);
        v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v5, v6) as u64;
        v0 = chrono::naive::time::NaiveTime::parse_from_str(v2 as i64, v4, "%H:%M:%S");
        v16 = *((&v0 as &char + 8) as &i32);
        v1 = chrono::naive::time::NaiveTime::parse_from_str(v15, v12, "%H:%M:%S");
        v17 = *((&v1 as &char + 8) as &i32);
        v18 = v1 as i8 ^ 1;
        *(a0 as &u32) = v1 as i8 ^ 1;
        *((a0 + 4) as &struct20) = v3;
        *((a0 + 8) as &&str) = v16;
        *((a0 + 12) as &unsigned int) = v18;
        *((a0 + 16) as &struct20) = v3;
        v19 = 20;
    } else {
        core::option::unwrap_failed(); /* do not return */
    }
    *((a0 + v19) as &&mut [u8]) = v17;
    return;
}
