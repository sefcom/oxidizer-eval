
  int64_t alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t var_48 = arg3;
    char rcx;
    char var_40 = rcx;
    void var_38;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h6161f52003526c91(&var_38, 
        arg2 + 0x20);
    int64_t var_50 = 0;
    char result;
    int64_t rdx;
    result = _$LT$alloc..collections..vec_deque..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hdd31d0ab13d4ed33(&var_38, &var_48);
    
    if (result & 1)
        return alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::remove::he23600ef9ffacdc5(
            arg1, arg2 + 0x20, rdx);
    
    *arg1 = 2;
    return result;
}
