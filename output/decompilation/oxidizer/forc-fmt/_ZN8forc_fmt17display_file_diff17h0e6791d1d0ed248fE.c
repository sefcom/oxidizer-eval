fn forc_fmt::display_file_diff(a0: i64, a1: i64, a2: i64, a3: i64) -> int {
    let v0: u64;  // [bp-0x1c8]
    let v1: Option<struct40>;  // [bp-0x110]
    let v2: struct32;  // [bp-0xa8]
    let v3: struct60;  // [bp-0x88]
    let v4: u64;  // [bp-0x20]
    let v5: u64;  // [bp-0x18]
    let v7: u64;  // r14
    let v8: u64;  // r13

    v5 = v7;
    v4 = v8;
    v3 = prettydiff::text::diff_lines(a0, a1, a2, a3);
    prettydiff::text::LineChangeset::diff(&v0, &v3);
    v2 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    v1 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v2);
    return;
}
