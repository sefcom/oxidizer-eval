fn uu_cp::print_paths(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x100]
    let v1: Option<struct32>;  // [sp-0x100]
    let v2: i64;  // [sp-0xf8]
    let v3: i8;  // [bp-0xe0]
    let v4: struct24;  // [sp-0x90]
    let v5: i64;  // [sp-0x70]
    let v6: i64;  // [sp-0x68]
    let v7: struct32;  // [sp-0x60]
    let v8: iNone;  // [sp-0x40]
    let v10: i64;  // rax
    let v11: iNone;  // ymm0
    let v12: iNone;  // xmm0

    if !a0 {
        v4 = uu_cp::context_for(a1, a2, a3, a4);
        println!("{}", &v4);
        return;
    }
    uu_cp::aligned_ancestors(&v3, a1, a2, a3, a4);
    v7 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v3);
    v1 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
    v10 = v0;
    if v10 {
        do {
            v12 = *((&v1 as &char + 16) as &i128);
            v11 = v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12 as u256;
            v5 = v10;
            v6 = v2;
            v8 = v12;
            println!("{} -> {}", &v5, &v8);
            v1 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
            v10 = v0;
        } while (v10);
    }
}
