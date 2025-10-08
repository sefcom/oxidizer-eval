fn uu_install::mode::chmod(a0: u64, a1: u64, a2: u32) -> char {
    let v1: u64;  // rax

    v1 = std::fs::set_permissions(a0, a1, a2);
    if v1 {
        uu_install::mode::chmod::{{closure}}(a0, a1, v1);
    }
    return v1;
}
