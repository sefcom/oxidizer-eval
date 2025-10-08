
  fn uu_chroot::set_gid::h96b8c03f678d01e3(arg1: gid_t) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    
    if setgid(arg1) == 0
    {
        return 0;
    }
    
    *__errno_location() << 0x20 | 2
}
