fn starship::modules::scala::get_scala_version(a0: u64, a1: void*) -> long long {
    let v0: struct24;  // [bp-0x78], Other Possible Types: core::option::Option<&str>
    let v1: Option<struct48>;  // [bp-0x48]

    v0 = starship::context::Context::exec_cmd(a1, "scala-cli", "version", 2);
    v1 = core::option::Option<T>::filter(&v0);
    if !((((0 ^ v1 as i64) & (0 ^ -(v1 as i64))) >> 63) as char) {
        v0 = starship::bug_report::get_shell_version::{{closure}}(&v1);
    }
    return core::option::Option<T>::or_else(a0, &v0, a1);
}
