
  fn uu_dd::Output::new_file::h911369a13f3ee1ab(arg1: *mut i8, arg2: i64, arg3: i64, arg4: *mut c_void) -> *mut i8

{
    let mut var_40: i64;
    uu_dd::Output::new_file::open_dst::h968e64089c53b51a(&var_40, arg2, arg3, 
        *arg4.byte_offset(0x91), *arg4.byte_offset(0x92), arg4.byte_offset(0x96));
    let mut var_50: i64;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h68ea94665ebd88f8(&var_50, &var_40);
    let rax: i64 = var_50;
    let var_48: i32;
    
    if rax == 0
    {
        let mut rbp_1: i32 = var_48;
        let mut var_54: i32 = rbp_1;
        
        if *arg4.byte_offset(0x93) == 0
        {
            let rax_1: i64 =
                std::fs::File::set_len::hd21acd2eeb028efb(&var_54, *arg4.byte_offset(0x88));
            var_40 = rax_1;
            
            if rax_1 != 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hdf0c997779a17efc(&var_40);
                rbp_1 = var_54;
            }
        }
        
        uu_dd::Output::prepare_file::h9725a129054f1a6a(arg1, rbp_1, arg4);
    }
    else
    {
        *arg1.byte_offset(8) = rax;
        *arg1.byte_offset(0x10) = var_48;
        *arg1 = 4;
    }
    arg1
}
