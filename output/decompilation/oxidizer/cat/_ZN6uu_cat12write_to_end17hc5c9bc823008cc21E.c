fn uu_cat::write_to_end(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: struct16;  // [bp-0x28]
    let v3: u32;  // rdx

    v0 = struct16 {
        field_0: a0
        field_8: a0 + a1
    };
    v0 = struct16 {
        field_0: a0
        field_8: a0 + a1
    };
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v0) {
        core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, a0, a1), "src/uu/cat/src/cat.rs");
        return a1;
    }
    core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v3, a0, a1, "src/uu/cat/src/cat.rs"), a2), "src/uu/cat/src/cat.rs");
    return v3;
}
