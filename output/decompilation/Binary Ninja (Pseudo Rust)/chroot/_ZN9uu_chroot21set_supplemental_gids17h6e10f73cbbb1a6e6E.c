
  fn uu_chroot::set_supplemental_gids::h6e10f73cbbb1a6e6(arg1: *mut gid_t, arg2: u64) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    
    if setgroups(arg2, arg1) == 0
    {
        return 0;
    }
    
    *__errno_location() << 0x20 | 2
}
