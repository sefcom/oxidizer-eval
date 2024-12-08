fn uu_tail::follow::files::FileHandling::contains_key(a0: u64, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax

    v0 = v2;
    v3 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0 + 24, a1, a2);
    return v3 | -0x100 | v3;
}
