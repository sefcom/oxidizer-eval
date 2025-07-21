fn uu_tail::follow::files::FileHandling::files_remaining(a0: i64) -> char {
    let v0: u8;  // [bp-0x58]
    let v2: &u64;  // rdx
    let v3: i64;  // r14

    hashbrown::map::HashMap<K,V,S,A>::iter(a0 + 24, v2);
    do {
        v3 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v0);
    } while (v3 && !<std::path::Path as uu_tail::paths::PathExtTail>::is_tailable(*((v3 + 8) as &i64), *((v3 + 16) as &i64)) as i8 && !<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(*((v3 + 8) as &i64), *((v3 + 16) as &i64)) as i8);
    return v3;
}
