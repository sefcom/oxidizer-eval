fn starship::context::Context::new_module(a0: u64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v5: u32;  // rdx

    v0 = v2;
    v3 = starship::config::StarshipConfig::get_module_config(a1 + 488, a2, a3);
    starship::module::Module::new(a0, a2, a3, starship::modules::description(a2, a3), v5, v3);
    return a0;
}
