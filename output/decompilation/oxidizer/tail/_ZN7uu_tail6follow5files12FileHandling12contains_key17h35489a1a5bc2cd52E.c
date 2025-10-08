fn uu_tail::follow::files::FileHandling::contains_key(a0: u64, a1: u64, a2: u64) -> char {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    return hashbrown::map::HashMap<K,V,S,A>::get_inner(a0 + 24, a1, a2);
}
