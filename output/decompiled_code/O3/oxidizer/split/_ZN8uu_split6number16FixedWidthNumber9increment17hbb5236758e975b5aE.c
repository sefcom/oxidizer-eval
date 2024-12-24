fn uu_split::number::FixedWidthNumber::increment(a0: i64) -> u64 {
    let v0: i192;  // [sp-0x30], Other Possible Types: struct24
    let v2: i64;  // r14
    let v3: i64;  // rbx
    let v5: i64;  // rbx
    let v6: i64;  // rax

    v2 = *((a0 + 8) as &i64);
    v3 = *((a0 + 16) as &i64);
    if v3 {
        do {
            v6 = <usize as core::iter::range::Step>::backward_unchecked(v5);
        } while ((*((v2 + v6) as &i8) = *((v2 + v6) as &i8) + 1, *((v2 + v6) as &i8) + 1 == *((a0 + 24) as &i8) && (*((v2 + v6) as &i8) = 0, v6)));
    }
    v0 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v3);
    return alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v2, v3, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64)) as i32;
}
