fn uu_env::apply_removal_of_all_env_vars(a0: i64) -> int {
    let v0: std::env::VarsOs;  // [bp-0x70]
    let v1: core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>;  // [bp-0x50]

    if !*((a0 + 152) as &i8) {
        return;
    }
    v0 = std::env::vars_os();
    loop {
        v1 = <std::env::VarsOs as core::iter::traits::iterator::Iterator>::next(&v0);
        if (((0 ^ v1 as i64) & (0 ^ -(v1 as i64))) >> 63) as char {
            break;
        }
        std::env::remove_var(&v1);
    }
    return;
}
