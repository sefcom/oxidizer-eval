fn uu_pwd::physical_path(a0: u32) -> u64 {
    std::env::current_dir(a0);
    return a0;
}
