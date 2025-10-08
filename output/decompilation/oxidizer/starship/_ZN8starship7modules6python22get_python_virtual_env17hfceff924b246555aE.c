fn starship::modules::python::get_python_virtual_env(a0: u64) -> long long {
    let v0: Option<struct24>;  // [bp-0x20]

    v0 = starship::context_env::Env::get_env("VIRTUAL_ENV");
    if !((((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char) {
        return starship::modules::python::get_python_virtual_env::{{closure}}(a0, &v0) as u64;
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
