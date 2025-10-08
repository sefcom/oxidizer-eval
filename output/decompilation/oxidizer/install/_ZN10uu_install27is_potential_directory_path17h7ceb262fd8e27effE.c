fn uu_install::is_potential_directory_path(a0: u64, a1: u64) -> long long {
    let v1: u64;  // rax

    v1 = a0 + a1;
    if !!v1 - 1 && !!a1 && v1 - 1 == "/" {
        return v1 - 1 & -0x100 | 1;
    }
    return std::path::Path::is_dir(a0, a1);
}
