fn uu_split::number::FixedWidthNumber::increment(a0: void*) -> u64 {
    let v0: struct24;  // [sp-0x30]
    let v2: i64;  // r14
    let v4: i64;  // rax
    let v6: i64;  // rax
    let v7: i64;  // rax
    let v8: i64;  // rax

    v2 = *((a0 + 8) as &i64);
    if v4 {
        v6 = *((a0 + 16) as &i64);
        v7 = v6;
        do {
            v8 = <usize as core::iter::range::Step>::backward_unchecked(v7);
        } while ((*((v2 + v8) as &i8) = *((v2 + v8) as &i8) + 1, *((v2 + v8) as &i8) + 1 == *((a0 + 24) as &i8) && (*((v2 + v8) as &i8) = 0, v7 = v8, v8)));
    }
    v0 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v6);
    return alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v2, v6, v0.field_8, v0.field_16) as i32;
}
