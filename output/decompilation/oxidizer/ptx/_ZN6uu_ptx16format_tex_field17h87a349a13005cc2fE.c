fn uu_ptx::format_tex_field(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0x38]
    let v1: struct24;  // [sp-0x20]

    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, a2 + a1);
    v1 = alloc::str::join_generic_copy(v0.field_8, v0.field_16, 1, 0);
    return v1;
}
