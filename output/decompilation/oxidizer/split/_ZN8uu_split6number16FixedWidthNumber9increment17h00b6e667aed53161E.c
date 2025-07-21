fn uu_split::number::FixedWidthNumber::increment(a0: i64) -> long long {
    let v0: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x30]
    let v1: void*;  // [bp-0x28]
    let v3: void*;  // r14
    let v4: u8;  // bpl
    let v5: i64;  // rax
    let v6: i64;  // rax
    let v7: u64;  // rsi
    let v8: i64;  // rax
    let v10: u64;  // rdx

    v3 = *((a0 + 8) as &i64);
    if *((a0 + 16) as &i64) {
        v4 = *((a0 + 24) as &i8);
        v5 = *((a0 + 16) as &i64);
        v6 = v5;
        do {
            v8 = <usize as core::iter::range::Step>::backward_unchecked(v6, v7);
        } while ((*((v3 as &u8 + v8) as &i8) = *((v3 as &u8 + v8) as &i8) + 1, *((v3 as &u8 + v8) as &i8) + 1 == v4 && (*((v3 as &u8 + v8) as &i8) = 0, v6 = v8, v6)));
    }
    v0 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v5 as u8, v10);
    return alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v3, v5, v1, v0.len) as i32;
}
