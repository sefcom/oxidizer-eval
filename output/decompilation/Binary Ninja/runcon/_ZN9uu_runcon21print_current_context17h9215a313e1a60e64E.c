
  int32_t* uu_runcon::print_current_context::h9215a313e1a60e64(int32_t* arg1)

{
    int32_t var_d0;
    selinux::SecurityContext::current::h79d84b1b82db0947(&var_d0, 0);
    int32_t rax = var_d0;
    int128_t var_cc;
    int128_t var_bc;
    int128_t var_a8;
    int128_t var_98;
    int128_t var_68;
    
    if (rax != 0xa)
    {
        var_68 = var_cc;
        *(arg1 + 0x28) = var_a8;
        int128_t zmm0 = var_68;
        var_98 = zmm0;
        int128_t var_88_1 = var_bc;
        int32_t var_ac;
        int32_t var_78 = var_ac;
        arg1[9] = var_ac;
        *(arg1 + 0x14) = var_bc;
        *(arg1 + 4) = zmm0;
        *arg1 = rax;
        *(arg1 + 0x38) = "Getting security context of the …";
        *(arg1 + 0x40) = 0x2f;
        return arg1;
    }
    
    var_68 = var_cc;
    int128_t var_58 = var_bc;
    selinux::SecurityContext::to_c_string::h0c9c9ed290d135c6(&var_d0, &var_68);
    int32_t rax_1 = var_d0;
    int128_t var_38;
    
    if (rax_1 != 0xa)
    {
        var_98 = var_cc;
        *(arg1 + 0x30) = *var_a8[8];
        *(arg1 + 0x20) = var_bc;
        int128_t zmm0_1 = var_98;
        var_38 = zmm0_1;
        *(arg1 + 0x10) = zmm0_1;
        *arg1 = rax_1;
        arg1[1] = var_cc;
        *(arg1 + 8) = *var_cc[4];
        *(arg1 + 0x38) = "Getting security context of the …";
        *(arg1 + 0x40) = 0x2f;
    }
    else
    {
        int64_t rax_2 = *var_cc[4];
        
        if (rax_2 != 2)
        {
            var_98 = rax_2;
            var_98 = var_cc;
            int64_t var_88;
            core::ffi::c_str::CStr::to_str::h7208c416e44d9521(&var_d0, *var_98[8], var_88);
            int64_t rcx_4 = *var_cc[4];
            int64_t rax_4 = *var_cc[0xc];
            
            if (var_d0 != 1)
            {
                int64_t var_28 = rcx_4;
                int64_t var_20_1 = rax_4;
                var_38 = &var_28;
                *var_38[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdc64247fdccea966;
                var_d0 = &data_4ebc08;
                *var_cc[4] = 2;
                *var_bc[0xc] = 0;
                *var_cc[0xc] = &var_38;
                *var_bc[4] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_d0);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$core..ffi..c_str..CStr$GT$$GT$::h347652f5a30ae63e(&var_98);
                *arg1 = 0x11;
            }
            else
            {
                *arg1 = 0xc;
                *(arg1 + 8) = rcx_4;
                *(arg1 + 0x10) = rax_4;
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$core..ffi..c_str..CStr$GT$$GT$::h347652f5a30ae63e(&var_98);
            }
        }
        else
        {
            var_d0 = &data_4ebbe8;
            *var_cc[4] = 1;
            *var_cc[0xc] = 8;
            var_bc = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_d0);
            *arg1 = 0x11;
        }
    }
    core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h1515c5d0d295c3c5();
    return arg1;
}
