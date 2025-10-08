
  int64_t uu_join::State::reset::hf11a3d581915b2af(int64_t* arg1, int64_t* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t* rdi = arg1[1];
    int64_t rsi = arg1[2];
    arg1[2] = 0;
    int64_t result =
        core::ptr::drop_in_place$LT$$u5b$uu_join..Line$u5d$$GT$::h87a13497c0ddc073(rdi, rsi);
    
    if (!(0 + -(*arg2)))
        /* tailcall */
        return alloc::vec::Vec$LT$T$C$A$GT$::push::he2e51fac3c0fc166(arg1, arg2);
    
    return result;
}
