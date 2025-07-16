fn uu_dd::Source::discard_cache(a0: i32, a1: i32, a2: i64, a3: i64) -> long long {
    if !a0 {
        return nix::fcntl::posix_fadvise::posix_fadvise();
    }
    return 29;
}
