
  int64_t uu_chroot::set_supplemental_gids::h6e10f73cbbb1a6e6(gid_t* arg1, uint64_t arg2)

{
    int64_t rax;
    int64_t var_8 = rax;
    
    if (!setgroups(arg2, arg1))
        return 0;
    
    return *__errno_location() << 0x20 | 2;
}
