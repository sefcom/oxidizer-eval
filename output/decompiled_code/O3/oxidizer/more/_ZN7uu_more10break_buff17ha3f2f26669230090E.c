fn uu_more::break_buff(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> int {
    let v0: i128;  // [sp-0xa8], Other Possible Types: struct16
    let v1: i64;  // [sp-0xa0]
    let v2: i64;  // [sp-0x98]
    let v3: i64;  // [sp-0x90], Other Possible Types: Result<struct16, struct8>
    let v4: i64;  // [sp-0x88]
    let v5: struct41;  // [sp-0x80], Other Possible Types: i328
    let v6: i16;  // [sp-0x50]
    let v7: i192;  // [bp-0x48], Other Possible Types: struct24
    let v9: i64;  // rsi
    let v10: i64;  // rdx
    let v11: struct8;  // rax
    let v12: i64;  // r8
    let v13: i64;  // r9
    let v14: i128;  // xmm0

    v5 = <char as core::str::pattern::Pattern>::into_searcher(a1, a2);
    v3 = 0;
    v4 = a2;
    v6 = 0;
    v3 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(core::iter::traits::iterator::Iterator::fold(&v3, v9, v10), 0);
    v0 = v4;
    v1 = v5;
    v2 = 0;
    v5 = <char as core::str::pattern::Pattern>::into_searcher(a1, a2);
    v3 = 0;
    v4 = a2;
    v6 = 0;
    loop {
        v11 = core::str::iter::SplitInternal<P>::next_inclusive();
        if !v11 {
            break;
        }
        v7 = uu_more::break_line(core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v7, v11, v10), v10, a3, v12, v13);
        v0 = alloc::vec::Vec<T,A>::append_elements(*((&v7 as &char + 8) as &i64), v7.field_16);
        v7.field_16 = 0;
    }
    v14 = v0;
    return struct24 {
        field_0: v14
        field_16: v2
    };
}
