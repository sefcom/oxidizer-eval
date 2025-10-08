fn starship::modules::git_status::RepoStatus::is_modified(a0: u64, a1: u64) -> long long {
    let v0: Option<struct8>;  // [bp-0x18], Other Possible Types: u64
    let v1: struct24;  // [bp-0x14]
    let v3: u64;  // rax
    let v5: u64;  // rax
    let v6: &mut [u8];  // rax:rdx
    let v7: &mut [u8];  // rax:rdx

    v0 = v3;
    v0 = 0;
    v6 = core::char::methods::encode_utf8_raw(77, &v0, 4);
    v5 = core::slice::<impl [T]>::ends_with(a0, a1, v6.data_ptr, v6.length);
    if v5 {
        return v5 & -0x100 | 1;
    }
    v1 = 0;
    v7 = core::char::methods::encode_utf8_raw(65, &v1, 4);
    return core::slice::<impl [T]>::ends_with(a0, a1, v7.data_ptr, v7.length);
}
