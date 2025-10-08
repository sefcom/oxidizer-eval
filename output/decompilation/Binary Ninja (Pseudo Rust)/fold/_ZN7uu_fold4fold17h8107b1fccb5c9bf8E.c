
  fn uu_fold::fold::h8107b1fccb5c9bf8(arg1: i64, arg2: i64, arg3: i8, arg4: i8, arg5: u64) -> *mut c_void

{
    let r12: *mut c_void;
    let var_28: *mut c_void = r12;
    
    if arg2 == 0
    {
        return nullptr;
    }
    
    let mut r14_1: i64 = arg1;
    let mut var_ac: i32;
    let mut result: *mut c_void;
    let mut r15_1: i8;
    let mut var_a0: *mut c_void;
    let mut result_1: *mut c_void;
    let var_90: *mut c_void;
    let mut var_78: ();
    let mut var_68: ();
    let mut rdx_4: *mut c_void;
    
    if arg3 == 0
    {
        let mut rbp_2: i64 = 0;
        
        loop
        {
            let r12_2: i64 = *(r14_1 + rbp_2 + 8);
            result = *(r14_1 + rbp_2 + 0x10);
            let rax_5: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3760bbb718d9d081(r12_2, result, "-\nfailed to read line", 1);
            r15_1 = rax_5;
            let mut rdx_5: *mut c_void;
            let mut rsi_8: *mut *mut c_void;
            
            if rax_5 == 0
            {
                std::fs::File::open::h7582db33243e930c(&var_78, r12_2);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4973fc8030dce445(&result_1, &var_78);
                result = result_1;
                
                if result != 0
                {
                    return result;
                }
                
                var_ac = var_90;
                rdx_5 = &data_4e6ae0;
                rsi_8 = &var_ac;
                r14_1 = arg1;
            }
            else
            {
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                var_a0 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
                rdx_5 = &data_4e6b38;
                rsi_8 = &var_a0;
            }
            
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h8587d7d0924f7920(
                &var_68, rsi_8, rdx_5);
            let mut result_3: *mut c_void;
            result_3 = uu_fold::fold_file::h6b5dfb4206dbd8ef(&var_68, arg4, arg5, result);
            result = result_3;
            
            if result_3 != 0
            {
                break;
            }
            
            if r15_1 == 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hfa78fa6a5afa9aac(&var_ac);
            }
            
            rbp_2 += 0x18;
            
            if arg2 * 0x18 == rbp_2
            {
                return nullptr;
            }
        }
    }
    else
    {
        let mut var_a8: i32;
        var_a8 = arg2 * 0x18;
        let mut rbx_1: i64 = 0;
        
        loop
        {
            let r12_1: i64 = *(r14_1 + rbx_1 + 8);
            let rax_2: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3760bbb718d9d081(r12_1, *(r14_1 + rbx_1 + 0x10), "-\nfailed to read line", 1);
            r15_1 = rax_2;
            let mut rdx: *mut c_void;
            let mut rsi_2: *mut *mut c_void;
            
            if rax_2 == 0
            {
                std::fs::File::open::h7582db33243e930c(&var_78, r12_1);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4973fc8030dce445(&result_1, &var_78);
                result = result_1;
                
                if result != 0
                {
                    return result;
                }
                
                var_ac = var_90;
                rdx = &data_4e6ae0;
                rsi_2 = &var_ac;
                r14_1 = arg1;
            }
            else
            {
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                var_a0 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
                rdx = &data_4e6b38;
                rsi_2 = &var_a0;
            }
            
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h8587d7d0924f7920(
                &var_68, rsi_2, rdx);
            let mut result_2: *mut c_void;
            result_2 = uu_fold::fold_file_bytewise::h24f8a41fa4fcfc21(&var_68, arg4, arg5);
            result = result_2;
            
            if result_2 != 0
            {
                break;
            }
            
            if r15_1 == 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hfa78fa6a5afa9aac(&var_ac);
            }
            
            rbx_1 += 0x18;
            
            if var_a8 == rbx_1
            {
                return nullptr;
            }
        }
    }
    
    if r15_1 == 0
    {
        core::ptr::drop_in_place$LT$std..fs..File$GT$::hfa78fa6a5afa9aac(&var_ac);
    }
    
    result
}
