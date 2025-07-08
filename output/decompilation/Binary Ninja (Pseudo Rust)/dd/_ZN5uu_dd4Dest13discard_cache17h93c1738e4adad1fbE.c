
  fn uu_dd::Dest::discard_cache::h93c1738e4adad1fb(arg1: i8, arg2: i32, arg3: i64, arg4: off64_t) -> i64

{
    if arg1 != 1
    {
        return 0x1d;
    }
    
    /* tailcall */
    nix::fcntl::posix_fadvise::posix_fadvise::ha1afd1e32ddb5f9d(arg2, arg3, arg4, 4)
}
