fn uu_more::break_buff(a1: i8, a2: i64, a3: i64) -> : struct24 {
    let a0: u8;  // sil
    let v0: u64;  // [bp-0xa8]
    let v1: u64;  // [bp-0xa0]
    let v2: void*;  // [bp-0x98]
    let v3: void*;  // [bp-0x90], Other Possible Types: struct16
    let v4: struct24;  // [bp-0x90]
    let v5: u64;  // [bp-0x88]
    let v6: core::str::pattern::CharSearcher;  // [bp-0x80]
    let v7: u16;  // [bp-0x50]
    let v8: struct24;  // [bp-0x48], Other Possible Types: u64
    let v9: u64;  // [bp-0x40]
    let v10: void*;  // [bp-0x38]
    let v13: core::option::Option<&str>;  // rax
    let v15: i64;  // rdi

    v6 = <char as core::str::pattern::Pattern>::into_searcher(a0, a1, a2);
    v3 = struct16 {
        field_0: 0
        field_8: a1 as u64
    };
    v7 = 0;
    v4 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(core::iter::traits::iterator::Iterator::fold(&v3), 0);
    v0 = v5;
    v1 = v4.field_16;
    v2 = 0;
    v6 = <char as core::str::pattern::Pattern>::into_searcher(a0, v5, a2);
    v3 = 0;
    v7 = 0;
    loop {
        v13 = core::str::iter::SplitInternal<P>::next_inclusive(&v3) as u64;
        if let None = v13 {
            break;
        }
        v8 = uu_more::break_line(core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v8, v13, a1), a1, a2);
        alloc::vec::Vec<T,A>::append_elements(&v0, v9, v10);
    }
    *((v15 + 16) as &i64) = 0;
    *(v15 as &i128) = *(&v0 as &i128);
    return;
}
