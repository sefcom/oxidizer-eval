fn uu_head::find_nth_line_from_end() -> u32 {
    let v0: u64;  // [sp-0x10058]
    let v1: u64;  // [sp-0x10048]
    let v2: u64;  // [sp-0x10040]
    let v3: u64;  // [sp-0x10038]
    let v4: u8;  // [bp-0x10030]
    let v5: void*;  // [sp-0x2030]
    let v7: u64;  // rdi
    let v8: void*;  // r13
    let v9: u64;  // rdx
    let v10: void*;  // r14
    let v11: u64;  // rdx
    let v12: u64;  // rdx
    let v13: struct8;  // rax
    let v14: u64;  // r14
    let v15: u64;  // r13
    let v16: u64;  // rsi

    do {
        v5 = 0;
    } while (&v5 != &v4);
    if <std::fs::File as std::io::Seek>::seek(v7, 1) {
        return;
    }
    v8 = 0;
    memset(&v4, 0, 0x10000);
    v1 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(core::cmp::min_by(v9), &v4);
    v0 = v1 + v9;
    v10 = 0;
    do {
        core::cmp::min_by(v11, v12 - v10);
        if <std::fs::File as std::io::Seek>::seek(v7, 2) {
            goto LABEL_4b9fa1;
        }
        if std::io::Read::read_exact() {
            goto LABEL_4b9fa1;
        }
        v2 = v1;
        v3 = v0;
        v13 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back();
        if v13 {
            do {
                v8 = (-0x100 | *(v13 as &i8) == v9) + v15;
                if v8 == v16 + 1 {
                    if !std::io::Seek::rewind(v7) {
                        goto LABEL_4b9fa1;
                    } else {
                        goto LABEL_4b9fa1;
                    }
                }
            } while ((v10 = v14 + 1, v13 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(), v13));
        }
    } while (v10 != v9);
    std::io::Seek::rewind(v7);
LABEL_4b9fa1:
}
