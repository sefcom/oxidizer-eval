fn fd::cli::Opts::normalize_path(a1: i8, a2: &[u8]) -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct20;  // [bp-0xb0], Other Possible Types: struct24
    let v1: u64;  // [bp-0xa8]
    let v2: struct20;  // [bp-0x70], Other Possible Types: struct24
    let v4: u32;  // edx

    if (a1 & 1) {
        v2 = normpath::imp::normalize(a2);
        v0 = core::result::Result<T,E>::unwrap(&v2);
        v2 = fd::filesystem::absolute_path(v1, v0.field_16);
        core::result::Result<T,E>::unwrap(a0, &v2);
        return;
    }
    v0 = std::path::Path::components(a2);
    v2 = std::path::Path::components(".");
    if !<std::path::Components as core::cmp::PartialEq>::eq(&v0, &v2) {
        std::sys::pal::unix::os::split_paths::bytes_to_path(a0, v4);
        return;
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "./");
    return;
}
