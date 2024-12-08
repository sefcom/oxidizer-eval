fn uu_cat::write_tab_to_end(a0: &u8, a1: u64, a2: u64) -> u64 {
    let v0: void*;  // [sp-0x48]
    let v1: &u8;  // [sp-0x40]
    let v2: u64;  // [sp-0x38]
    let v6: u64;  // rbx
    let v8: &u8;  // r12
    let v9: &u8;  // r15
    let v10: &u8;  // rdx
    let v11: &u8;  // r12
    let v12: &u8;  // rbp
    let v13: u64;  // rbx

    v1 = a0;
    v2 = &a0[a1];
    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position() {
        v0 = 0;
        do {
            v6 = a1;
            v8 = v11;
            v9 = a0;
            core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v8, v9, v6, "src/uu/cat/src/cat.rs"), v10), "src/uu/cat/src/cat.rs");
            if *((v9 + v8) as &i8) != 9 {
                v13 = v0 + v8;
                return v13;
            }
            core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, "^I"), "src/uu/cat/src/cat.rs");
            v12 = v9 + v8 + 1;
            v0 = v0 + v8 + 1;
            v13 = -1 + v6 - v8;
            v1 = v12;
            v2 = &v9[v6];
        } while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position());
    }
    core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, v12, v13), "src/uu/cat/src/cat.rs");
    return v13;
}
