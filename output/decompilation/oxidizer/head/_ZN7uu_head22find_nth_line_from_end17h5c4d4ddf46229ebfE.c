fn uu_head::find_nth_line_from_end() -> u32 {
    let v0: u64;  // [sp-0x10058]
    let v1: u64;  // [sp-0x10050]
    let v2: u64;  // [sp-0x10048]
    let v3: struct16;  // [bp-0x10040]
    let v4: u8;  // [bp-0x10030]
    let v5: void*;  // [sp-0x2030]
    let v7: u64;  // rdx
    let v8: u64;  // rbx
    let v9: u64;  // rdi
    let v10: u64;  // r12
    let v11: u64;  // r14, Other Possible Types: void*
    let v12: u64;  // rbx
    let v14: &u8;  // rax
    let v15: u64;  // r13, Other Possible Types: void*
    let v16: u64;  // rsi

    do {
        v5 = 0;
    } while (&v5 != &v4);
    v8 = v7;
    if <std::fs::File as std::io::Seek>::seek(v9, 1, 0) {
        return;
    }
    v15 = 0;
    memset(&v4, 0, 0x10000);
    v10 = v7;
    v2 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(core::cmp::min_by(v7), &v4);
    v0 = v2 + v7;
    v11 = 0;
    v1 = v7;
    do {
        v12 = v9;
        if <std::fs::File as std::io::Seek>::seek(v12, 2, -(core::cmp::min_by(v10, v8 - v15))) {
            goto LABEL_4b9e11;
        }
        if std::io::Read::read_exact(v12, v2, v10) {
            goto LABEL_4b9e11;
        }
        v3 = struct16 {
            field_0: v13
            field_8: v0
        };
        v14 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v3);
        v8 = v1;
        if v14 {
            do {
                v11 = (*(v14) == v7) + v11;
                if v11 == v16 + 1 {
                    if !std::io::Seek::rewind(v9) {
                        goto LABEL_4b9e11;
                    } else {
                        goto LABEL_4b9e11;
                    }
                }
            } while ((v15 += 1, v14 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v3), v14));
        }
        v10 = v7;
    } while (v15 != v8);
    std::io::Seek::rewind(v9);
LABEL_4b9e11:
    goto LABEL_4b9e11;
}
