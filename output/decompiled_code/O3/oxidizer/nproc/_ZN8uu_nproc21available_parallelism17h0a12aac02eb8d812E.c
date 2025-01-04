fn uu_nproc::available_parallelism(a0: u32, a1: u32, a2: u32) -> u64 {
    let v1: u64;  // rbx

    if !std::thread::available_parallelism() {
        return v1;
    }
    return 1;
}
