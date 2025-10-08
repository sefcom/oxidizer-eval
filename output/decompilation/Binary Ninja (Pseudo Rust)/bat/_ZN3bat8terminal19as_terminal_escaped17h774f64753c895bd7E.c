
  fn bat::terminal::as_terminal_escaped::h774f64753c895bd7(arg1: *mut i128, arg2: i32, arg3: u8, arg4: i64, arg5: i64, arg6: i8, arg7: i8, arg8: i8, arg9: i64) -> i64

{
    if arg5 == 0
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(arg1, arg4, 0);
    }
    
    let mut r15: i32 = 0x15;
    let mut rax_1: i32;
    let mut rbx_1: u8;
    let mut rbp: u8;
    let mut r13_1: u8;
    
    if arg7 == 0
    {
        r13_1 = 0;
        rbp = 0;
        rbx_1 = 0;
        rax_1 = 0x15;
        
        if (arg9 & 1) != 0
        {
            r15 = bat::terminal::to_ansi_color::h5249a5ef8d27cb4b(arg9 >> 8, arg6);
        }
    }
    else
    {
        rax_1 = bat::terminal::to_ansi_color::h5249a5ef8d27cb4b(arg2, arg6);
        rbx_1 = arg3 & 1;
        r13_1 = arg3 >> 1 & 1;
        rbp = arg3 >> 2 & arg8;
        
        if (arg9 & 1) != 0
        {
            r15 = bat::terminal::to_ansi_color::h5249a5ef8d27cb4b(arg9 >> 8, arg6);
        }
    }
    
    let var_48: u8 = rbx_1;
    let var_47: i8 = 0;
    let var_46: u8 = rbp;
    let var_45: u8 = r13_1;
    let var_44: i32 = 0;
    let var_40: i8 = 0;
    let var_3f: i32 = rax_1;
    let var_3b: i32 = r15;
    let mut var_78: i64 = -0x8000000000000000;
    let var_70: i64 = arg4;
    let var_68: i64 = arg5;
    let var_60: i64 = -0x7ffffffffffffffe;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hf5336000855022da(arg1, 
        &var_78);
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_78)
}
