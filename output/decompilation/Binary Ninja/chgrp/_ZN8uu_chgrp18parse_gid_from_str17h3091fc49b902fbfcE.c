
  uint32_t uu_chgrp::parse_gid_from_str::h3091fc49b902fbfc(int128_t* arg1, char* arg2, uint64_t arg3)

{
    char* var_60 = arg2;
    uint64_t var_58 = arg3;
    int32_t var_a8 = 0;
    char* rax_1;
    int64_t rdx_1;
    rax_1 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_a8), arg2, arg3);
    int32_t var_90;
    int64_t* var_78;
    
    if (rax_1)
    {
        char* var_50 = rax_1;
        int64_t var_48_1 = rdx_1;
        int64_t rax_2 =
            core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(rax_1, rdx_1);
        
        if (!(rax_2 & 1))
        {
            uint32_t result = rax_2 >> 0x20;
            *(arg1 + 8) = result;
            *arg1 = -0x8000000000000000;
            return result;
        }
        
        var_78 = &var_50;
        int64_t (* var_70_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdb887a7c8cbc9c9f;
        var_a8 = &data_4f4838;
        int64_t var_a0_1 = 2;
        int64_t var_88_1 = 0;
        int64_t** var_98_1 = &var_78;
        var_90 = 1;
        return core::option::Option$LT$T$GT$::map_or_else::h10b49b386562c66c(arg1, &var_a8);
    }
    
    _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h2c7d885aadff2e1b(&var_a8, arg2, arg3);
    int64_t rdi_5 = var_a8;
    int64_t var_a0;
    int32_t rdi_8;
    
    if (-(rdi_5) != -0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h39f002659944e503(rdi_5, 
            var_a0);
        *(arg1 + 8) = var_90;
        *arg1 = -0x8000000000000000;
        rdi_8 = 0;
    }
    else
    {
        int64_t rax_5 =
            core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(arg2, arg3);
        
        if (!(rax_5 & 1))
        {
            *(arg1 + 8) = rax_5 >> 0x20;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            int64_t* var_40 = &var_60;
            int64_t (* var_38_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdb887a7c8cbc9c9f;
            var_a8 = &data_4f4858;
            int64_t var_a0_2 = 2;
            int64_t var_88_2 = 0;
            int64_t** var_98_2 = &var_40;
            var_90 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h10b49b386562c66c(&var_78, &var_a8);
            int64_t var_68;
            arg1[1] = var_68;
            *arg1 = var_78;
        }
        
        rdi_8 = 1;
    }
    
    return core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$std..io..error..Error$GT$$GT$::h4b0917c8d393a7b1(rdi_8, var_a0);
}
