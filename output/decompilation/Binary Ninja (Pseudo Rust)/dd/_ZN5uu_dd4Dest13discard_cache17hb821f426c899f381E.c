
  fn uu_dd::Dest::discard_cache::hb821f426c899f381(arg1: i8, arg2: i32, arg3: i64, arg4: off64_t) -> i64

{
    if arg1 != 1
    {
        return 0x1d;
    }
    
    /* tailcall */
    nix::fcntl::posix_fadvise::posix_fadvise::h69de7d1abb645ac3(arg2, arg3, arg4, 4)
}
