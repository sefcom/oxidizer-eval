fn bat::assets::build_assets::print_unlinked_contexts(a0: i64) {
    let v0: u64;  // [bp-0xf0]
    let v1: u64;  // [bp-0xe0]
    let v2: u64;  // [bp-0xd8]
    let v3: Result<struct40, struct16>;  // [bp-0xd8], Other Possible Types: u64
    let v4: core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>;  // [bp-0xd8]
    let v5: u64;  // [bp-0xc8]
    let v6: Result<struct24, struct16>;  // [bp-0xc8], Other Possible Types: u64
    let v7: u128;  // [bp-0x98]
    let v8: u64;  // [bp-0x88]
    let v9: Result<struct16, struct64>;  // [bp-0x78]

    syntect::parsing::syntax_set::SyntaxSet::find_unlinked_contexts(&v0, a0);
    if !v1 {
        return;
    }
    println!("Some referenced contexts could not be found!");
    v9 = <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    loop {
        v4 = <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v9);
        if (((0 ^ v4 as i64) & (0 ^ -(v3))) >> 63) as char {
            break;
        }
        v8 = v6;
        v7 = v4 as i128;
        println!("- {}", &v7);
        v3 = v2;
        v6 = v5;
    }
    return;
}
