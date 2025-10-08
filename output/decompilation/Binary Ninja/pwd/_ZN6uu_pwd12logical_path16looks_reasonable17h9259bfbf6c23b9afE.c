
  uint64_t uu_pwd::logical_path::looks_reasonable::h9259bfbf6c23b9af(int64_t arg1, uint64_t arg2)

{
    int64_t var_2f0;
    std::path::Path::components::hd0346d362206f2e9(&var_2f0, arg1, arg2);
    char var_2e0;
    char var_2b6;
    int32_t rbx_1;
    
    if (var_2b6 || var_2e0 - 5 >= 2)
    {
        int64_t var_190;
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_190, arg1, arg2);
        int64_t r15_1 = var_190;
        int64_t var_188;
        int64_t var_180;
        _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h26c300b68eedf97d(&var_2e0, var_188, var_180);
        var_2f0 = 0;
        int64_t var_2e8_1 = var_180;
        int16_t var_2b8_1 = 1;
        char rax_3 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h855e5aab04e03f8d(core::iter::traits::iterator::Iterator::try_fold::hfc10f82a18e5ade8(&var_2f0));
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h743e7f0088788be4(r15_1, 
            var_188);
        
        if (!rax_3)
        {
            void var_e0;
            std::fs::metadata::h8375f386a13ea4e6(&var_e0, arg1);
            std::fs::metadata::he8cf75f09f9f2f0c(&var_190);
            memcpy(&var_2f0, &var_e0, 0xb0);
            int64_t var_240;
            memcpy(&var_240, &var_190, 0xb0);
            rbx_1 = 0;
            int64_t var_2d0;
            int64_t var_2c8;
            int64_t var_220;
            int64_t var_218;
            
            if (var_2f0 != 2 && var_240 != 2)
                rbx_1 = !((var_218 ^ var_2c8) | (var_2d0 ^ var_220));
            core::ptr::drop_in_place$LT$$LP$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$C$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$RP$$GT$::h70f10cd4fa1bcba5(&var_2f0);
        }
        else
            rbx_1 = 0;
    }
    else
        rbx_1 = 0;
    
    return rbx_1;
}
