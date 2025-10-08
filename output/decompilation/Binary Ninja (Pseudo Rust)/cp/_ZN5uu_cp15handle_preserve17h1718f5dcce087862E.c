
  fn uu_cp::handle_preserve::h1718f5dcce087862(arg1: *mut i64, arg2: i8, arg3: i8, arg4: *mut i64)

{
    if (arg2 & 1) == 0
    {
        *arg1 = -0x7ffffffffffffff4;
        return;
    }
    
    let mut var_90: *mut c_void;
    uu_cp::copy_attributes::_$u7b$$u7b$closure$u7d$$u7d$::hb6503ed0832a970e(&var_90, arg4);
    let rax: *mut c_void = var_90;
    let var_80: i128;
    let var_70: i128;
    
    if (arg3 & 1) == 0
    {
        if rax != -0x7ffffffffffffff4
        {
            let var_60: i64;
            let var_28_1: i64 = var_60;
            let var_38_1: i128 = var_70;
            let var_48_1: i128 = var_80;
            let mut var_58: i128 = var_90;
            uu_cp::show_error_if_needed::h37308d2f7c80265f(&var_58);
            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h9ee7df58e7d9e41e(&var_90);
        }
        
        *arg1 = -0x7ffffffffffffff4;
    }
    else if rax == -0x7ffffffffffffff4
    {
        *arg1 = -0x7ffffffffffffff4;
    }
    else
    {
        *arg1.byte_offset(0x28) = var_70;
        *arg1.byte_offset(0x18) = var_80;
        let var_88: i128;
        *arg1.byte_offset(8) = var_88;
        *arg1 = rax;
    }
}
