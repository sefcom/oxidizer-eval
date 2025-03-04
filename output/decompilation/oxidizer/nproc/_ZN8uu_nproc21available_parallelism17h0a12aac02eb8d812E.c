fn uu_nproc::available_parallelism() -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rbx

    v1 = std::thread::available_parallelism();
    return v2;
}
