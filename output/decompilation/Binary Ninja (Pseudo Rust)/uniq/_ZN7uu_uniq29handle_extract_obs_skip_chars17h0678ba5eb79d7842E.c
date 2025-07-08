
  fn uu_uniq::handle_extract_obs_skip_chars::h0678ba5eb79d7842(arg1: u64, arg2: i64, arg3: size_t, arg4: *mut i64) -> i64

{
    let mut var_98: i64 = 0;
    let var_90: i64 = 4;
    let var_88: i64 = 0;
    let mut var_48: i64 = arg2;
    let var_40: i64 = arg2 + arg3;
    core::str::validations::next_code_point::h660536d7d7533ae5(&var_48, arg1);
    let mut var_68: i128 = var_48;
    
    loop
    {
        let mut rax_1: i32;
        let mut rdx: i32;
        rax_1 = core::str::validations::next_code_point::h660536d7d7533ae5(&var_68, arg1);
        let mut var_80: i128;
        
        if rax_1 == 0
        {
            let var_70: i64;
            
            if var_88 == 0
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_80, arg2, arg3);
                'label_4bdc98:
                *(arg1 + 0x10) = var_70;
                *arg1 = var_80;
                return 
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h9e7c6a67d86540d0(
                    &var_98);
            }
            
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::h251793bacb3d3b4d(&var_80, var_90);
            var_68 = var_80;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::haaebd7cc9f7d6887(arg4);
            arg4[2] = var_70;
            *arg4 = var_68;
            *arg1 = -0x8000000000000000;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h9e7c6a67d86540d0(
                &var_98);
        }
        
        if rdx - 0x30 >= 0xa
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::haaebd7cc9f7d6887(arg4);
            *arg4 = -0x8000000000000000;
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_80, arg2, arg3);
            goto 'label_4bdc98;
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::heb97b033ef2f73d1(&var_98, rdx);
    }
}
