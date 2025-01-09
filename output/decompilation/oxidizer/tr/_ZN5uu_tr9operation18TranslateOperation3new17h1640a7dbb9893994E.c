fn uu_tr::operation::TranslateOperation::new(a0: &struct48, a1: void*, a2: &u64) -> u64 {
    let v0: i256;  // [sp-0xd0], Other Possible Types: struct96, Option<struct16>, struct32
    let v1: i256;  // [sp-0x70], Other Possible Types: struct32
    let v2: i272;  // [sp-0x50], Other Possible Types: struct34
    let v4: i64;  // rax
    let v6: i64;  // rdx

    v4 = *((a2 + 16) as &i64);
    if v4 {
        v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
        v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
        v2 = core::iter::traits::iterator::Iterator::chain(&v0, *((v4 + *((a2 + 8) as &i64) - 1) as &i8));
        v0 = core::iter::traits::iterator::Iterator::zip(&v1, &v2);
        <std::collections::hash::map::HashMap<K,V,S> as core::iter::traits::collect::FromIterator<(K,V)>>::from_iter(a0, &v0);
    } else {
        if !*((a1 + 16) as &i64) {
            v0 = std::thread::local::LocalKey<T>::try_with();
            *((a0 + 16) as &i128) = g_52eef8;
            *(a0 as &i128) = g_52eee8;
            *((a0 + 32) as &long long) = core::result::Result<T,E>::expect(&v0);
            *((a0 + 40) as &i64) = v6;
        }
        return struct16 {
            field_0: 0
            field_8: 9223372036854775813
        };
    }
}
