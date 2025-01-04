fn uu_dircolors::generate_type_output(a0: i64, a1: i64) -> u64 {
    let v0: i192;  // [sp-0x38], Other Possible Types: struct24
    let v1: struct24;  // [sp-0x20], Other Possible Types: i192

    if *(a1 as &i8) != 2 {
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter("RESET", ".tar");
        v1 = alloc::str::join_generic_copy(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), ":");
    } else {
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter("RESET", ".tar");
        v1 = alloc::str::join_generic_copy(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), &g_42333b, 1);
    }
    *((a0 + 16) as &i64) = *((&v1 as &char + 16) as &i64);
    *(a0 as &i192) = v1;
    return a0;
}
