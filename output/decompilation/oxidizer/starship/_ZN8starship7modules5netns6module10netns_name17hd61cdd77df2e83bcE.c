fn starship::modules::netns::module::netns_name(a1: i64) -> Option<struct24> {
    let a0: u64;  // rdi
    let v0: &mut [u8];  // [bp-0x50], Other Possible Types: struct24
    let v1: Option<struct48>;  // [bp-0x38]

    v1 = starship::context::Context::exec_cmd(a1, "ip", "netns", 2);
    if !((((0 ^ v1 as i64) & (0 ^ -(v1 as i64))) >> 63) as char) {
        v0 = starship::bug_report::get_shell_version::{{closure}}(&v1);
    }
    core::option::Option<T>::filter(a0, &v0);
    return;
}
