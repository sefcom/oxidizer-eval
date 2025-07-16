fn uu_cat::write_tab_to_end(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: void*;  // [bp-0x48]
    let v1: u128;  // [bp-0x40]
    let v3: u64;  // rbx
    let v4: u64;  // rdx
    let v6: u64;  // rbx
    let v7: u64;  // r12
    let v8: u64;  // r15

    v3 = a1;
    v1 = struct16 {
        field_0: a0
        field_8: a0 + a1
    };
    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v1) {
        do {
            v6 = v3;
            v7 = v4;
            v8 = a0;
            core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v7, v8, v6, "src/uu/cat/src/cat.rs"), a2), "src/uu/cat/src/cat.rs");
            if v8 + v7 != "\t" {
                return v0 + v7;
            }
            core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, "^I"), "src/uu/cat/src/cat.rs");
            v0 = v0 + v7 + 1;
            v3 = v6 - (v7 + 1);
            v1 = struct16 {
                field_0: v8 + v7 + 1
                field_8: v8 + v6
            };
        } while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v1));
    }
    core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, a0, v3), "src/uu/cat/src/cat.rs");
    return v3;
}
