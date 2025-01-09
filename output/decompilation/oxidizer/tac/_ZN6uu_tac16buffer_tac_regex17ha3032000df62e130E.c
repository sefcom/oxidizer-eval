fn uu_tac::buffer_tac_regex(a0: u32, a1: u32, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: i264;  // [sp-0x90], Other Possible Types: struct33
    let v1: i64;  // [sp-0x80]
    let v2: i64;  // [sp-0x58]
    let v3: Option<struct32>;  // [sp-0x50], Other Possible Types: i256
    let v5: i64;  // r13
    let v6: i64;  // 4096
    let v7: i64;  // 4096
    let v8: i64;  // 4096
    let v9: i64;  // 4096
    let v10: i64;  // 4096
    let v11: i64;  // 4096
    let v12: i64;  // r13
    let v13: i64;  // r15
    let v15: i64;  // rbp
    let v16: i64;  // rdx
    let v17: i64;  // r15
    let v18: i64;  // r13
    let v19: i64;  // rax
    let v20: i64;  // r15
    let v23: i64;  // r15
    let v24: i64;  // rbp
    let v25: i64;  // rbx
    let v26: i64;  // rbp
    let v27: i64;  // r15
    let v28: i64;  // r13
    let v29: i64;  // rax
    let v30: i64;  // r15
    let v32: i64;  // rax
    let v33: i64;  // r14
    let v34: i64;  // r14

    v2 = std::io::stdio::stdout();
    v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v2));
    if !a1 {
        v5 = 0;
    } else if a4 {
        v6 = a1;
        v7 = a1;
        v8 = a1;
        do {
            v12 = v8;
            v13 = v7;
            v15 = <usize as core::iter::range::Step>::backward_unchecked(v6);
            v3 = regex::regex::bytes::Regex::find_at(a2, a3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v13, a0, a1, "src/uu/tac/src/tac.rs"), v16, v15);
            v17 = v13;
            v18 = v12;
            if v3 {
                v19 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v15, v12, a0, a1, "src/uu/tac/src/tac.rs");
                v20 = v1;
                if v16 < v0 - v20 {
                    memcpy(*((&v0 as &char + 8) as &i64) + v20, v19, v16);
                    v1 = v16 + v20;
                    v17 = v15;
                    v18 = v15;
                } else {
                    v17 = v15;
                    v18 = v15;
                    if std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v19, v16) {
                        return v34;
                    }
                }
            }
        } while ((v5 = v18, v6 = v15, v7 = v17, v8 = v5, v15));
    } else {
        v9 = a1;
        v10 = a1;
        v11 = a1;
        do {
            v23 = v10;
            v24 = v9;
            v25 = <usize as core::iter::range::Step>::backward_unchecked(v11);
            v3 = regex::regex::bytes::Regex::find_at(a2, a3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v24, a0, a1, "src/uu/tac/src/tac.rs"), v16, v25);
            match v3 {
                None => {
                    v26 = v24;
                    v27 = v23;
                },
                Some(_) => {
                    v28 = *((&v3 as &char + 24) as &i64) - *((&v3 as &char + 16) as &i64) + v25;
                    v29 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v28, v23, a0, a1, "src/uu/tac/src/tac.rs");
                    v30 = v1;
                    if v16 < v0 - v30 {
                        memcpy(*((&v0 as &char + 8) as &i64) + v30, v29, v16);
                        v1 = v16 + v30;
                        v26 = v25;
                        v27 = v28;
                    } else {
                        v26 = v25;
                        v27 = v28;
                        if std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v29, v16) {
                            return v34;
                        }
                    }
                },
            }
        } while ((v5 = v18, v6 = v15, v7 = v17, v8 = v5, v15));
    }
    v32 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v5, a0, a1, "src/uu/tac/src/tac.rs");
    v33 = v1;
    if v16 < v0 - v33 {
        memcpy(*((&v0 as &char + 8) as &i64) + v33, v32, v16);
        v1 = v16 + v33;
    } else if std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v32, v16) {
        return v34;
    }
    return 0;
}
