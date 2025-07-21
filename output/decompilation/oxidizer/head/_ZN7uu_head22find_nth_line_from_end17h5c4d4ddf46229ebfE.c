fn uu_head::find_nth_line_from_end() -> int {
    let v0: u64;  // [bp-0x10058]
    let v1: u64;  // [bp-0x10048]
    let v2: struct16;  // [bp-0x10040]
    let v3: u458752;  // [bp-0x10030]
    let v6: u64;  // rdi
    let v8: u64;  // rdx
    let v9: u64;  // rdx
    let v10: u64;  // rdx
    let v11: u64;  // rbx
    let v12: u64;  // r12
    let v13: std::io::stdio::Stderr;  // rax
    let v14: void*;  // r14, Other Possible Types: struct16
    let v15: std::io::stdio::Stdout;  // r13, Other Possible Types: u64
    let v16: u64;  // rsi
    let v17: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v18: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v17 = <std::fs::File as std::io::Seek>::seek(v6, 1, 0);
    match v17 {
        Err(_) => {
            return;
        },
        Ok(_) => {
            v15 = 0;
            memset(&v3, 0, 0x10000);
            v1 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(core::cmp::min_by(*((&v17 as &char + 8) as &i64)), &v3);
            v0 = v1 + v8;
            v14 = 0;
            v9 = v8;
            v10 = *((&v17 as &char + 8) as &i64);
            do {
                v11 = v10;
                v12 = v8;
                v18 = <std::fs::File as std::io::Seek>::seek(v6, 2, -(core::cmp::min_by(v12, v11 - v15)));
                if v18 as i64 || std::io::Read::read_exact(v6, v1, v12) {
                    return;
                }
                v2 = struct16 {
                    field_0: v1
                    field_8: v0
                };
                v13 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v2);
                if v13 {
                    loop {
                        v14 = (*(v13 as &i8) == v8 as u8) as u8 as u64 + v14;
                        if v14 == v16 + 1 {
                            break;
                        }
                        v15 += 1;
                        v13 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v2);
                        if !v13 {
                            goto LABEL_4b9d40;
                        }
                    }
                }
LABEL_4b9d40:
                v10 = *((&v17 as &char + 8) as &i64);
            } while (v15 != v10);
            std::io::Seek::rewind(v6);
        },
    }
}
