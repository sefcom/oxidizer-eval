fn uu_nproc::num_cpus_all(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u32;  // rdi
    let v5: u32;  // rsi
    let v6: u32;  // rdx

    v0 = v2;
    v3 = sysconf(83);
    if v3 == 1 {
        return uu_nproc::available_parallelism(v4, v5, v6);
    } else if v3 <= 1 {
        return 1;
    } else {
        return v3;
    }
}
