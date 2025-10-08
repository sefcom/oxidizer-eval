fn starship::modules::package::get_pep621_version(a0: void*, a1: i64, a2: i64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0x8]
    let v2: struct24;  // rax
    let v3: u64;  // rax
    let v4: i64;  // rax

    v0 = v2;
    v3 = indexmap::map::IndexMap<K,V,S>::get(a0, "project", a3);
    if !v3 {
        return 0;
    }
    v4 = toml::value::Value::get(v3, "version");
    return 0;
}
