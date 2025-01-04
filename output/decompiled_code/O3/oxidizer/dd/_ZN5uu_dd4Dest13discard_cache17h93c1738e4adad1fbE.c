fn uu_dd::Dest::discard_cache(a0: u8, a1: i64, a2: i64, a3: i64) -> u64 {
    if a0 == 1 {
        return nix::fcntl::posix_fadvise::posix_fadvise();
    }
    return 29;
}
