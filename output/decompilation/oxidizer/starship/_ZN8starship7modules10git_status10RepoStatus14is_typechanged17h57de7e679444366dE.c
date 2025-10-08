fn starship::modules::git_status::RepoStatus::is_typechanged(a0: u64, a1: u64) -> long long {
    let v0: u64;  // [bp-0x18]
    let v1: u32;  // [bp-0x14]
    let v3: u64;  // rax
    let v5: &mut [u8];  // rax:rdx

    v0 = v3;
    v1 = 0;
    v5 = core::char::methods::encode_utf8_raw(84, &v1, 4);
    return core::slice::<impl [T]>::ends_with(a0, a1, v5.data_ptr, v5.length);
}
