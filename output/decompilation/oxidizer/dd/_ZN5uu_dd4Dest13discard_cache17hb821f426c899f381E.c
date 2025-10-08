fn uu_dd::Dest::discard_cache(a0: i8, a1: i32, a2: i64, a3: i64) -> long long {
    if a0 == 1 {
        return nix::fcntl::posix_fadvise::posix_fadvise();
    }
    return 29;
}
