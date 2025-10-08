
  fn bat::input::InputReader::read_line::h6988384c287f514e(arg1: *mut i16, arg2: *mut c_void, arg3: *mut i64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let rdx: u64 = *arg2.byte_offset(0x10);
    
    if rdx != 0
    {
        let rax_2: i64 = alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h6ae3258b718e1a7e(arg3, 
            *arg2.byte_offset(8), rdx);
        *arg2.byte_offset(0x10) = 0;
        *arg1 = 0x100;
        return rax_2;
    }
    
    let rdx_1: u32 = *arg2.byte_offset(0x28);
    let rsi_1: i64 = *arg2.byte_offset(0x18);
    let rax_3: *mut c_void = *arg2.byte_offset(0x20);
    
    if rdx_1 == 3
    {
        /* tailcall */
        return bat::input::read_utf16_line::h0b621ced04bc80c9(arg1, rsi_1, rax_3, arg3, 0, 0xa);
    }
    
    if rdx_1 == 4
    {
        /* tailcall */
        return bat::input::read_utf16_line::h0b621ced04bc80c9(arg1, rsi_1, rax_3, arg3, 0xa, 0);
    }
    
    let mut rax_6: i8;
    let mut rdx_7: i64;
    rax_6 = (*rax_3.byte_offset(0x70))(rsi_1, 0xa, arg3);
    
    if (rax_6 & 1) != 0
    {
        *arg1.byte_offset(8) = rdx_7;
        *arg1 = 1;
        return rax_6;
    }
    
    *arg1.byte_offset(1) = rdx_7 != 0;
    *arg1 = 0;
    rax_6
}
