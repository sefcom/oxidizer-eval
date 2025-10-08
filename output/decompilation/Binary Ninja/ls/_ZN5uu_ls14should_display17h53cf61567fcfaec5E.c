
  uint64_t uu_ls::should_display::h53cf61567fcfaec5(void* arg1, void* arg2)

{
    char rax_1;
    
    if (*(arg2 + 0xf8) == 2)
        rax_1 = uu_ls::is_hidden::h56276072d631ca64(arg1);
    
    int32_t rbp;
    
    if (*(arg2 + 0xf8) != 2 || !rax_1)
    {
        int16_t var_83 = 1;
        char var_81_1 = 1;
        uint64_t var_38;
        std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_38, arg1);
        int32_t var_80;
        char* var_30;
        uint64_t var_28;
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_80, var_30, var_28);
        int128_t zmm0_1;
        uint64_t var_70;
        uint64_t var_58_1;
        
        if (var_80 != 1)
        {
            int64_t var_78;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_80, var_78, var_70);
            var_58_1 = var_70;
            zmm0_1 = var_80;
        }
        else
        {
            int64_t var_50;
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_50, var_30, var_28);
            uint64_t var_40;
            
            if (!(0 + -(var_50)))
            {
                uint64_t var_58_2 = var_40;
                zmm0_1 = var_50;
            }
            else
            {
                int64_t var_48;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_80, var_48, var_40);
                var_58_1 = var_70;
                zmm0_1 = var_80;
            }
        }
        int128_t var_68 = zmm0_1;
        int64_t rcx_1 = *(arg2 + 8);
        var_80 = rcx_1;
        int64_t var_78_1 = *(arg2 + 0x10) * 0x38 + rcx_1;
        int32_t rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h753ac60a44d20d1f(&var_80, &var_68, &var_83);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_68);
        rbp = rax_6 ^ 1;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_38, 
            var_30);
    }
    else
        rbp = 0;
    
    return rbp;
}
