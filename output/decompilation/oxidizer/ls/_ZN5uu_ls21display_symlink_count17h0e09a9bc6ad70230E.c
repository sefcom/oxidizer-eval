fn uu_ls::display_symlink_count(a0: &struct24, a1: i64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    v0 = a1;
    <T as alloc::string::ToString>::to_string(a0, &v0);
    return v0;
}
