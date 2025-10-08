fn check_docs::filter_valid_anchors(a1: &struct24, a2: &struct24) -> : struct48 {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0x140]
    let v1: struct48;  // [bp-0x138], Other Possible Types: struct32
    let v2: u64;  // [bp-0x128]
    let v3: iNone;  // [bp-0x120]
    let v4: u64;  // [bp-0x110]
    let v5: u64;  // [bp-0x108]
    let v6: u64;  // [bp-0x100]
    let v7: u64;  // [bp-0xf8]
    let v8: u64;  // [bp-0xe8]
    let v9: u64;  // [bp-0xd8]
    let v10: u128;  // [bp-0xc8]
    let v11: u64;  // [bp-0xb8]
    let v12: struct32;  // [bp-0xb0]
    let v13: i64;  // [bp-0x90]
    let v14: u64;  // [bp-0x88]
    let v15: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x70]

    v0 = a2;
    v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v13 = &v0;
    v1 = itertools::Itertools::partition_map(&v12);
    v5 = v1.field_0;
    v7 = v2;
    v8 = v3;
    v9 = v4;
    check_docs::filter_unused_ends(&v12, *((a2 + 8) as &i64), *((a2 + 16) as &i64), v6, v2);
    v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v12);
    core::iter::traits::iterator::Iterator::collect(&v14, &v1);
    v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    core::iter::traits::iterator::Iterator::collect(&v10, &v1);
    v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
    v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v14);
    v15 = core::iter::traits::iterator::Iterator::chain(&v12, &v1);
    core::iter::traits::iterator::Iterator::collect(&v1, &v15);
    return struct48 {
        field_0: v10
        field_16: v11
        field_24: *(&v1.field_0 as &i128)
        field_40: v2
    };
}
