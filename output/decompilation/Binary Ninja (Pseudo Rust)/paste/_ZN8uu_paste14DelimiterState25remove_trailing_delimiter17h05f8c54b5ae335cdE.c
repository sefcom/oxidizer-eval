
  fn uu_paste::DelimiterState::remove_trailing_delimiter::h05f8c54b5ae335cd(arg1: i64, arg2: i64, arg3: *mut c_void)

{
    if arg1 != 0 && arg2 != 0
    {
        let rcx_1: i64 = *arg3.byte_offset(0x10);
        let rax: i64 = rcx_1 - arg2;
        
        if rcx_1 >= arg2
        {
            /* tailcall */
            return alloc::vec::Vec$LT$T$C$A$GT$::truncate::h179dc526cb7331a2(arg3, rax);
        }
        
        if rcx_1 != 0
        {
            let var_8: i64 = rax;
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: output_len == …");
            /* no return */
        }
    }
}
