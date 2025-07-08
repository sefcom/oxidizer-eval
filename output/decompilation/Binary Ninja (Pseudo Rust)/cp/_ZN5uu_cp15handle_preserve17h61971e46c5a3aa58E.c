
  fn uu_cp::handle_preserve::h61971e46c5a3aa58(arg1: *mut i64, arg2: i8, arg3: i8, arg4: *mut i64)

{
    if arg2 == 0
    {
        *arg1 = 0xd;
        return;
    }
    
    let mut var_98: *mut c_void;
    uu_cp::copy_attributes::_$u7b$$u7b$closure$u7d$$u7d$::h8b228b7c00abfad5(&var_98, arg4);
    let rax: *mut c_void = var_98;
    let var_88: i128;
    let var_78: i128;
    let var_68: i128;
    
    if arg3 == 0
    {
        if rax != 0xd
        {
            let var_28_1: i128 = var_68;
            let var_38_1: i128 = var_78;
            let var_48_1: i128 = var_88;
            let mut var_58: i128 = var_98;
            uu_cp::show_error_if_needed::h934143ac50374c6e(&var_58);
            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&var_58);
        }
        
        *arg1 = 0xd;
    }
    else if rax == 0xd
    {
        *arg1 = 0xd;
    }
    else
    {
        arg1[7] = *var_68[8];
        *arg1.byte_offset(0x28) = var_78;
        *arg1.byte_offset(0x18) = var_88;
        let var_90: i128;
        *arg1.byte_offset(8) = var_90;
        *arg1 = rax;
    }
}
