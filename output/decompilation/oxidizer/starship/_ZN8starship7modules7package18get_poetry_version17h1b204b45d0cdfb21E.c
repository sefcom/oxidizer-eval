fn starship::modules::package::get_poetry_version(a0: void*, a1: i64, a2: i64, a3: u64) -> long long {
    let v0: Result<struct104, struct98>;  // [bp-0x8]
    let v2: i64;  // rax
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: struct24;  // rax

    v0 = v2;
    v3 = indexmap::map::IndexMap<K,V,S>::get(a0, "tool", a3);
    if !v3 {
        return 0;
    }
    v4 = toml::value::Value::get(v3, "poetry");
    if !v4 {
        return 0;
    }
    v5 = toml::value::Value::get(v4, "version");
    return 0;
}
