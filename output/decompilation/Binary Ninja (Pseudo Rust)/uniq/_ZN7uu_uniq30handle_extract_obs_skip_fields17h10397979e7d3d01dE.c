
  fn uu_uniq::handle_extract_obs_skip_fields::h10397979e7d3d01d(arg1: *mut i64, arg2: i64, arg3: size_t, arg4: *mut i64) -> i64

{
    let mut var_a8: i64 = 0;
    let var_a0: i64 = 4;
    let var_98: i64 = 0;
    let mut var_c9: i8 = 0;
    let mut var_ca: i8 = 0;
    let mut var_60: i64 = arg2;
    let var_58: i64 = arg2 + arg3;
    let var_50: *mut i8 = &var_ca;
    let var_48: *mut i8 = &var_c9;
    let var_40: *mut i64 = &var_a8;
    let mut var_90: ();
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h12fe7ef8e84b82a1(&var_90, &var_60);
    let mut var_c8: i128;
    
    if var_98 == 0
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, arg2, arg3);
        let var_b8: i64;
        arg1[2] = var_b8;
        *arg1 = var_c8;
    }
    else
    {
        if var_ca == 0
        {
            let mut var_78: i128;
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::h251793bacb3d3b4d(&var_78, var_a0);
            
            if *arg4 != -0x8000000000000000
            {
                let rdi_4: i64 = arg4[1];
                let mut rax_3: i64;
                let mut rdx_2: u64;
                rax_3 = core::slice::iter::Iter$LT$T$GT$::make_slice::hefccf66255f5452a(rdi_4, 
                    arg4[2] + rdi_4);
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3b7ebe941ba9df82(&var_78, rax_3, 
                    rdx_2);
            }
            
            var_c8 = var_78;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::haaebd7cc9f7d6887(arg4);
            let var_68: i64;
            arg4[2] = var_68;
            *arg4 = var_c8;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::haaebd7cc9f7d6887(arg4);
            *arg4 = -0x8000000000000000;
        }
        
        let var_80: i64;
        
        if var_80 >= 2
        {
            let var_88: i64;
            let mut var_38: i128;
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::h251793bacb3d3b4d(&var_38, var_88);
            let var_28: i64;
            arg1[2] = var_28;
            *arg1 = var_38;
        }
        else
        {
            *arg1 = -0x8000000000000000;
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h9e7c6a67d86540d0(&var_90);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h9e7c6a67d86540d0(&var_a8)
}
