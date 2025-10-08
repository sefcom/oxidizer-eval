fn uu_cat::write_tab_to_end(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct16;  // [bp-0x40]
    let v2: core::result::Result<(), std::io::error::Error>;  // rbx
    let v3: u64;  // r13
    let v4: void*;  // r14
    let v5: u64;  // rdx
    let v7: u64;  // rbx
    let v8: u64;  // r12
    let v9: u64;  // rbp
    let v12: core::result::Result<(), std::io::error::Error>;  // rax

    v2 = a1;
    v3 = a0;
    v0 = struct16 {
        field_0: a0
        field_8: a0 + a1
    };
    if (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v0) & 1) {
        do {
            v7 = v2;
            v8 = v5;
            v9 = v3;
            core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v8, v9, v7, "src/uu/cat/src/cat.rs"), a2), "src/uu/cat/src/cat.rs");
            if v9 + v8 != "\t" {
                return v4 + v8;
            }
            core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, "^I"), "src/uu/cat/src/cat.rs");
            v4 = v4 + v8 + 1;
            v2 = v7 - (v8 + 1);
            v0 = struct16 {
                field_0: v8 + v9 + 1
                field_8: v9 + v7
            };
        } while ((<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v0) & 1));
    }
    v12 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v3, v2);
    core::result::Result<T,E>::unwrap(v12, "src/uu/cat/src/cat.rs");
    return v4 + v2;
}
