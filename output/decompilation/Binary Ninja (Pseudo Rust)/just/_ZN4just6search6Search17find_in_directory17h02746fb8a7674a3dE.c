
  fn just::search::Search::find_in_directory::h02746fb8a7674a3d(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut i8, arg5: u64) -> u64

{
    let mut var_58: i64;
    just::search::Search::justfile::h0dde78ec0504c748(&var_58, arg2, arg3, arg4, arg5);
    let rax: i64 = var_58;
    let mut var_50: i128;
    let mut var_40: u64;
    
    if rax != -0x7ffffffffffffffa
    {
        arg1[2] = var_40;
        arg1[1] = var_50;
        *arg1.byte_offset(8) = rax;
        *arg1 = -0x8000000000000000;
        return rax;
    }
    
    let var_18: u64 = var_40;
    let mut var_28: i128 = var_50;
    just::search::Search::working_directory_from_justfile::hd51585d6fd438247(&var_58, *var_28[8], 
        var_40);
    let rax_1: i64 = var_58;
    
    if rax_1 != -0x7ffffffffffffffa
    {
        arg1[2] = var_40;
        arg1[1] = var_50;
        *arg1.byte_offset(8) = rax_1;
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_28);
    }
    
    let var_30: u64 = var_40;
    var_40 = var_50;
    *var_50[8] = var_18;
    let zmm0_1: i128 = var_28;
    var_58 = zmm0_1;
    let var_38: i64;
    arg1[2] = var_38;
    *arg1.byte_offset(0x28) = var_30;
    arg1[1] = *var_50[8];
    *arg1.byte_offset(0x18) = var_40;
    *arg1 = zmm0_1;
    var_40
}
