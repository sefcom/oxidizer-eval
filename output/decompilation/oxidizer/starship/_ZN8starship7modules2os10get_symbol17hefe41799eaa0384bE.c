fn starship::modules::os::get_symbol(a0: u64, a1: u8) -> long long {
    let v1: u32;  // rdx

    return core::option::Option<T>::or_else(starship::configs::os::OSConfig::get_symbol(a0, a1), v1, a1);
}
