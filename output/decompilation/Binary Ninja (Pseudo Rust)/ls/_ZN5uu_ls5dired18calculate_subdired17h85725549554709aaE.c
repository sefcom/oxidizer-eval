
  fn uu_ls::dired::calculate_subdired::h85725549554709aa(arg1: *mut c_void, arg2: i64) -> i64

{
    let rax: i64 = *arg1.byte_offset(0x10);
    let mut rax_3: i64;
    
    if rax == 0
    {
        rax_3 = 2;
    }
    else
    {
        rax_3 = *((rax << 4) + *arg1.byte_offset(8) - 8) + 3;
    }
    
    let mut rcx_2: i64;
    rcx_2 = *arg1.byte_offset(0x28) != 0;
    let rsi: i64 = rax_3 + (rcx_2 << 1);
    /* tailcall */
    alloc::vec::Vec$LT$T$C$A$GT$::push::h0c7c203ff3f53050(arg1.byte_offset(0x18), rsi, arg2 + rsi)
}
