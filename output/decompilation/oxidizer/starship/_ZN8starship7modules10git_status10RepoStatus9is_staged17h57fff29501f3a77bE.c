fn starship::modules::git_status::RepoStatus::is_staged(a0: u64, a1: u64) -> long long {
    let v0: struct24;  // [bp-0x24]
    let v1: Option<struct24>;  // [bp-0x20]
    let v2: core::option::Option<&str>;  // [bp-0x1c]
    let v4: u32;  // ebp
    let v7: &mut [u8];  // rax:rdx
    let v8: &mut [u8];  // rax:rdx
    let v9: &mut [u8];  // rax:rdx

    v0 = 0;
    v7 = core::char::methods::encode_utf8_raw(77, &v0, 4);
    v4 = vvar_14{reg 56} & -0x100 | 1;
    if core::slice::<impl [T]>::starts_with(a0, a1, v7.data_ptr, v7.length) {
        return v4;
    }
    v1 = 0;
    v8 = core::char::methods::encode_utf8_raw(65, &v1, 4);
    if core::slice::<impl [T]>::starts_with(a0, a1, v8.data_ptr, v8.length) {
        return v4;
    }
    v2 = 0;
    v9 = core::char::methods::encode_utf8_raw(84, &v2, 4);
    return core::slice::<impl [T]>::starts_with(a0, a1, v9.data_ptr, v9.length);
}
