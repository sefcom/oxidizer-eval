fn uu_dd::Source::discard_cache(a0: u32, a1: i64, a2: i64, a3: i64) -> u64 {
    if !a0 {
        return nix::fcntl::posix_fadvise::posix_fadvise();
    }
    return 29;
}
