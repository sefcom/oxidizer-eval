fn uu_cat::write_to_end(a0: u64, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v3: u64;  // r15
    let v4: u64;  // rdx

    v3 = a0;
    v0 = a0;
    v1 = a0 + a1;
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position() {
        core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, v3, a1), "src/uu/cat/src/cat.rs");
        return a1;
    }
    core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, v3, a1, "src/uu/cat/src/cat.rs"), v4), "src/uu/cat/src/cat.rs");
    return a1;
}
