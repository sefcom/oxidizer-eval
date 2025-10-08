fn uu_head::find_nth_line_from_end() -> int {
    let v0: u64;  // [bp-0x10048]
    let v1: struct16;  // [bp-0x10040]
    let v2: u458752;  // [bp-0x10030]
    let v5: u64;  // rdi
    let v7: core::result::Result<(), std::io::error::Error>;  // r13
    let v8: struct24;  // rbp
    let v9: u64;  // rsi
    let v10: u64;  // rdx
    let v11: u64;  // rdx
    let v12: u64;  // rbx
    let v13: u64;  // rax
    let v14: u64;  // r12
    let v15: std::io::stdio::Stdout;  // rax
    let v16: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v17: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v16 = <std::fs::File as std::io::Seek>::seek(v5, 1, 0);
    match v16 {
        Err(_) => {
            return;
        },
        Ok(_) => {
            v7 = 0;
            memset(&v2, 0, 0x10000);
            v8 = 0;
            v0 = v9 + 1;
            v11 = *((&v16 as &char + 8) as &i64);
            do {
                v12 = v11 - v8;
                v13 = core::cmp::Ord::min(v12, 0x10000);
                v14 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v13, &v2, 0x10000, "src/uu/head/src/head.rs");
                v17 = <std::fs::File as std::io::Seek>::seek(v5, 0, v12 - v13);
                if (v17 as i8 & 1) || std::io::Read::read_exact(v5, v14, v10) {
                    return;
                }
                v1 = struct16 {
                    field_0: v14
                    field_8: v14 + v10
                };
                v15 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v1);
                if v15 {
                    loop {
                        v7 = (*(v15 as &i8) == v10 as u8) as u8 as u64 + v7;
                        if v7 == v0 {
                            break;
                        }
                        v8 += 1;
                        v15 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v1);
                        if !v15 {
                            goto LABEL_4675b0;
                        }
                    }
                }
LABEL_4675b0:
                v11 = *((&v16 as &char + 8) as &i64);
            } while (v8 != v11);
            std::io::Seek::rewind(v5);
        },
    }
}
