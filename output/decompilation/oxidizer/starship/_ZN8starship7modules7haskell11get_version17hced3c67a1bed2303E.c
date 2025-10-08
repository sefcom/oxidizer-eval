fn starship::modules::haskell::get_version(a0: u64, a1: u64) -> long long {
    let v0: Option<struct24>;  // [bp-0x30]

    v0 = starship::modules::haskell::get_snapshot(a1);
    return core::option::Option<T>::or_else(a0, &v0, a1);
}
