fn uu_tac::buffer_tac_regex(a0: u32, a1: u32, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: struct33;  // [sp-0x90]
    let v1: i64;  // [sp-0x80]
    let v2: i64;  // [sp-0x58]
    let v3: Option<struct32>;  // [sp-0x50]
    let v5: i64;  // r13
    let v6: i64;  // r15
    let v7: i64;  // rbp
    let v8: i64;  // rbp
    let v9: i64;  // r15
    let v10: i64;  // rbx
    let v11: i64;  // rax
    let v12: i64;  // r15
    let v13: i64;  // r14
    let v14: i64;  // rdx
    let v15: i64;  // rax
    let v16: i64;  // r15
    let v17: i64;  // rax
    let v18: i64;  // r14

    v2 = std::io::stdio::stdout();
    v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v2));
    if !a1 {
        v5 = 0;
    } else if a4 {
        v6 = a1;
        v5 = a1;
        v7 = a1;
        do {
            v7 = <usize as core::iter::range::Step>::backward_unchecked(v7);
            v3 = regex::regex::bytes::Regex::find_at(a2, a3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v6, a0, a1, "src/uu/tac/src/tac.rs"), v14, v7);
            if v3 as i64 {
                v11 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v7, v5, a0, a1, "src/uu/tac/src/tac.rs");
                v12 = v1;
                if v14 < v0.field_0 - v12 {
                    memcpy(v0.field_8 + v12, v11, a2);
                    v1 = v14 + v12;
                    v5 = v7;
                    v6 = v7;
                } else {
                    v13 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v0, v11, a2);
                    v5 = v7;
                    v6 = v7;
                    if v13 {
                        return v13;
                    }
                }
            }
        } while (v7);
    } else {
        v8 = a1;
        v9 = a1;
        v10 = a1;
        do {
            v10 = <usize as core::iter::range::Step>::backward_unchecked(v10);
            v3 = regex::regex::bytes::Regex::find_at(a2, a3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v8, a0, a1, "src/uu/tac/src/tac.rs"), v14, v10);
            match v3 {
                None => {
                    v5 = v9;
                },
                Some(_) => {
                    v5 = *((&v3 as &char + 24) as &i64) - *((&v3 as &char + 16) as &i64) + v10;
                    v15 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v5, v9, a0, a1, "src/uu/tac/src/tac.rs");
                    v16 = v1;
                    if v14 < v0.field_0 - v16 {
                        memcpy(v0.field_8 + v16, v15, a2);
                        v1 = v14 + v16;
                        v8 = v10;
                    } else {
                        v13 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v0, v15, a2);
                        v8 = v10;
                        if v13 {
                            return v13;
                        }
                    }
                },
            }
        } while ((v9 = v5, v10));
    }
    v17 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v5, a0, a1, "src/uu/tac/src/tac.rs");
    v18 = v1;
    if v14 < v0.field_0 - v18 {
        memcpy(v0.field_8 + v18, v17, a2);
        v1 = v14 + v18;
    } else {
        v13 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v0, v17, a2);
        if v13 {
            return v13;
        }
    }
    return 0;
}
