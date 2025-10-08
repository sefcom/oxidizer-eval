fn starship::context::DirContents::has_any_positive_folder(a0: u64, a1: u64, a2: u64) -> char {
    let v0: struct16;  // [bp-0x10]

    v0 = struct16 {
        field_0: a1
        field_8: a2 * 16 + a1
    };
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0, a0);
}
