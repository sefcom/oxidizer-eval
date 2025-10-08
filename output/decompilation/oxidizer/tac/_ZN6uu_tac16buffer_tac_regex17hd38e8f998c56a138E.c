fn uu_tac::buffer_tac_regex(a0: u32, a1: void*, a2: u64, a3: u64, a4: u8) -> long long {
    let v0: struct33;  // [bp-0x90]
    let v1: u64;  // [bp-0x90]
    let v2: u64;  // [bp-0x88]
    let v3: u64;  // [bp-0x80]
    let v4: std::io::stdio::Stdout;  // [bp-0x58]
    let v5: struct32;  // [bp-0x50]
    let v6: u64;  // [bp-0x40]
    let v10: void*;  // 4096
    let v11: void*;  // 4096
    let v12: void*;  // rbx
    let v13: void*;  // r13
    let v14: void*;  // rbp
    let v16: void*;  // rbp
    let v17: void*;  // rbx
    let v18: u64;  // rax
    let v19: core::result::Result<(), std::io::error::Error>;  // rax
    let v21: void*;  // rbp
    let v23: void*;  // 4096
    let v24: void*;  // 4096
    let v25: void*;  // rbx
    let v26: void*;  // r13
    let v27: void*;  // r15
    let v29: u64;  // rdx
    let v30: void*;  // rbx
    let v31: void*;  // rbp
    let v32: u64;  // rax
    let v35: u64;  // rax

    v4 = std::io::stdio::stdout();
    v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::Stderr::lock(&v4));
    if a1 {
        if a4 {
            v10 = a1;
            v11 = a1;
            do {
                v12 = v11;
                v13 -= 1;
                v14 = v21;
                v5 = regex::regex::bytes::Regex::find_at(a2, a3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v12, a0, a1, "src/uu/tac/src/tac.rs"), v29, v13);
                v16 = v14;
                v17 = v12;
                if v5.field_0 {
                    v18 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v13, v14, a0, a1, "src/uu/tac/src/tac.rs");
                    if v29 < v1 - v3 {
                        memcpy(v2 + v3, v18, v29);
                        v3 = v29 + v3;
                        v16 = v13;
                        v17 = v13;
                    } else {
                        std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v1, v18, v29);
                        v16 = v13;
                        v17 = v13;
                        if let Err(_) = v19 {
                            return v19;
                        }
                    }
                }
                v21 = v16;
                v11 = v17;
            } while (__CFADD__(v13, -1) as char);
        } else {
            v23 = a1;
            v24 = a1;
            do {
                v25 = v24;
                v26 -= 1;
                v27 = v23;
                v5 = regex::regex::bytes::Regex::find_at(a2, a3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v25, a0, a1, "src/uu/tac/src/tac.rs"), v29, v26);
                if !v5.field_0 {
                    v21 = v27;
                    v30 = v25;
                } else {
                    v31 = *((&v5.field_16 as &char + 8) as &i64) - v6 + v26;
                    v32 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v31, v27, a0, a1, "src/uu/tac/src/tac.rs");
                    if v29 < v1 - v3 {
                        memcpy(v2 + v3, v32, v29);
                        v3 = v29 + v3;
                        v21 = v31;
                        v30 = v26;
                    } else {
                        std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v1, v32, v29);
                        v21 = v31;
                        v30 = v26;
                        if let Err(_) = v19 {
                            return v19;
                        }
                    }
                }
                v23 = v21;
                v24 = v30;
            } while (__CFADD__(v26, -1) as char);
        }
    }
    v35 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v21, a0, a1, "src/uu/tac/src/tac.rs");
    if v29 < v1 - v3 {
        memcpy(v2 + v3, v35, v29);
    } else {
        std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v1, v35, v29);
        if let Err(_) = v19 {
            return v19;
        }
    }
    <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v1);
    return v19;
}
