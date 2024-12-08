fn uu_ls::dired::is_dired_arg_present() -> u64 {
    let v0: struct24;  // [sp-0x50]
    let v1: struct16;  // [sp-0x38]
    let v2: Arguments;  // [sp-0x28], Other Possible Types: i320

    v2 = std::env::args();
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v2);
    v1 = struct16 {
        field_0: *((&v0 as &char + 8) as &i64)
        field_8: v1 + *((&v0 as &char + 16) as &i64) * 24
    };
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v1) as i32;
}
