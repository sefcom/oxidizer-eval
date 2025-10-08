
  fn alacritty::cli::TerminalOptions::command::ha3af24ef4be7c6da(arg1: *mut i128, arg2: *mut c_void, arg3: i64)

{
    if arg3 == 0
    {
        *arg1 = -0x7fffffffffffffff;
        return;
    }
    
    let mut var_48: i128;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_48, 
        arg2);
    let mut var_30: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha7488b37c10c715d(&var_30, arg2.byte_offset(0x18), arg3 - 1);
    let zmm0_1: i128 = var_48;
    let var_78_1: i128 = zmm0_1;
    let zmm1_1: i128 = var_30;
    arg1[2] = *zmm1_1[8];
    let var_20: i64;
    *arg1.byte_offset(0x28) = var_20;
    let var_38: i64;
    arg1[1] = var_38;
    *arg1.byte_offset(0x18) = zmm1_1;
    *arg1 = zmm0_1;
}
