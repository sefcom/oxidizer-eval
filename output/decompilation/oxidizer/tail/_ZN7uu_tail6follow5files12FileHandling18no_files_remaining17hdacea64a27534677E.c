fn uu_tail::follow::files::FileHandling::no_files_remaining(a0: i64, a1: u32) -> long long {
    let v1: u64;  // rbx
    let v2: u32;  // ebx

    if !*((a0 + 48) as &i64) {
        return v2 & -0x100 | 1;
    }
    v1 = a1;
    if !uu_tail::follow::files::FileHandling::files_remaining(a0) {
        return v1 & -0x100 | (v1 ^ 1) & 1;
    }
    return 0;
}
