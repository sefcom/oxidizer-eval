
  void uu_paste::DelimiterState::remove_trailing_delimiter::h05f8c54b5ae335cd(int64_t arg1, int64_t arg2, void* arg3)

{
    if (arg1 && arg2)
    {
        int64_t rcx_1 = *(arg3 + 0x10);
        int64_t rax = rcx_1 - arg2;
        
        if (rcx_1 >= arg2)
            /* tailcall */
            return alloc::vec::Vec$LT$T$C$A$GT$::truncate::h179dc526cb7331a2(arg3, rax);
        
        if (rcx_1)
        {
            int64_t var_8 = rax;
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: output_len == …");
            /* no return */
        }
    }
}
