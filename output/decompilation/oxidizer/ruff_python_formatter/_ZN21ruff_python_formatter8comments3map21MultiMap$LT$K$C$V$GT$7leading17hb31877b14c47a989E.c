fn ruff_python_formatter::comments::map::MultiMap<K,V>::leading(a0: i64, a1: u64) -> long long {
    let v1: i64;  // rax
    let v2: u32;  // edi

    v1 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0 + 48, a1);
    if !v1 {
        return 4;
    }
    v2 = *((v1 + 16) as &i32);
    if !*((v1 + 16) as &i32) {
        return *((*((a0 + 32) as &i64) + *((v1 + 24) as &i64) * 24 + 8) as &i64);
    }
    return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((v1 + 16) as &i32) - 1, *((v1 + 20) as &i32) - 1, *((a0 + 8) as &i64), *((a0 + 16) as &i64), "crates/ruff_python_formatter/src/comments/map.rs");
}
