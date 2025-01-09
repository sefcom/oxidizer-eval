fn uu_tac::buffer_tac_regex(a0: u32, a1: u32, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: struct33;  // [sp-0x90], Other Possible Types: i264
    let v1: i64;  // [sp-0x80]
    let v2: i64;  // [sp-0x58]
    let v3: i256;  // [sp-0x50], Other Possible Types: Option<struct32>
    let v5: i64;  // r13
    let v6: i64;  // 4096
    let v7: i64;  // 4096
    let v8: i64;  // 4096
    let v9: i64;  // 4096
    let v10: i64;  // 4096
    let v11: i64;  // 4096
    let v15: i64;  // rbp
    let v16: i64;  // rdx
    let v18: i64;  // r13
    let v19: i64;  // rax
    let v20: i64;  // r15
    let v21: struct8;  // rax
    let v26: i64;  // rbx
    let v30: i64;  // rax
    let v31: i64;  // r15
    let v33: i64;  // rax
    let v34: i64;  // r14

    v2 = std::io::stdio::stdout();
    v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v2));
    if !a1 {
        v5 = 0;
    } else if a4 {
        do {
            v15 = <usize as core::iter::range::Step>::backward_unchecked(v6);
            v3 = regex::regex::bytes::Regex::find_at(a2, a3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v7, a0, a1, "src/uu/tac/src/tac.rs"), v16, v15);
            if v3 {
                v19 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v15, v8, a0, a1, "src/uu/tac/src/tac.rs");
                v20 = v1;
                if v16 < v0 - v20 {
                    memcpy(*((&v0 as &char + 8) as &i64) + v20, v19, v16);
                    v1 = v16 + v20;
                } else {
                    v21 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v19, v16);
                    if v21 {
                        return v21;
                    }
                }
            }
        } while ((v5 = v18, v15));
    } else {
        do {
            v26 = <usize as core::iter::range::Step>::backward_unchecked(v11);
            v3 = regex::regex::bytes::Regex::find_at(a2, a3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v9, a0, a1, "src/uu/tac/src/tac.rs"), v16, v26);
            if v3 {
                v30 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((&v3 as &char + 24) as &i64) - *((&v3 as &char + 16) as &i64) + v26, v10, a0, a1, "src/uu/tac/src/tac.rs");
                v31 = v1;
                if v16 < v0 - v31 {
                    memcpy(*((&v0 as &char + 8) as &i64) + v31, v30, v16);
                    v1 = v16 + v31;
                } else {
                    v21 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v30, v16);
                    if v21 {
                        return v21;
                    }
                }
            }
        } while (v26);
    }
    v33 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v5, a0, a1, "src/uu/tac/src/tac.rs");
    v34 = v1;
    if v16 < v0 - v34 {
        memcpy(*((&v0 as &char + 8) as &i64) + v34, v33, v16);
        v1 = v16 + v34;
        return 0;
    }
    v21 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v33, v16);
    if v21 {
        return v21;
    }
    return 0;
}
