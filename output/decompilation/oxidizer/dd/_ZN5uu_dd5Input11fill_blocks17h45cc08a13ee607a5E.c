fn uu_dd::Input::fill_blocks(a0: &struct36, a1: void*, a2: &u64, a3: u32) -> u64 {
    let v0: i64;  // [sp-0xd8]
    let v1: i64;  // [sp-0xd0]
    let v2: i64;  // [sp-0xc8]
    let v3: struct24;  // [sp-0xb0]
    let v4: struct32;  // [sp-0x98]
    let v5: struct40;  // [sp-0x78]
    let v7: i64;  // r13
    let v8: i64;  // rdi
    let v9: i64;  // r12
    let v10: i64;  // rbx
    let v11: i64;  // rbp
    let v12: i64;  // rdx
    let v13: i64;  // rdx

    v7 = *((a2 + 16) as &i64);
    if !v7 {
        v10 = 0;
        v9 = 0;
        v0 = 0;
        v1 = 0;
    }
    v8 = *((*((a1 + 8) as &i64) + 112) as &i64);
    v1 = 0;
    v0 = 0;
    v9 = 0;
    v10 = 0;
    do {
        v2 = v10;
        v11 = core::cmp::min_by(v8 + v9, v7);
        if <uu_dd::Input as std::io::Read>::read(a1, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v9, v11, *((a2 + 8) as &i64), v7), a2) {
            *((a0 + 8) as &unsigned long) = v12;
        }
        if !v12 {
            v10 = v2;
            break;
        }
        v13 = v11 - v9;
        if v13 <= v12 {
            v1 += 1;
        } else {
            v0 += 1;
            v3 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(a3 as u64, v13 - v12);
            v4 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v3);
            v5 = alloc::vec::Vec<T,A>::splice(a2, v9 + v12, v11, &v4);
        }
        v10 = v2 + v12;
        v8 = *((*((a1 + 8) as &i64) + 112) as &i64);
        v9 += v8;
        v7 = *((a2 + 16) as &i64);
    } while (v9 < v7);
}
