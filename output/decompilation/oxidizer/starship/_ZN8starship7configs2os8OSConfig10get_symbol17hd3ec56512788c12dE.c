fn starship::configs::os::OSConfig::get_symbol(a0: void*, a1: u8) -> long long {
    let v0: u64;  // [bp-0x8]
    let v1: u8;  // [bp-0x1]
    let v3: u64;  // rax
    let v4: i64;  // rax

    v0 = v3;
    v1 = a1;
    v4 = indexmap::map::IndexMap<K,V,S>::get(a0, &v1);
    if !v4 {
        return 0;
    }
    return *(v4 as &i64);
}
