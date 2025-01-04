fn uu_cp::print_paths(a0: u32, a1: u64, a2: u64, a3: u64, a4: u64) -> u64 {
    let v0: i256;  // [sp-0x100], Other Possible Types: Option<struct32>
    let v1: i64;  // [sp-0xf8]
    let v2: i192;  // [sp-0xe0], Other Possible Types: struct24
    let v3: struct24;  // [sp-0x90]
    let v4: i64;  // [sp-0x70]
    let v5: i64;  // [sp-0x68]
    let v6: i256;  // [sp-0x60], Other Possible Types: struct32
    let v7: i128;  // [sp-0x40]
    let v9: i64;  // rax
    let v10: i256;  // ymm0
    let v11: i128;  // xmm0

    if !a0 {
        v3 = uu_cp::context_for(a1, a2, a3, a4);
        println!("{:?}", &v3);
        return;
    }
    v2 = uu_cp::aligned_ancestors(a1, a2, a3, a4);
    v6 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v2);
    v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v6);
    v9 = v0;
    if v9 {
        do {
            v11 = *((&v0 as &char + 16) as &i128);
            v10 = v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11;
            v4 = v9;
            v5 = v1;
            v7 = v11;
            println!("{:?} -> {:?}", &v4, &v7);
            v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v6);
            v9 = v0;
        } while (v9);
    }
}
