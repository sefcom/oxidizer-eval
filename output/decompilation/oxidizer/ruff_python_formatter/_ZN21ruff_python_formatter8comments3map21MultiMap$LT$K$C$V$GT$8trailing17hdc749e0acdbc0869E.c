fn ruff_python_formatter::comments::map::MultiMap<K,V>::trailing(a0: i64, a1: u64) -> long long {
    let v1: i64;  // rax
    let v2: &mut [u8];  // rax
    let v3: u32;  // rdx
    let v4: u64;  // rdi

    v1 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0 + 48, a1);
    if !v1 {
        return 4;
    } else if *((v1 + 16) as &i32) {
        v2 = ruff_python_formatter::comments::map::InOrderEntry::trailing_range(v1 + 16);
        return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v2, v3, *((a0 + 8) as &i64), *((a0 + 16) as &i64), "crates/ruff_python_formatter/src/comments/map.rs");
    } else {
        v4 = *((v1 + 24) as &i64) + 2;
        return *((*((a0 + 32) as &i64) + v4 * 24 + 8) as &i64);
    }
}
