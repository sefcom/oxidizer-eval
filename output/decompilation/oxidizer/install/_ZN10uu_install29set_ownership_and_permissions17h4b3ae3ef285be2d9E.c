fn uu_install::set_ownership_and_permissions(a0: u64, a1: u64, a2: i64) -> long long {
    let v0: u64;  // [bp-0x58]
    let v1: struct24;  // [bp-0x50]
    let v3: u32;  // edx

    v3 = 493;
    if !uu_install::mode::chmod(a0, a1, v3) {
        return uu_install::chown_optional_user_group(a0, a1, a2);
    }
    v1 = std::sys::pal::unix::os::split_paths::bytes_to_path(a0);
    v0 = 3;
    return alloc::boxed::Box<T>::new(&v0) as u64;
}
