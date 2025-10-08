fn fd::set_working_dir(a0: i64) -> u64 {
    let v0: Result<struct24, struct24>;  // [bp-0x48]
    let v1: alloc::string::String;  // [bp-0x30]
    let v3: u64;  // r14
    let v4: struct17;  // rbx

    if (((0 ^ *((a0 + 384) as &i64)) & (0 ^ -(*((a0 + 384) as &i64)))) >> 63) as char {
        return 0;
    }
    v3 = *((a0 + 392) as &i64);
    v4 = *((a0 + 400) as &i64);
    if fd::filesystem::is_existing_directory(v3, v4) {
        return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(std::env::set_current_dir(a0 + 384), v3, v4);
    }
    v0 = alloc::string::String::from_utf8_lossy(v3, v4);
    v1 = format!("The '--base-directory' path '{}' is not a directory.", &v0);
    return anyhow::error::<impl anyhow::Error>::msg(&v1);
}
