fn uu_tail::follow::files::FileHandling::files_remaining(a0: u32) -> u8 {
    let v0: struct26;  // [sp-0x58]
    let v2: i64;  // r14
    let v3: i64;  // r15
    let v4: i64;  // r12

    v0 = hashbrown::map::HashMap<K,V,S,A>::iter(a0 + 24);
    loop {
        v2 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v2 {
            break;
        }
        v3 = *((v2 + 8) as &i64);
        v4 = *((v2 + 16) as &i64);
        if !(!<std::path::Path as uu_tail::paths::PathExtTail>::is_tailable(v3, v4) as i8) || !(!<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(v3, v4) as i8) {
            break;
        }
    }
    return v2;
}
