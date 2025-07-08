
  fn uu_fold::fold::h0e99b4443f72c023(arg1: i64, arg2: i64, arg3: i32, arg4: i8, arg5: *mut c_void) -> *mut c_void

{
    let mut rbx: *mut c_void = arg5;
    let mut var_88: i64 = arg1;
    let var_80: i64 = arg1 + arg2 * 0x18;
    let mut rax_2: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4f3305ddda7a2719(&var_88);
    
    if rax_2 == 0
    {
        return nullptr;
    }
    
    let var_90_1: *mut c_void = rbx;
    let rbp_1: u32 = arg4;
    let mut var_ac: i32;
    let mut result: *mut c_void;
    let mut r13_1: *mut c_void;
    let mut var_a8: *mut c_void;
    let mut result_1: *mut c_void;
    let var_98: u64;
    let mut var_78: ();
    let mut var_68: ();
    let mut rdx_4: u64;
    let mut r14: u64;
    
    if arg3 == 0
    {
        loop
        {
            r14 = *rax_2.byte_offset(8);
            let rax_5: i32 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5f12374e656de98e(r14, *rax_2.byte_offset(0x10), "-\n", 1);
            r13_1 = rax_5;
            let mut rcx_2: *mut c_void;
            let mut rdx_5: *mut *mut c_void;
            
            if rax_5 == 0
            {
                std::fs::File::open::hf9b1c7861fe4e1e0(&var_78, r14);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he04fa865e69b627f(&result_1, &var_78);
                result = result_1;
                
                if result != 0
                {
                    return result;
                }
                
                var_ac = var_98;
                rcx_2 = &data_51a8a8;
                rdx_5 = &var_ac;
                rbx = var_90_1;
            }
            else
            {
                std::io::stdio::stdin::h7215cc131abb55d8();
                var_a8 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
                rcx_2 = &data_51a900;
                rdx_5 = &var_a8;
            }
            
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hbb0364b848194873(
                &var_68, 0x2000, rdx_5, rcx_2);
            let mut result_3: *mut c_void;
            result_3 = uu_fold::fold_file::hcf3a60b599ccdb00(&var_68, rbp_1, rbx, r13_1);
            result = result_3;
            
            if result_3 != 0
            {
                break;
            }
            
            if r13_1 == 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h4c842b9159849a32(&var_ac);
            }
            
            rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4f3305ddda7a2719(&var_88);
            
            if rax_2 == 0
            {
                return nullptr;
            }
        }
    }
    else
    {
        loop
        {
            r14 = *rax_2.byte_offset(8);
            let rax_3: i32 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5f12374e656de98e(r14, *rax_2.byte_offset(0x10), "-\n", 1);
            r13_1 = rax_3;
            let mut rcx: *mut c_void;
            let mut rdx: *mut *mut c_void;
            
            if rax_3 == 0
            {
                std::fs::File::open::hf9b1c7861fe4e1e0(&var_78, r14);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he04fa865e69b627f(&result_1, &var_78);
                result = result_1;
                
                if result != 0
                {
                    return result;
                }
                
                var_ac = var_98;
                rcx = &data_51a8a8;
                rdx = &var_ac;
                rbx = var_90_1;
            }
            else
            {
                std::io::stdio::stdin::h7215cc131abb55d8();
                var_a8 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
                rcx = &data_51a900;
                rdx = &var_a8;
            }
            
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hbb0364b848194873(
                &var_68, 0x2000, rdx, rcx);
            let mut result_2: *mut c_void;
            result_2 = uu_fold::fold_file_bytewise::h3af11a64241fe044(&var_68, rbp_1, rbx);
            result = result_2;
            
            if result_2 != 0
            {
                break;
            }
            
            if r13_1 == 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h4c842b9159849a32(&var_ac);
            }
            
            rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4f3305ddda7a2719(&var_88);
            
            if rax_2 == 0
            {
                return nullptr;
            }
        }
    }
    
    if r13_1 == 0
    {
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4c842b9159849a32(&var_ac);
    }
    
    result
}
