fn uu_cat::write_tab_to_end(a0: &u8, a1: u32, a2: u32) -> u64 {
    let v0: void*;  // [sp-0x48]
    let v1: &u8;  // [sp-0x40]
    let v2: u64;  // [sp-0x38]
    let v4: u64;  // rbx
    let v5: &u8;  // r15
    let v6: &u8;  // rdx
    let v7: &u8;  // r12
    let v8: &u8;  // rbp
    let v9: u64;  // rbx

    v4 = a1;
    v5 = a0;
    v1 = a0;
    v2 = &a0[a1];
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position() {
        v8 = a0;
    } else {
        v7 = v6;
        v0 = 0;
        do {
            v9 = v4;
            core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v7, v5, v9, "src/uu/cat/src/cat.rs"), a2), "src/uu/cat/src/cat.rs");
            if *((v5 + v7) as &i8) != 9 {
                v4 = v0 + v7;
                return v4;
            }
            core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, "^I"), "src/uu/cat/src/cat.rs");
            v8 = v5 + v7 + 1;
            v0 = v0 + v7 + 1;
            v4 = -1 + v9 - v7;
            v1 = v8;
            v2 = &v5[v9];
            v7 = v6;
            v5 = v8;
        } while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position());
    }
    core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, v8, v4), "src/uu/cat/src/cat.rs");
    return v4;
}
