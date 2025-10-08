fn starship::modules::directory::to_fish_style(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x98]
    let v1: u64;  // [bp-0x88]
    let v2: Option<struct40>;  // [bp-0x80]
    let v3: u8;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: u64;  // [bp-0x68]
    let v6: Result<struct24, struct24>;  // [bp-0x60]
    let v7: struct24;  // [bp-0x60]
    let v8: struct32;  // [bp-0x60]
    let v9: struct32;  // [bp-0x58]
    let v10: core::str::pattern::CharSearcher;  // [bp-0x50]
    let v11: struct25;  // [bp-0x40]
    let v12: struct24;  // [bp-0x20]
    let v14: struct16;  // rax
    let v15: u64;  // rdx

    v2 = a1;
    v14 = core::str::<impl str>::trim_end_matches(a2, a3, a4, a5);
    v10 = <char as core::str::pattern::Pattern>::into_searcher(0x2f, v14, v15);
    v8 = 0;
    v9 = v15;
    v12 = 1;
    core::iter::traits::iterator::Iterator::collect(&v0, &v8);
    if !v1 {
        v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v14, v15);
        return struct24 {
            field_0: *(&v7 as &i128)
            field_16: (&v7)[2].field_0
        };
    }
    v8 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    v11 = &v2;
    core::iter::traits::iterator::Iterator::collect(&v3, &v8);
    v6 = alloc::str::join_generic_copy(v4, v5, "/");
    return struct24 {
        field_0: v6 as i128
        field_16: *((&v6 as &char + 16) as &i64)
    };
}
