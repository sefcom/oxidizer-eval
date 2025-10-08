
  int64_t uu_dd::Dest::discard_cache::hb821f426c899f381(char arg1, int32_t arg2, int64_t arg3, off64_t arg4)

{
    if (arg1 != 1)
        return 0x1d;
    
    /* tailcall */
    return nix::fcntl::posix_fadvise::posix_fadvise::h69de7d1abb645ac3(arg2, arg3, arg4, 4);
}
