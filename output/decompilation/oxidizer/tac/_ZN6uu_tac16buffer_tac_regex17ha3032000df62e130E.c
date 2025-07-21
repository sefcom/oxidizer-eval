fn uu_tac::buffer_tac_regex(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8) -> long long {
    let v0: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x90]
    let v1: u64;  // [bp-0x90]
    let v2: u64;  // [bp-0x88]
    let v3: u64;  // [bp-0x80]
    let v4: std::io::stdio::Stderr;  // [bp-0x58]
    let v5: struct32;  // [bp-0x50]
    let v6: u64;  // [bp-0x40]
    let v8: void*;  // r13, Other Possible Types: u64
    let v9: u64;  // 4096
    let v10: u64;  // 4096
    let v11: u64;  // 4096
    let v12: u64;  // 4096
    let v13: u64;  // 4096
    let v14: u64;  // 4096
    let v15: u64;  // rsi
    let v16: u64;  // r13
    let v17: u64;  // r15
    let v19: u64;  // rbp
    let v21: u64;  // rdx
    let v22: u64;  // r15
    let v23: u64;  // r13
    let v24: core::fmt::rt::Argument;  // rax
    let v25: core::result::Result<(), std::io::error::Error>;  // rax
    let v27: u64;  // rsi
    let v29: u64;  // r15
    let v30: u64;  // rbp
    let v31: u64;  // rbx
    let v33: u64;  // rbp
    let v34: u64;  // r13
    let v35: u64;  // rax
    let v38: u64;  // rax

    v4 = std::io::stdio::Stderr {
        inner: std::io::stdio::stdout()
    };
    std::io::stdio::Stderr::lock(&v4);
    v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
    if a1 {
        if a4 {
            v9 = a1;
            v10 = a1;
            v11 = a1;
            do {
                v16 = v11;
                v17 = v10;
                v19 = <usize as core::iter::range::Step>::backward_unchecked(v9, v15);
                v5 = regex::regex::bytes::Regex::find_at(a2, a3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v17, a0, a1, "src/uu/tac/src/tac.rs"), v21, v19);
                v22 = v17;
                v23 = v16;
                if v5.field_0 {
                    v24 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v19, v16, a0, a1, "src/uu/tac/src/tac.rs");
                    if v21 < v1 - v3 {
                        memcpy(v2 + v3, v24, a2);
                        v3 = v21 + v3;
                        v22 = v19;
                        v23 = v19;
                    } else {
                        v25 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v1, v24, a2);
                        v22 = v19;
                        v23 = v19;
                        if let Err(_) = v25 {
                            goto LABEL_0x59fc06;
                        }
                    }
                }
            } while ((v8 = v23, v9 = v19, v10 = v22, v11 = v8, v9));
        } else {
            v12 = a1;
            v13 = a1;
            v14 = a1;
            do {
                v29 = v13;
                v30 = v12;
                v31 = <usize as core::iter::range::Step>::backward_unchecked(v14, v27);
                v5 = regex::regex::bytes::Regex::find_at(a2, a3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v30, a0, a1, "src/uu/tac/src/tac.rs"), v21, v31);
                if !v5.field_0 {
                    v33 = v30;
                    v8 = v29;
                } else {
                    v34 = *((&v5.field_16 as &char + 8) as &i64) - v6 + v31;
                    v35 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v34, v29, a0, a1, "src/uu/tac/src/tac.rs");
                    if v21 < v1 - v3 {
                        memcpy(v2 + v3, v35, a2);
                        v3 = v21 + v3;
                        v33 = v31;
                        v8 = v34;
                    } else {
                        v25 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v1, v35, a2);
                        v33 = v31;
                        v8 = v34;
                        if let Err(_) = v25 {
                            goto LABEL_0x59fc06;
                        }
                    }
                }
            } while ((v12 = v33, v13 = v8, v14 = v31, v14));
        }
    }
    v38 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v8, a0, a1, "src/uu/tac/src/tac.rs");
    if v21 < v1 - v3 {
        memcpy(v2 + v3, v38, a2);
    } else {
        v25 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v1, v38, a2);
    }
    return 0;
}
