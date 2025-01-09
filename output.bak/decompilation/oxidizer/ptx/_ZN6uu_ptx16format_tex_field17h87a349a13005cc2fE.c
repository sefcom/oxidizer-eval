fn uu_ptx::format_tex_field(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0x38], Other Possible Types: i192
    let v1: struct24;  // [sp-0x20]

    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, a2 + a1);
    v1 = alloc::str::join_generic_copy(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), 1, 0);
    return v1;
}
