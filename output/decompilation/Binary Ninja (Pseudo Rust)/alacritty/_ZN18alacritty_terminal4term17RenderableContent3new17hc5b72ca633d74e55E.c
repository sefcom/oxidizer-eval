
  fn alacritty_terminal::term::RenderableContent::new::hc5b72ca633d74e55(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let r13: i64 = *arg2.byte_offset(0xb8);
    let r15: i32 = *arg2.byte_offset(0xc0);
    let r12: i64 = *arg2.byte_offset(0xc8);
    let mut var_70: i128;
    alacritty_terminal::term::RenderableCursor::new::h18d857dbc051652b(&var_70, arg2);
    let mut var_58: i128;
    let mut var_38: i8;
    
    if *arg2.byte_offset(0x280) != 2
    {
        alacritty_terminal::selection::Selection::to_range::h2a26a8fa10c1a05c(&var_58, 
            arg2.byte_offset(0x258), arg2);
    }
    else
    {
        var_38 = 2;
    }
    
    let rbp_1: i32 = !r12;
    let rax: i32 = core::cmp::Ord::min::h08e004ced85b11eb(r15 + rbp_1, r15 - 1);
    let rdx_2: i32 = *arg2.byte_offset(0x6dc);
    arg1[1] = arg2.byte_offset(0x28);
    arg1[2] = r13 - 1;
    arg1[3] = rbp_1;
    arg1[4] = r13 - 1;
    arg1[5] = rax;
    let zmm0: i128 = var_58;
    let var_48: i128;
    *arg1.byte_offset(0x60) = var_48;
    arg1[0xe] = var_38;
    *arg1.byte_offset(0x50) = zmm0;
    *arg1.byte_offset(0x38) = var_70;
    let result: i64;
    arg1[9] = result;
    *arg1 = r12;
    arg1[6] = arg2.byte_offset(0x2a8);
    arg1[0xf] = rdx_2;
    result
}
