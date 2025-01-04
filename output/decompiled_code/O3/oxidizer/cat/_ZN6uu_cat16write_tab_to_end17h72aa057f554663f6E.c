fn uu_cat::write_tab_to_end(a0: &u8, a1: u64, a2: &&struct_0) -> u64 {
    let v0: void*;  // [sp-0x48]
    let v1: &u8;  // [sp-0x40]
    let v2: u64;  // [sp-0x38]
    let v4: u64;  // rbx
    let v5: &u8;  // r15
    let v6: u64;  // rbx
    let v8: &u8;  // r12
    let v9: &u8;  // r15
    let v10: &u8;  // rdx
    let v11: &u8;  // r12

    v4 = a1;
    v5 = a0;
    v1 = a0;
    v2 = &a0[a1];
    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position() {
        v0 = 0;
        do {
            v6 = v4;
            v8 = v11;
            v9 = v5;
            core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v8, v9, v6, "src/uu/cat/src/cat.rs"), v10), "src/uu/cat/src/cat.rs");
            if *((v9 + v8) as &i8) != 9 {
                v4 = v0 + v8;
                return v4;
            }
            core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, "^I"), "src/uu/cat/src/cat.rs");
            v5 = v9 + v8 + 1;
            v0 = v0 + v8 + 1;
            v4 = -1 + v6 - v8;
            v1 = v5;
            v2 = &v9[v6];
            v5 = v5;
            v11 = v10;
            v4 = v4;
        } while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position());
    }
    core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, v5, v4), "src/uu/cat/src/cat.rs");
    return v4;
}
