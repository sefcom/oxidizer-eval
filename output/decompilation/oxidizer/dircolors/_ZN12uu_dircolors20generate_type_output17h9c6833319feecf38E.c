fn uu_dircolors::generate_type_output(a0: u32, a1: &u8) -> u64 {
    let v0: struct24;  // [sp-0x38], Other Possible Types: i192
    let v1: struct24;  // [sp-0x20]

    if *(a1 as &i8) != 2 {
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter("RESET", ".tar");
        v1 = alloc::str::join_generic_copy(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), ":");
        return a0;
    }
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter("RESET", ".tar");
    v1 = alloc::str::join_generic_copy(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), "\n");
    return a0;
}
