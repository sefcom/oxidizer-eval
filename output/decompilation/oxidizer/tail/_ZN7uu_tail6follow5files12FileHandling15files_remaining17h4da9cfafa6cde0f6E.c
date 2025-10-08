fn uu_tail::follow::files::FileHandling::files_remaining(a0: u64) -> char {
    let v0: u8;  // [bp-0x48]
    let v2: i64;  // r14

    hashbrown::map::HashMap<K,V,S,A>::iter(&v0, a0 + 24);
    do {
        v2 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v0);
    } while (v2 && !<std::path::Path as uu_tail::paths::PathExtTail>::is_tailable(*((v2 + 8) as &i64), *((v2 + 16) as &i64)) && !<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(*((v2 + 8) as &i64), *((v2 + 16) as &i64)));
    return v2;
}
