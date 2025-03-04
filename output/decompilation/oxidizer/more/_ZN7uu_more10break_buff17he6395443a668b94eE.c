fn uu_more::break_buff(a0: &struct24, a1: u64, a2: u64, a3: u64) -> int {
    let v0: i64;  // [sp-0xa8], Other Possible Types: int, struct16
    let v1: i64;  // [sp-0x98]
    let v2: i64;  // [sp-0x90], Other Possible Types: Result<struct16, struct8>
    let v3: i64;  // [sp-0x88]
    let v4: struct41;  // [sp-0x80]
    let v5: i16;  // [sp-0x50]
    let v6: struct24;  // [bp-0x48], Other Possible Types: char
    let v7: i64;  // [sp-0x38]
    let v9: struct8;  // rax
    let v10: iNone;  // xmm0

    v4 = <char as core::str::pattern::Pattern>::into_searcher(a1, a2);
    v2 = 0;
    v3 = a2;
    v5 = 0;
    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(core::iter::traits::iterator::Iterator::fold(&v2), 0);
    v0 = v3;
    v0 = *((&v2 as &char + 16) as &i64);
    v1 = 0;
    v4 = <char as core::str::pattern::Pattern>::into_searcher(a1, a2);
    v2 = 0;
    v3 = a2;
    v5 = 0;
    loop {
        v7 = v7;
        v9 = core::str::iter::SplitInternal<P>::next_inclusive();
        if !v9 {
            break;
        }
        v6 = uu_more::break_line(core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v6, v9, a2), a2, a3);
        v0 = alloc::vec::Vec<T,A>::append_elements(*((&v6.field_0 as &char + 8) as &i64), v7);
        v7 = v7;
    }
    v10 = v0 as i128;
    return struct24 {
        field_0: v10
        field_16: v1
    };
}
