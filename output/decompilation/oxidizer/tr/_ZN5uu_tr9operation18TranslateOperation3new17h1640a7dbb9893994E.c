fn uu_tr::operation::TranslateOperation::new(a1: i64, a2: i64) -> Result<struct48, struct16> {
    let a0: i64;  // rdi
    let v0: iNone;  // [bp-0xd0]
    let v1: iNone;  // [bp-0x70]
    let v2: iNone;  // [bp-0x50]
    let v4: i64;  // rax
    let v5: i64;  // rdx

    if *((a2 + 16) as &i64) {
        v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
        v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
        v2 = core::iter::traits::iterator::Iterator::chain(&v0, *((*((a2 + 16) as &i64) + *((a2 + 8) as &i64) - 1) as &i8));
        v0 = core::iter::traits::iterator::Iterator::zip(&v1, &v2);
        <std::collections::hash::map::HashMap<K,V,S> as core::iter::traits::collect::FromIterator<(K,V)>>::from_iter(a0, &v0);
        return a0;
    } else if *((a1 + 16) as &i64) {
        return struct16 {
            field_0: 0
            field_8: 9223372036854775813
        };
    } else {
        v0 = std::thread::local::LocalKey<T>::try_with();
        v4 = core::result::Result<T,E>::expect(&v0);
        return Ok(struct48 {
            field_0: g_52eee8
            field_16: g_52eef8
            field_32: v4
            field_40: v5
        });
    }
}
