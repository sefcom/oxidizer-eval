
  int64_t uu_dd::Dest::discard_cache::h93c1738e4adad1fb(char arg1, int32_t arg2, int64_t arg3, off64_t arg4)

{
    if (arg1 != 1)
        return 0x1d;
    
    /* tailcall */
    return nix::fcntl::posix_fadvise::posix_fadvise::ha1afd1e32ddb5f9d(arg2, arg3, arg4, 4);
}
