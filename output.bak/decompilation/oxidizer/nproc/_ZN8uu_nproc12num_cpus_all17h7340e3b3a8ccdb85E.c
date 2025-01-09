fn uu_nproc::num_cpus_all() -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax

    v0 = v2;
    v3 = sysconf(83);
    if v3 == 1 {
        return uu_nproc::available_parallelism();
    } else if v3 <= 1 {
        return 1;
    } else {
        return v3;
    }
}
