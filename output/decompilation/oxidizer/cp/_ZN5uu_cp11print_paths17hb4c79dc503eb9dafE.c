fn uu_cp::print_paths(a0: i32, a1: i64, a2: i64, a3: i64, a4: i64) -> int {
    let v0: Option<struct32>;  // [bp-0x100]
    let v1: struct24;  // [bp-0x100]
    let v2: struct24;  // [bp-0x100]
    let v3: u64;  // [bp-0xf8]
    let v4: iNone;  // [bp-0xf0]
    let v5: struct24;  // [bp-0xe0]
    let v6: struct24;  // [bp-0x70]
    let v7: u64;  // [bp-0x68]
    let v8: struct32;  // [bp-0x60]
    let v9: core::result::Result<(), std::io::error::Error>;  // [bp-0x40]
    let v11: u64;  // [bp-0x90]

    if a0 {
        v5 = uu_cp::aligned_ancestors(a1, a2, a3, a4);
        v8 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
        v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v8);
        if let Some(_) = v0 {
            v2 = v1;
            do {
                v6 = v2;
                v7 = v3;
                v9 = v4;
                println!("{} -> {}", &v6, &v9);
                v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v8);
                v2 = v1;
            } while (v2.field_0 as i64);
        }
    }
    uu_cp::context_for(&v11, a1, a2, a3, a4);
    println!("{}", &v11);
    return;
}
