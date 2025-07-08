
  int128_t* uu_ls::colors::color_name::hd87a58ac50dac0ef(int128_t* arg1, int64_t arg2, int64_t arg3, void* arg4, int64_t* arg5, void* arg6, char arg7)

{
    char rax = *(arg4 + 0x128);
    
    if (!rax && *(arg4 + 0x100))
        uu_ls::colors::StyleManager::apply_style_based_on_dir_entry::h5ac81938a1ae285d(arg1, arg5, 
            arg4 + 0x100, arg2, arg3, arg7);
    else
    {
        char var_258_1;
        int32_t* rcx_4;
        void* rdx_4;
        int64_t* rsi_7;
        int128_t* rdi_9;
        int64_t r8_1;
        int64_t r9_2;
        int64_t var_240;
        int32_t var_190;
        
        if (!arg6)
        {
            int32_t* rax_1 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg4);
            *(arg4 + 0x28);
            std::fs::symlink_metadata::haff3ff196e1dc22b(&var_190, *(arg4 + 0x20));
            
            if (var_190 != 2)
            {
                memcpy(&var_240, &var_190, 0xb0);
                rcx_4 = nullptr;
                
                if (var_240 != 2)
                    rcx_4 = &var_240;
            }
            else
            {
                var_240 = 2;
                int64_t var_188;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(var_188);
                rcx_4 = nullptr;
            }
            
            if (rax_1)
                rcx_4 = rax_1;
            
            var_258_1 = arg7;
            rdi_9 = arg1;
            rsi_7 = arg5;
            rdx_4 = arg4;
            r8_1 = arg2;
            r9_2 = arg3;
        }
        else
        {
            int32_t var_e0;
            uu_ls::get_metadata_with_deref_opt::h471baa3ff4b7ae17(&var_e0, *(arg6 + 0x20), 
                *(arg6 + 0x28), rax);
            int64_t r15_1;
            
            if (var_e0 != 2)
            {
                r15_1 = arg3;
                memcpy(&var_240, &var_e0, 0xb0);
            }
            else
            {
                r15_1 = arg3;
                int64_t var_d8;
                uu_ls::colors::color_name::_$u7b$$u7b$closure$u7d$$u7d$::h930039d09c033de8(
                    &var_240, *(arg4 + 0x20), *(arg4 + 0x28), var_d8);
            }
            
            int64_t r14_1 = var_240;
            int64_t var_238;
            
            if (r14_1 != 2)
            {
                void var_230;
                void var_180;
                memcpy(&var_180, &var_230, 0xa0);
                var_190 = r14_1;
                int64_t var_188_1 = var_238;
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
    
    return arg1;
}
