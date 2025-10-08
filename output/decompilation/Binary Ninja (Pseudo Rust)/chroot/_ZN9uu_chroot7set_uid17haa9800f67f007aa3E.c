
  fn uu_chroot::set_uid::haa9800f67f007aa3(arg1: uid_t) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    
    if setuid(arg1) == 0
    {
        return 0;
    }
    
    *__errno_location() << 0x20 | 2
}
