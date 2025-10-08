fn starship::context::Context::is_module_disabled_in_config(a0: u64, a1: u64, a2: u64) -> long long {
    let v1: i64;  // rax
    let v2: &str;  // rax

    v1 = starship::config::StarshipConfig::get_module_config(a0 + 488, a1, a2);
    if !v1 {
        return 0;
    } else if *(v1 as &i64) > 9223372036854775813 {
        v2 = indexmap::map::IndexMap<K,V,S>::get(v1, "disabled", 9223372036854775813);
        if !v2 {
            return 0;
        } else if *(v2 as &i64) == 9223372036854775811 {
            return *((v2 + 8) as &i8);
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
