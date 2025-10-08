
  double zoxide::db::dir::Dir::score::h9351a6bad969e8fa(int64_t arg1, int64_t arg2, double arg3)

{
    int64_t rax = 0;
    
    if (arg2 >= arg1)
        rax = arg2 - arg1;
    
    if (rax < 0xe10)
        return arg3 * 4.0;
    
    if (rax < 0x15180)
        return arg3 * 2.0;
    
    int64_t rcx;
    rcx = rax < 0x93a80;
    return arg3 * *(&data_418cd0 + (rcx << 3));
}
