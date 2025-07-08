
  fn uu_ls::colors::StyleManager::apply_style::h18367dbd5f6ecd0f(arg1: *mut i128, arg2: *mut i64, arg3: *mut i128, arg4: i64, arg5: i64, arg6: i8) -> i64

{
    let mut var_58: i64 = arg4;
    let var_50: i64 = arg5;
    let mut var_c0: i64 = 0;
    let var_b8: i64 = 1;
    let var_b0: i64 = 0;
    let mut var_108: i128;
    let var_f8: i64;
    let mut var_a8: i128;
    let mut var_88: i8;
    let mut var_87: i128;
    
    if arg2[1] == 2
    {
        let rax_1: *mut i8 = uu_ls::colors::StyleManager::get_normal_style::hc92a465b83f2ab18(arg2);
        
        if rax_1 != 0
        {
            let rcx: i8 = *rax_1;
            let rdx: i32 = *rax_1.byte_offset(0x11);
            var_a8 = *rax_1.byte_offset(1);
            
            if rcx != 2
            {
                var_88 = rcx;
                var_87 = var_a8;
                let var_77_1: i32 = rdx;
                uu_ls::colors::StyleManager::get_style_code::h3f5da10be94133b8(&var_108, arg2, 
                    &var_88);
                let rdi_2: i64 = *var_108[8];
                let mut rax_3: i64;
                let mut rdx_2: u64;
                rax_3 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(rdi_2, 
                    var_f8 + rdi_2);
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_c0, rax_3, 
                    rdx_2);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_108);
            }
        }
    }
    
    let mut rax_11: i8;
    
    if arg3 == 0
    {
        let rax_7: *mut i128 =
            uu_ls::colors::StyleManager::get_normal_style::hc92a465b83f2ab18(arg2);
        
        if rax_7 == 0
        {
            rax_11 = 0;
        }
        else
        {
            var_108 = *rax_7;
            *var_108[0xd] = *rax_7.byte_offset(0xd);
            
            if var_108 == 2
            {
                rax_11 = 0;
            }
            else if uu_ls::colors::StyleManager::is_current_style::h6647609893105167(arg2, &var_108)
                == 0
            {
                rax_11 = 0;
            }
            else
            {
                uu_ls::colors::StyleManager::reset::h8e7360f134edbed2(&var_108, arg2, 0);
                let rdi_17: i64 = *var_108[8];
                let mut rax_10: i64;
                let mut rdx_7: u64;
                rax_10 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(rdi_17, 
                    var_f8 + rdi_17);
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_c0, rax_10, 
                    rdx_7);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_108);
                rax_11 = 1;
            }
        }
    }
    else
    {
        if uu_ls::colors::StyleManager::is_current_style::h6647609893105167(arg2, arg3) == 0
        {
            uu_ls::colors::StyleManager::reset::h8e7360f134edbed2(&var_108, arg2, 
                *arg2.byte_offset(0x1d) == 0);
            let rdi_7: i64 = *var_108[8];
            let mut rax_5: i64;
            let mut rdx_4: u64;
            rax_5 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(rdi_7, 
                var_f8 + rdi_7);
            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_c0, rax_5, rdx_4);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_108);
            uu_ls::colors::StyleManager::get_style_code::h3f5da10be94133b8(&var_108, arg2, arg3);
            let rdi_11: i64 = *var_108[8];
            let mut rax_6: i64;
            let mut rdx_6: u64;
            rax_6 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(rdi_11, 
                var_f8 + rdi_11);
            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_c0, rax_6, rdx_6);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_108);
        }
        
        rax_11 = 0;
    }
    
    let mut rdx_8: *mut c_void = 1;
    
    if arg6 != 0
    {
        rdx_8 = "\x1b[KLazy instance has previous…";
    }
    
    let mut var_48: *mut c_void = rdx_8;
    let var_40: u64 = arg6 * 3;
    uu_ls::colors::StyleManager::reset::h8e7360f134edbed2(&var_a8, arg2, rax_11);
    var_108 = &var_c0;
    *var_108[8] =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    let var_f8_1: *mut i64 = &var_58;
    let var_f0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
    let var_e8: *mut i128 = &var_a8;
    let var_e0: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    let var_d8: *mut i64 = &var_48;
    let var_d0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
    var_88 = &data_436d28;
    *var_87[7] = 4;
    let var_68: i64 = 0;
    *var_87[0xf] = &var_108;
    let var_70: i64 = 4;
    let mut var_38: i128;
    core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(&var_38, &var_88);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_a8);
    let var_28: i64;
    arg1[1] = var_28;
    *arg1 = var_38;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c0)
}
