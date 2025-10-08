fn fd::cli::Opts::threads(a0: u64) -> long long {
    if !a0 {
        return fd::cli::default_num_threads();
    }
    return a0;
}
