
  int64_t uu_chroot::set_gid::h96b8c03f678d01e3(gid_t arg1)

{
    int64_t rax;
    int64_t var_8 = rax;
    
    if (!setgid(arg1))
        return 0;
    
    return *__errno_location() << 0x20 | 2;
}
