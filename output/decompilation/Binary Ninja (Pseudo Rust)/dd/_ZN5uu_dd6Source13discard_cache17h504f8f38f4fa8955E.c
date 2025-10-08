
  fn uu_dd::Source::discard_cache::h504f8f38f4fa8955(arg1: i32, arg2: i32, arg3: i64, arg4: off64_t) -> i64

{
    if arg1 == 0
    {
        /* tailcall */
        return nix::fcntl::posix_fadvise::posix_fadvise::h69de7d1abb645ac3(arg2, arg3, arg4, 4);
    }
    
    0x1d
}
