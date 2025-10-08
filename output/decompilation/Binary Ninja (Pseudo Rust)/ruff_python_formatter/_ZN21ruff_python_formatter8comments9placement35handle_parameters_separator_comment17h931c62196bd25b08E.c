
  fn ruff_python_formatter::comments::placement::handle_parameters_separator_comment::h931c62196bd25b08(arg1: *mut i128, arg2: *mut i128, arg3: u64, arg4: *mut i8, arg5: u64, arg6: i32) -> i64

{
    let rbp: u64;
    let var_8: u64 = rbp;
    let r15: u64;
    let var_10: u64 = r15;
    let mut var_48: i128;
    let r12: u64;
    ruff_python_formatter::other::parameters::find_parameter_separators::h04892e8d923259e9(&var_48, 
        arg4, arg5, arg3, arg5, arg6, rbp, r12, r15);
    let var_38: i32;
    let var_78: i32 = var_38;
    let mut var_88: i128 = var_48;
    let var_24: i32;
    let var_58: i32 = var_24;
    let mut rdi_1: *mut c_void = &*var_88[4];
    
    if var_88 == 0
    {
        rdi_1 = nullptr;
    }
    
    let var_34: i128;
    let mut var_68: i128 = var_34;
    let mut rsi_1: *mut i32 = &*var_68[4];
    
    if var_68 == 0
    {
        rsi_1 = nullptr;
    }
    
    let rbp_1: i32 = arg2[4];
    let r15_1: i8 = *arg2.byte_offset(0x48);
    let mut result: i32 = ruff_python_formatter::other::parameters::assign_argument_separator_comment_placement::h5db81c074307048e(rdi_1, rsi_1, rbp_1, r15_1);
    
    if result != 4
    {
        result = *arg2.byte_offset(0x44);
        *arg1.byte_offset(8) = *arg2;
        *arg1.byte_offset(0x18) = rbp_1;
        *arg1.byte_offset(0x1c) = result;
        arg1[2] = 0;
        *arg1.byte_offset(0x21) = r15_1;
        *arg1 = 0x60;
    }
    else
    {
        arg1[4] = arg2[4];
        let zmm0: i128 = *arg2;
        let zmm1_1: i128 = arg2[1];
        let zmm2_1: i128 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2_1;
        arg1[1] = zmm1_1;
        *arg1 = zmm0;
    }
    
    result
}
