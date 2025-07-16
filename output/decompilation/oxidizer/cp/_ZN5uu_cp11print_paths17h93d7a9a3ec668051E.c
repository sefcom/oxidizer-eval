fn uu_cp::print_paths(a0: i32, a1: i64, a2: i64, a3: i64, a4: i64) {
    let v0: u64;  // [bp-0x100]
    let v1: u64;  // [bp-0x100]
    let v2: u64;  // [bp-0xf8]
    let v3: u128;  // [bp-0xf0]
    let v4: struct32;  // [bp-0xe0]
    let v5: u64;  // [bp-0x70]
    let v6: u64;  // [bp-0x68]
    let v7: Option<struct32>;  // [bp-0x60]
    let v8: u128;  // [bp-0x40]
    let v10: u64;  // r9
    let v11: u64;  // [bp-0x90]

    if a0 {
        uu_cp::aligned_ancestors(a1, a2, a3, a4, v10);
        v4 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
        v7 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(a2);
        if v0 {
            v1 = v0;
            do {
                v5 = v1;
                v6 = v2;
                v8 = v3;
                println!("{} -> {}", &v5, &v8);
            } while ((v7 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(a2), v1 = v0, v1));
        }
    }
    uu_cp::context_for(&v11, a1, a2, a3, a4);
    println!("{}", &v11);
    return;
}
