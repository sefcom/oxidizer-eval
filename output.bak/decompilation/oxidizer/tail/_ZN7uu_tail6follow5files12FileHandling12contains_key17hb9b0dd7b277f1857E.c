fn uu_tail::follow::files::FileHandling::contains_key(a0: u32, a1: u64, a2: u64) -> u8 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    return hashbrown::map::HashMap<K,V,S,A>::get_inner(a0 + 24, a1, a2);
}
