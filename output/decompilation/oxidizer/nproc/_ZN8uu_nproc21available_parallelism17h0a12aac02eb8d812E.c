fn uu_nproc::available_parallelism() -> u64 {
    let v1: u64;  // rbx

    if !std::thread::available_parallelism() {
        return v1;
    }
    return v1;
}
