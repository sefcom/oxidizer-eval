
  int64_t zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::add_unchecked::hc55a6d1c0639e47d(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    void var_40;
    core::ops::function::FnOnce::call_once::h87510911592f3d7a(&var_40, arg2, arg3);
    int64_t zmm0;
    int64_t var_28 = zmm0;
    int64_t rcx;
    int64_t var_20 = rcx;
    int64_t result = alloc::vec::Vec$LT$T$C$A$GT$::push::h9145bd152ca9b01d(arg1, &var_40);
    arg1[7] = 1;
    return result;
}
