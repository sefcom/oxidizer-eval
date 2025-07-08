
  void* uu_fold::fold::h0e99b4443f72c023(int64_t arg1, int64_t arg2, int32_t arg3, char arg4, void* arg5)

{
    void* rbx = arg5;
    int64_t var_88 = arg1;
    int64_t var_80 = arg1 + arg2 * 0x18;
    void* rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4f3305ddda7a2719(&var_88);
    
    if (!rax_2)
        return nullptr;
    
    void* var_90_1 = rbx;
    uint32_t rbp_1 = arg4;
    int32_t var_ac;
    void* result;
    void* r13_1;
    void* var_a8;
    void* result_1;
    uint64_t var_98;
    void var_78;
    void var_68;
    uint64_t rdx_4;
    uint64_t r14;
    
    if (!arg3)
    {
        while (true)
        {
            r14 = *(rax_2 + 8);
            int32_t rax_5 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5f12374e656de98e(r14, *(rax_2 + 0x10), "-\n", 1);
            r13_1 = rax_5;
            void* const rcx_2;
            void** rdx_5;
            
            if (!rax_5)
            {
                std::fs::File::open::hf9b1c7861fe4e1e0(&var_78, r14);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he04fa865e69b627f(&result_1, &var_78);
                result = result_1;
                
                if (result)
                    return result;
                
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
            void* result_3;
            result_3 = uu_fold::fold_file::hcf3a60b599ccdb00(&var_68, rbp_1, rbx, r13_1);
            result = result_3;
            
            if (result_3)
                break;
            
            if (!r13_1)
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h4c842b9159849a32(&var_ac);
            
            rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4f3305ddda7a2719(&var_88);
            
            if (!rax_2)
                return nullptr;
        }
    }
    else
    {
        while (true)
        {
            r14 = *(rax_2 + 8);
            int32_t rax_3 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5f12374e656de98e(r14, *(rax_2 + 0x10), "-\n", 1);
            r13_1 = rax_3;
            void* const rcx;
            void** rdx;
            
            if (!rax_3)
            {
                std::fs::File::open::hf9b1c7861fe4e1e0(&var_78, r14);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he04fa865e69b627f(&result_1, &var_78);
                result = result_1;
                
                if (result)
                    return result;
                
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
            void* result_2;
            result_2 = uu_fold::fold_file_bytewise::h3af11a64241fe044(&var_68, rbp_1, rbx);
            result = result_2;
            
            if (result_2)
                break;
            
            if (!r13_1)
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h4c842b9159849a32(&var_ac);
            
            rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4f3305ddda7a2719(&var_88);
            
            if (!rax_2)
                return nullptr;
        }
    }
    
    if (!r13_1)
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4c842b9159849a32(&var_ac);
    
    return result;
}
