
  uint64_t uu_pwd::logical_path::looks_reasonable::h198aec699ed31598(int64_t arg1, size_t arg2)

{
    int64_t var_2e0;
    std::path::Path::components::h4f3217acf0fc8653(&var_2e0, arg1, arg2);
    char var_2d0;
    char var_2a6;
    int32_t rbx_1;
    
    if (var_2a6 || var_2d0 - 5 >= 2)
    {
        void var_180;
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_180, arg1, arg2);
        int64_t var_178;
        int64_t var_170;
        _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h5315a6138ce3f3a6(&var_2d0, var_178, var_170);
        var_2e0 = 0;
        int64_t var_2d8_1 = var_170;
        int16_t var_2a8_1 = 1;
        char rax_3 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h70e2399de7263019(core::iter::traits::iterator::Iterator::try_fold::h97fbd32b5f6f333f(&var_2e0));
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h85c5af602e16d02e(&var_180);
        
        if (!rax_3)
        {
            void var_d0;
            std::fs::metadata::ha33fb8332834a0bc(&var_d0, arg1);
            std::fs::metadata::he569619eb99e21fb(&var_180, "...0.0.28Display the full filena…");
            memcpy(&var_2e0, &var_d0, 0xb0);
            int64_t var_230;
            memcpy(&var_230, &var_180, 0xb0);
            rbx_1 = 0;
            int64_t var_2c0;
            int64_t var_2b8;
            int64_t var_210;
            int64_t var_208;
            
            if (var_2e0 != 2 && var_230 != 2)
                rbx_1 = !((var_2b8 ^ var_208) | (var_2c0 ^ var_210));
            core::ptr::drop_in_place$LT$$LP$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$C$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$RP$$GT$::h6986155f6bfd8c39(&var_2e0);
        }
        else
            rbx_1 = 0;
    }
    else
        rbx_1 = 0;
    
    return rbx_1;
}
