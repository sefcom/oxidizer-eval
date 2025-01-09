fn uu_head::find_nth_line_from_end() -> u32 {
    let v0: u64;  // [sp-0x10058]
    let v1: u64;  // [sp-0x10048]
    let v2: struct16;  // [bp-0x10040]
    let v3: u8;  // [bp-0x10030]
    let v4: void*;  // [sp-0x2030]
    let v6: u64;  // rdi
    let v7: void*;  // r13
    let v8: u64;  // rdx
    let v9: void*;  // r14
    let v10: u64;  // rdx
    let v11: u64;  // rdx
    let v13: u64;  // r12
    let v15: &u8;  // rax
    let v16: u64;  // r14
    let v17: u64;  // r13
    let v18: u64;  // rsi

    do {
        v4 = 0;
    } while (&v4 != &v3);
    if <std::fs::File as std::io::Seek>::seek(v6, 1, 0) {
        return;
    }
    v7 = 0;
    memset(&v3, 0, 0x10000);
    v1 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(core::cmp::min_by(v8), &v3);
    v0 = v1 + v8;
    v9 = 0;
    do {
        v13 = v10;
        if <std::fs::File as std::io::Seek>::seek(v6, 2, -(core::cmp::min_by(v13, v11 - v7))) {
            goto LABEL_4b9e11;
        }
        if std::io::Read::read_exact(v6, v1, v13) {
            goto LABEL_4b9e11;
        }
        v2 = struct16 {
            field_0: v14
            field_8: v0
        };
        v15 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v2);
        if v15 {
            do {
                v9 = (-0x100 | *(v15) == v8) + v16;
                if v9 == v18 + 1 {
                    if std::io::Seek::rewind(v6) {
                        goto LABEL_4b9e11;
                    } else {
                        goto LABEL_4b9e11;
                    }
                }
            } while ((v7 = v17 + 1, v15 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v2), v15));
        }
    } while (v7 != v8);
    std::io::Seek::rewind(v6);
LABEL_4b9e11:
    goto LABEL_4b9e11;
}
