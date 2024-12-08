fn uu_tac::buffer_tac_regex(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8) -> u64 {
    let v0: struct33;  // [sp-0x90], Other Possible Types: i264
    let v1: i64;  // [sp-0x80]
    let v2: i64;  // [sp-0x58]
    let v3: i256;  // [sp-0x50], Other Possible Types: Option<struct32>
    let v5: i64;  // rsi
    let v6: i64;  // rdx
    let v7: i64;  // r13
    let v8: i64;  // 4096
    let v9: i64;  // 4096
    let v10: i64;  // 4096
    let v11: i64;  // 4096
    let v12: i64;  // 4096
    let v13: i64;  // 4096
    let v17: i64;  // rbp
    let v19: i64;  // r13
    let v20: i64;  // rax
    let v21: i64;  // r15
    let v22: struct8;  // rax
    let v27: i64;  // rbx
    let v31: i64;  // rax
    let v32: i64;  // r15
    let v34: i64;  // rax
    let v35: i64;  // r14

    v2 = std::io::stdio::stdout();
    v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v2, v5, v6));
    if !a1 {
        v7 = 0;
        goto LABEL_59f608;
    }
    if a4 {
        do {
            v17 = <usize as core::iter::range::Step>::backward_unchecked(v8);
            v3 = regex::regex::bytes::Regex::find_at(a2, a3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v9, a0, a1, "src/uu/tac/src/tac.rs"), v6, v17);
            if v3 {
                v20 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v17, v10, a0, a1, "src/uu/tac/src/tac.rs");
                v21 = v1;
                if v6 >= v0 - v21 {
                    v22 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v20, v6);
                    if v22 {
                        goto LABEL_59f76c;
                    }
                } else {
                    memcpy(*((&v0 as &char + 8) as &i64) + v21, v20, v6);
                    v1 = v6 + v21;
                }
            }
        } while ((v7 = v19, v17));
    } else {
        do {
            v27 = <usize as core::iter::range::Step>::backward_unchecked(v13);
            v3 = regex::regex::bytes::Regex::find_at(a2, a3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v11, a0, a1, "src/uu/tac/src/tac.rs"), v6, v27);
            if v3 {
                v31 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((&v3 as &char + 24) as &i64) - *((&v3 as &char + 16) as &i64) + v27, v12, a0, a1, "src/uu/tac/src/tac.rs");
                v32 = v1;
                if v6 >= v0 - v32 {
                    v22 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v31, v6);
                    if !v22 {
                        goto LABEL_0x59f693;
                    } else {
                        goto LABEL_59f76c;
                    }
                } else {
                    memcpy(*((&v0 as &char + 8) as &i64) + v32, v31, v6);
                    v1 = v6 + v32;
                }
            }
        } while (v27);
        goto LABEL_59f76c;
    }
LABEL_59f608:
    v34 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v7, a0, a1, "src/uu/tac/src/tac.rs");
    v35 = v1;
    if v6 < v0 - v35 {
        memcpy(*((&v0 as &char + 8) as &i64) + v35, v34, v6);
        v1 = v6 + v35;
    } else {
        v22 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v34, v6);
        if !v22 {
            return 0;
        }
    }
LABEL_59f76c:
    return v22;
}
