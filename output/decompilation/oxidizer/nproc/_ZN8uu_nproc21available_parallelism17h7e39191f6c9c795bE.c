fn uu_nproc::available_parallelism() -> u64 {
    let v2: u64;  // rbx
    let v3: core::result::Result<core::num::nonzero::NonZero<usize>, std::io::error::Error>;  // rax:rdx

    v3 = std::thread::available_parallelism();
    return v2;
}
