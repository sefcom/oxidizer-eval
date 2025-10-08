
  fn uu_ls::dired::calculate_subdired::h7fcfc93e038bf6d6(arg1: *mut c_void, arg2: i64) -> i64

{
    let rax: i64 = *arg1.byte_offset(0x10);
    let mut rax_3: i64;
    
    if rax == 0
    {
        rax_3 = 2;
    }
    else
    {
        rax_3 = *(*arg1.byte_offset(8) + (rax << 4) - 8) + 3;
    }
    
    let mut rcx_2: i64;
    rcx_2 = *arg1.byte_offset(0x28) != 0;
    let rsi: i64 = rax_3 + (rcx_2 << 1);
    /* tailcall */
    alloc::vec::Vec$LT$T$C$A$GT$::push::h6ec75c56954cfbe3(arg1.byte_offset(0x18), rsi, arg2 + rsi)
}
