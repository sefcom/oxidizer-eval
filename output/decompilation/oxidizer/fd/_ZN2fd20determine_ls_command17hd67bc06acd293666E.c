fn fd::determine_ls_command(a0: u64, a1: i8) -> long long {
    let v0: u64;  // [bp-0x8]
    let v1: core::result::Result<u64, core::num::error::ParseIntError>;  // [bp-0x1]
    let v3: u64;  // rax

    v0 = v3;
    v1 = a1;
    fd::determine_ls_command::{{closure}}(a0, &v1);
    return v0;
}
