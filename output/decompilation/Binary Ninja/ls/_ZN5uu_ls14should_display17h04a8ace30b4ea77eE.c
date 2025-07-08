
  uint64_t uu_ls::should_display::h04a8ace30b4ea77e(void* arg1, void* arg2)

{
    char rax_1;
    
    if (*(arg2 + 0xf0) == 2)
        rax_1 = uu_ls::is_hidden::he2cc02ae0ae5ae31(arg1);
    
    int32_t rbx_1;
    
    if (*(arg2 + 0xf0) != 2 || !rax_1)
    {
        int16_t var_83 = 1;
        char var_81_1 = 1;
        void var_30;
        std::fs::DirEntry::file_name::habdd235db90dd152(&var_30, arg1);
        int64_t var_80;
        char* var_28;
        size_t var_20;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_80, var_28, var_20);
        int128_t zmm0_1;
        uint64_t var_70;
        uint64_t var_58_1;
        
        if (!var_80)
        {
            int64_t var_78;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(
                &var_80, var_78, var_70);
            var_58_1 = var_70;
            zmm0_1 = var_80;
        }
        else
        {
            int64_t var_48;
            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_48, var_28, 
                var_20);
            uint64_t var_38;
            
            if (var_48 != -0x8000000000000000)
            {
                uint64_t var_58_2 = var_38;
                zmm0_1 = var_48;
            }
            else
            {
                int64_t var_40;
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(
                    &var_80, var_40, var_38);
                var_58_1 = var_70;
                zmm0_1 = var_80;
            }
        }
        int128_t var_68 = zmm0_1;
        int64_t rcx_1 = *(arg2 + 8);
        int64_t rax_5 = *(arg2 + 0x10) * 0x38 + rcx_1;
        var_80 = rcx_1;
        int64_t var_78_1 = rax_5;
        int32_t rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::haa0a26cb84a32dff(&var_80, &var_68, &var_83);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_68);
        rbx_1 = rax_6 ^ 1;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&var_30);
    }
    else
        rbx_1 = 0;
    
    return rbx_1;
}
