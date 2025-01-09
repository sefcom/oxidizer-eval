fn uu_dd::Source::discard_cache(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    if !a0 {
        return nix::fcntl::posix_fadvise::posix_fadvise();
    }
    return 29;
}
