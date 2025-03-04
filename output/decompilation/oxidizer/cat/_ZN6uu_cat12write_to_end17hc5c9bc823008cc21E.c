fn uu_cat::write_to_end(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v3: u64;  // rbx
    let v4: u32;  // rdx

    v3 = a1;
    v0 = a0;
    v1 = a0 + a1;
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position() {
        core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, a0, a1), "src/uu/cat/src/cat.rs");
        return v3;
    }
    core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v4, a0, a1, "src/uu/cat/src/cat.rs"), a2), "src/uu/cat/src/cat.rs");
    v3 = v4;
    return v3;
}
