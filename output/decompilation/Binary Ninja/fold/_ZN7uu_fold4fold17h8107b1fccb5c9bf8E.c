
  void* uu_fold::fold::h8107b1fccb5c9bf8(int64_t arg1, int64_t arg2, char arg3, char arg4, uint64_t arg5)

{
    void* r12;
    void* var_28 = r12;
    
    if (!arg2)
        return nullptr;
    
    int64_t r14_1 = arg1;
    int32_t var_ac;
    void* result;
    char r15_1;
    void* var_a0;
    void* result_1;
    void* var_90;
    void var_78;
    void var_68;
    void* rdx_4;
    
    if (!arg3)
    {
        int64_t rbp_2 = 0;
        
        while (true)
        {
            int64_t r12_2 = *(r14_1 + rbp_2 + 8);
            result = *(r14_1 + rbp_2 + 0x10);
            char rax_5 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3760bbb718d9d081(r12_2, result, "-\nfailed to read line", 1);
            r15_1 = rax_5;
            void* const rdx_5;
            void** rsi_8;
            
            if (!rax_5)
            {
                std::fs::File::open::h7582db33243e930c(&var_78, r12_2);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4973fc8030dce445(&result_1, &var_78);
                result = result_1;
                
                if (result)
                    return result;
                
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
            void* result_3;
            result_3 = uu_fold::fold_file::h6b5dfb4206dbd8ef(&var_68, arg4, arg5, result);
            result = result_3;
            
            if (result_3)
                break;
            
            if (!r15_1)
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hfa78fa6a5afa9aac(&var_ac);
            
            rbp_2 += 0x18;
            
            if (arg2 * 0x18 == rbp_2)
                return nullptr;
        }
    }
    else
    {
        int32_t var_a8;
        var_a8 = arg2 * 0x18;
        int64_t rbx_1 = 0;
        
        while (true)
        {
            int64_t r12_1 = *(r14_1 + rbx_1 + 8);
            char rax_2 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3760bbb718d9d081(r12_1, *(r14_1 + rbx_1 + 0x10), "-\nfailed to read line", 1);
            r15_1 = rax_2;
            void* const rdx;
            void** rsi_2;
            
            if (!rax_2)
            {
                std::fs::File::open::h7582db33243e930c(&var_78, r12_1);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4973fc8030dce445(&result_1, &var_78);
                result = result_1;
                
                if (result)
                    return result;
                
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
            void* result_2;
            result_2 = uu_fold::fold_file_bytewise::h24f8a41fa4fcfc21(&var_68, arg4, arg5);
            result = result_2;
            
            if (result_2)
                break;
            
            if (!r15_1)
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hfa78fa6a5afa9aac(&var_ac);
            
            rbx_1 += 0x18;
            
            if (var_a8 == rbx_1)
                return nullptr;
        }
    }
    
    if (!r15_1)
        core::ptr::drop_in_place$LT$std..fs..File$GT$::hfa78fa6a5afa9aac(&var_ac);
    
    return result;
}
