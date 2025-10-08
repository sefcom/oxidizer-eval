
  fn uu_sort::merge::merge::h185e646314122f60(arg1: *mut i128, arg2: i64, arg3: *mut c_void, arg4: *mut i64, arg5: *mut c_void) -> u64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut rdx: i64 = 0;
    
    if !(0 + -(*arg4))
    {
        rdx = arg4[1];
    }
    
    let mut result: u64;
    let mut rdx_1: i64;
    result = uu_sort::merge::replace_output_file_in_input_files::hfdb0f95794ab3c79(arg1, arg2, rdx, 
        arg4[2], arg5);
    
    if result != 0
    {
        core::ptr::drop_in_place$LT$uu_sort..Output$GT$::h7def0b71731a8447(arg4);
        return result;
    }
    
    let rsi_1: *mut c_void = arg1.byte_offset(arg2 * 0x18);
    
    if *arg3.byte_offset(0x30) != -0x8000000000000000
    {
        /* tailcall */
        return uu_sort::merge::merge_with_file_limit::h70249b242f083bc2(arg1, rsi_1, arg3, arg4, 
            arg5);
    }
    
    /* tailcall */
    uu_sort::merge::merge_with_file_limit::hb24f5112306a39a4(arg1, rsi_1, arg3, arg4, arg5)
}
