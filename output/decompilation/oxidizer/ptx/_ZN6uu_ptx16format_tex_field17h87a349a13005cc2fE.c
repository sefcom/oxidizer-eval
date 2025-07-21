fn uu_ptx::format_tex_field(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x38]
    let v1: u64;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]
    let v3: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x20]

    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, a2 + a1);
    v3 = alloc::str::join_generic_copy(v1, v2, 1, 0);
    return struct24 {
        field_0: *(&v3.buf.cap as &i128)
        field_16: v3.len
    };
}
