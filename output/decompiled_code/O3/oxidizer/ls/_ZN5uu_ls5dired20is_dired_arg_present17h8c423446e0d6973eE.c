fn uu_ls::dired::is_dired_arg_present() -> u64 {
    let v0: i192;  // [sp-0x50], Other Possible Types: struct24
    let v1: i128;  // [bp-0x38]
    let v2: i320;  // [sp-0x28], Other Possible Types: Arguments

    v2 = std::env::args();
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v2);
    v1 = *((&v0 as &char + 8) as &i128);
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v1) as i32;
}
