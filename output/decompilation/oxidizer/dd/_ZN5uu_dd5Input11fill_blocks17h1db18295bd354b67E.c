fn uu_dd::Input::fill_blocks(a0: i128, a1: i64, a2: i64, a3: u8) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0xd8]
    let v1: u32;  // [bp-0xcc]
    let v2: i64;  // [bp-0xc8]
    let v3: core::fmt::rt::Argument;  // [bp-0xc0]
    let v4: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0xb0]
    let v5: std::sys::fs::unix::cfm::CachedFileMetadata;  // [bp-0x98]
    let v6: struct40;  // [bp-0x78]
    let v8: core::fmt::Arguments;  // r13
    let v9: struct40;  // rdi
    let v10: core::fmt::Arguments;  // r15
    let v11: struct56;  // rdx
    let v12: i64;  // rbp
    let v13: u64;  // rbx
    let v14: i64;  // r12
    let v15: u64;  // rdx
    let v16: u64;  // rdx
    let v17: u64;  // rax
    let v18: core::fmt::rt::Argument;  // rax

    if *((a2 + 16) as &i64) {
        v0 = 0;
        v1 = a3;
        v3 = 0;
        loop {
            v12 = a1;
            v13 = core::cmp::Ord::min(v9 + v10, v8);
            v14 = v12;
            if (<uu_dd::Input as std::io::Read>::read(v12, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v10, v13, *((a2 + 8) as &i64), v8), a2) & 1) {
                *((v2 + 8) as &u64) = v15;
                *(a0 as &u64) = v17;
                return v17;
            }
            if !v15 {
                break;
            }
            v16 = v13 - v10;
            if v16 > v15 {
                v3 += 1;
                v4 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v1, v16 - v15);
                <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5, &v4);
                v6 = alloc::vec::Vec<T,A>::splice(a2, v10 + v15, v13, &v5);
            }
            a1 = v14;
            if v10 >= v8 {
                break;
            }
        }
        v18 = v3;
        if v10 > v8 {
            *((a0 + 8) as &core::fmt::Arguments) = v0;
            *((a0 + 16) as &core::fmt::rt::Argument) = v18;
            *((a0 + 24) as &struct56) = v11;
            *((a0 + 32) as &i32) = 0;
            *(a0 as &u64) = v17;
            return v17;
        }
    }
    *((a2 + 16) as &core::fmt::Arguments) = v10;
    *((a0 + 8) as &core::fmt::Arguments) = v0;
    *((a0 + 16) as &core::fmt::rt::Argument) = v18;
    *((a0 + 24) as &struct56) = v11;
    *((a0 + 32) as &i32) = 0;
    *(a0 as &u64) = v17;
    return v17;
}
