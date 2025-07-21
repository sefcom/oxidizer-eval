fn uu_ls::dired::is_dired_arg_present() -> long long {
    let v0: struct24;  // [bp-0x50]
    let v1: u64;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: struct16;  // [bp-0x38]
    let v4: std::env::Args;  // [bp-0x28]

    v4 = std::env::args();
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v4);
    v3 = struct16 {
        field_0: v1
        field_8: v1 + v2 * 24
    };
    v3 = struct16 {
        field_0: v1
        field_8: v1 + v2 * 24
    };
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v3);
}
