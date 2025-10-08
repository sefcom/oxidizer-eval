fn uu_tail::follow::files::FileHandling::only_stdin_remaining(a0: i64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax

    if *((a0 + 48) as &i64) != 1 {
        return 0;
    }
    v0 = v2;
    v3 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0 + 24, "-");
    return v3 & -0x100 | v3;
}
