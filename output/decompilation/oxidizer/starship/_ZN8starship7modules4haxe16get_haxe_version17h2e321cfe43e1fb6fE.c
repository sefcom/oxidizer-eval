fn starship::modules::haxe::get_haxe_version(a0: u64, a1: void*) -> long long {
    let v0: Option<struct24>;  // [bp-0x30]

    v0 = starship::modules::haxe::get_haxerc_version(a1);
    return core::option::Option<T>::or_else(a0, &v0, a1);
}
