
  fn uu_ls::colors::color_name::hafb991a3ed925fc5(arg1: *mut i128, arg2: *mut i64, arg3: *mut c_void, arg4: *mut i64, arg5: *mut c_void, arg6: *mut c_void, arg7: i8) -> i64

{
    let rax: *mut i128 = lscolors::LsColors::style_for_indicator::h56051c223b964973(*arg4, 0x11);
    let mut var_240: i32;
    
    if rax != 0
    {
        *arg3.byte_offset(0x28);
        xattr::list::h98bb10efc77fe3e7(&var_240, *arg3.byte_offset(0x20));
        
        if core::result::Result$LT$T$C$E$GT$::is_ok_and::h84dfcb59db6f5993(&var_240) != 0
        {
            /* tailcall */
            return uu_ls::colors::StyleManager::apply_style::ha4cfaac237ebf5d9(arg1, arg4, rax, 
                arg2, arg7);
        }
    }
    
    let rax_3: i8 = *arg3.byte_offset(0x128);
    
    if rax_3 == 0 && *arg3.byte_offset(0x100) != 0
    {
        /* tailcall */
        return uu_ls::colors::StyleManager::apply_style_based_on_dir_entry::h94fb2fdae0c89512(arg1, 
            arg4, arg3.byte_offset(0x100), arg2, arg7);
    }
    
    let mut rcx_6: *mut c_void;
    let mut var_190: i64;
    
    if arg6 == 0
    {
        let rax_5: *mut c_void = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg3, arg5);
        *arg3.byte_offset(0x28);
        std::fs::symlink_metadata::h7b40b87fa5e11ee0(&var_240, *arg3.byte_offset(0x20));
        
        if var_240 != 2
        {
            memcpy(&var_190, &var_240, 0xb0);
            rcx_6 = nullptr;
            
            if var_190 != 2
            {
                rcx_6 = &var_190;
            }
        }
        else
        {
            var_190 = 2;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h4d6173845b848954(&var_240);
            rcx_6 = nullptr;
        }
        
        if rax_5 != 0
        {
            rcx_6 = rax_5;
        }
    }
    else
    {
        let mut var_e0: i32;
        uu_ls::get_metadata_with_deref_opt::h6fbf7688ce069f5f(&var_e0, *arg6.byte_offset(0x20), 
            *arg6.byte_offset(0x28), rax_3);
        
        if var_e0 == 2
        {
            let var_d8: i64;
            uu_ls::colors::color_name::_$u7b$$u7b$closure$u7d$$u7d$::hf77c4a2806dda2c8(&var_190, 
                *arg3.byte_offset(0x20), *arg3.byte_offset(0x28), var_d8);
            
            if var_190 != 2
            {
                goto 'label_590a5b;
            }
            
            goto 'label_5909be;
        }
        
        memcpy(&var_190, &var_e0, 0xb0);
        
        if var_190 == 2
        {
            'label_5909be:
            var_240 = 2;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h4d6173845b848954(&var_190);
            rcx_6 = nullptr;
        }
        else
        {
            'label_590a5b:
            memcpy(&var_240, &var_190, 0xb0);
            rcx_6 = nullptr;
            
            if var_240 != 2
            {
                rcx_6 = &var_240;
            }
        }
    }
    uu_ls::colors::StyleManager::apply_style_based_on_metadata::hcad306b9426f25fd(arg1, arg4, arg3, 
        rcx_6, arg2, arg7)
}
