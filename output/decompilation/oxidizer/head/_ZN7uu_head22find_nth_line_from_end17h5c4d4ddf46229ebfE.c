fn uu_head::find_nth_line_from_end() -> int {
    let v0: u64;  // [bp-0x10058]
    let v1: u64;  // [bp-0x10048]
    let v2: u64;  // [bp-0x10040]
    let v3: u64;  // [bp-0x10038]
    let v4: u458752;  // [bp-0x10030]
    let v7: u64;  // rdi
    let v9: u64;  // rdx
    let v10: u64;  // rdx
    let v11: u64;  // rdx
    let v12: u64;  // rbx
    let v13: u64;  // r12
    let v14: struct49;  // rax
    let v15: u64;  // r14, Other Possible Types: void*
    let v16: u64;  // r13, Other Possible Types: std::io::stdio::Stdout
    let v17: u64;  // rsi
    let v18: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v19: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v18 = <std::fs::File as std::io::Seek>::seek(v7, 1, 0);
    match v18 {
        Err(_) => {
            return;
        },
        Ok(_) => {
            v16 = 0;
            memset(&v4, 0, 0x10000);
            v1 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(core::cmp::min_by(*((&v18 as &char + 8) as &i64)), &v4);
            v0 = v1 + v9;
            v15 = 0;
            v10 = v9;
            v11 = *((&v18 as &char + 8) as &i64);
            do {
                v12 = v11;
                v13 = v9;
                v19 = <std::fs::File as std::io::Seek>::seek(v7, 2, -(core::cmp::min_by(v13, v12 - v16)));
                if v19 as i64 || std::io::Read::read_exact(v7, v1, v13) {
                    return;
                }
                v2 = v1;
                v3 = v0;
                v14 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v2);
                if v14 {
                    loop {
                        v15 = (*(v14 as &i8) == v9 as u8) as u8 as u64 + v15;
                        if v15 == v17 + 1 {
                            break;
                        }
                        v16 += 1;
                        v14 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v2);
                        if !v14 {
                            goto LABEL_4b9d40;
                        }
                    }
                }
LABEL_4b9d40:
                v11 = *((&v18 as &char + 8) as &i64);
            } while (v16 != v11);
            std::io::Seek::rewind(v7);
        },
    }
}
