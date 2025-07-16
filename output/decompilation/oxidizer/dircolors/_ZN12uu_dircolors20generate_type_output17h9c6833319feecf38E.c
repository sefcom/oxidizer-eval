fn uu_dircolors::generate_type_output(a1: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x38]
    let v1: u64;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]
    let v3: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [sp-0x20], Other Possible Types: u192
    let v4: u128;  // [bp-0x20]

    if *(a1 as &i8) == 2 {
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter("RESET", ".tar");
        v3 = alloc::str::join_generic_copy(v1, v2, "\n");
    } else {
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter("RESET", ".tar");
        v3 = alloc::str::join_generic_copy(v1, v2, ":");
    }
    return struct24 {
        field_0: v4
        field_16: *((&v3 as &char + 16) as &i64)
    };
}
