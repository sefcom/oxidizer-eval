fn fd::cli::default_num_threads() -> u64 {
    let v4: u64;  // rdi
    let v5: core::result::Result<core::num::nonzero::NonZero<usize>, std::io::error::Error>;  // rax:rdx

    v5 = std::thread::available_parallelism();
    return core::cmp::Ord::min(v4, 64);
}
