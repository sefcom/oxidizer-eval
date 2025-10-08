
  int64_t uu_chroot::set_uid::haa9800f67f007aa3(uid_t arg1)

{
    int64_t rax;
    int64_t var_8 = rax;
    
    if (!setuid(arg1))
        return 0;
    
    return *__errno_location() << 0x20 | 2;
}
