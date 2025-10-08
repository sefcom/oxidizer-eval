fn starship::context_env::Env::get_env_os(a0: u64, a1: u64) -> long long {
    let v1: u64;  // rdx

    return std::env::var_os(a0, <&T as core::convert::AsRef<U>>::as_ref(a1), v1);
}
