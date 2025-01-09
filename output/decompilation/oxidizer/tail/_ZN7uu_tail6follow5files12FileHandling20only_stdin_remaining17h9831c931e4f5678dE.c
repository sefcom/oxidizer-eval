fn uu_tail::follow::files::FileHandling::only_stdin_remaining(a0: void*) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax

    if a0->field_30 == 1 {
        v0 = v2;
        v3 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&a0->padding_0[24] as &struct_0, "-");
        return v3 & -0x100 | v3;
    }
    return 0;
}
