
  int64_t uu_dd::Source::discard_cache::h504f8f38f4fa8955(int32_t arg1, int32_t arg2, int64_t arg3, off64_t arg4)

{
    if (!arg1)
        /* tailcall */
        return nix::fcntl::posix_fadvise::posix_fadvise::h69de7d1abb645ac3(arg2, arg3, arg4, 4);
    
    return 0x1d;
}
