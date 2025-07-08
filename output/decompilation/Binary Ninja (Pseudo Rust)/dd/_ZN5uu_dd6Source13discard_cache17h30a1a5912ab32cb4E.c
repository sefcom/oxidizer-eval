
  fn uu_dd::Source::discard_cache::h30a1a5912ab32cb4(arg1: i32, arg2: i32, arg3: i64, arg4: off64_t) -> i64

{
    if arg1 == 0
    {
        /* tailcall */
        return nix::fcntl::posix_fadvise::posix_fadvise::ha1afd1e32ddb5f9d(arg2, arg3, arg4, 4);
    }
    
    0x1d
}
