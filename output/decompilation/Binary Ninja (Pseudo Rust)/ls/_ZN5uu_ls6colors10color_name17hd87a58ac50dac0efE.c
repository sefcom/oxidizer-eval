
  fn uu_ls::colors::color_name::hd87a58ac50dac0ef(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut c_void, arg5: *mut i64, arg6: *mut c_void, arg7: i8) -> *mut i128

{
    let rax: i8 = *arg4.byte_offset(0x128);
    
    if rax == 0 && *arg4.byte_offset(0x100) != 0
    {
        uu_ls::colors::StyleManager::apply_style_based_on_dir_entry::h5ac81938a1ae285d(arg1, arg5, 
            arg4.byte_offset(0x100), arg2, arg3, arg7);
    }
    else
    {
        let mut var_258_1: i8;
        let mut rcx_4: *mut i32;
        let mut rdx_4: *mut c_void;
        let mut rsi_7: *mut i64;
        let mut rdi_9: *mut i128;
        let mut r8_1: i64;
        let mut r9_2: i64;
        let mut var_240: i64;
        let mut var_190: i32;
        
        if arg6 == 0
        {
            let rax_1: *mut i32 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg4);
            *arg4.byte_offset(0x28);
            std::fs::symlink_metadata::haff3ff196e1dc22b(&var_190, *arg4.byte_offset(0x20));
            
            if var_190 != 2
            {
                memcpy(&var_240, &var_190, 0xb0);
                rcx_4 = nullptr;
                
                if var_240 != 2
                {
                    rcx_4 = &var_240;
                }
            }
            else
            {
                var_240 = 2;
                let var_188: i64;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(var_188);
                rcx_4 = nullptr;
            }
            
            if rax_1 != 0
            {
                rcx_4 = rax_1;
            }
            
            var_258_1 = arg7;
            rdi_9 = arg1;
            rsi_7 = arg5;
            rdx_4 = arg4;
            r8_1 = arg2;
            r9_2 = arg3;
        }
        else
        {
            let mut var_e0: i32;
            uu_ls::get_metadata_with_deref_opt::h471baa3ff4b7ae17(&var_e0, *arg6.byte_offset(0x20), 
                *arg6.byte_offset(0x28), rax);
            let mut r15_1: i64;
            
            if var_e0 != 2
            {
                r15_1 = arg3;
                memcpy(&var_240, &var_e0, 0xb0);
            }
            else
            {
                r15_1 = arg3;
                let var_d8: i64;
                uu_ls::colors::color_name::_$u7b$$u7b$closure$u7d$$u7d$::h930039d09c033de8(
                    &var_240, *arg4.byte_offset(0x20), *arg4.byte_offset(0x28), var_d8);
            }
            
            let r14_1: i64 = var_240;
            let var_238: i64;
            
            if r14_1 != 2
            {
                let mut var_230: ();
                let mut var_180: ();
                memcpy(&var_180, &var_230, 0xa0);
                var_190 = r14_1;
                let var_188_1: i64 = var_238;
                rcx_4 = &var_190;
            }
            else
            {
                var_190 = 2;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(var_238);
                rcx_4 = nullptr;
            }
            var_258_1 = arg7;
            rdi_9 = arg1;
            rsi_7 = arg5;
            rdx_4 = arg4;
            r8_1 = arg2;
            r9_2 = r15_1;
        }
        uu_ls::colors::StyleManager::apply_style_based_on_metadata::hd1ec1399cd3d8441(rdi_9, rsi_7, 
            rdx_4, rcx_4, r8_1, r9_2, var_258_1);
    }
    
    arg1
}
