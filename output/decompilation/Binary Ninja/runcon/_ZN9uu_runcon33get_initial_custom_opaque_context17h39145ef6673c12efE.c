
  int64_t uu_runcon::get_initial_custom_opaque_context::h39145ef6673c12ef(int32_t* arg1, int32_t arg2, int64_t arg3, int64_t arg4)

{
    int32_t var_b0;
    int32_t* rdi = &var_b0;
    int128_t var_d8;
    int128_t var_ac;
    int128_t var_9c;
    int128_t var_88;
    int32_t var_8c;
    int128_t zmm0;
    
    if (!arg2)
    {
        selinux::SecurityContext::current::h79d84b1b82db0947(rdi, 0);
        int32_t rax_1 = var_b0;
        
        if (rax_1 != 0xa)
        {
            var_d8 = var_ac;
            *(arg1 + 0x28) = var_88;
            zmm0 = var_d8;
            int128_t var_38_1 = zmm0;
            int128_t var_28 = var_9c;
            int32_t var_18 = var_8c;
            arg1[9] = var_8c;
            *(arg1 + 0x14) = var_9c;
            *(arg1 + 4) = zmm0;
            *arg1 = rax_1;
            *(arg1 + 0x38) = "Getting security context of the …";
            *(arg1 + 0x40) = 0x2f;
            return rax_1;
        }
    }
    else
    {
        uu_runcon::get_transition_context::h61b6643746ed6c81(rdi, arg3, arg4);
        int32_t rax = var_b0;
        
        if (rax != 0x11)
        {
            var_d8 = var_ac;
            int128_t var_78;
            *(arg1 + 0x38) = var_78;
            *(arg1 + 0x28) = var_88;
            arg1[9] = var_8c;
            zmm0 = var_d8;
            *(arg1 + 0x14) = var_9c;
            *(arg1 + 4) = zmm0;
            *arg1 = rax;
            return rax;
        }
    }
    int128_t var_68 = var_ac;
    int128_t var_58 = var_9c;
    selinux::SecurityContext::to_c_string::h0c9c9ed290d135c6(&var_b0, &var_68);
    int32_t rax_2 = var_b0;
    
    if (rax_2 != 0xa)
    {
        *(arg1 + 0x30) = *var_88[8];
        *(arg1 + 0x20) = var_9c;
        int128_t var_48_1 = var_ac;
        *(arg1 + 0x10) = var_ac;
        *arg1 = rax_2;
        arg1[1] = var_ac;
        *(arg1 + 8) = *var_ac[4];
        *(arg1 + 0x38) = "Getting security contextSetting …";
        *(arg1 + 0x40) = 0x18;
    }
    else
    {
        int64_t rax_3 = *var_ac[4];
        char* rsi_2;
        
        if (rax_3 != 2)
        {
            var_d8 = var_ac;
            var_d8 = rax_3;
            rsi_2 = *var_d8[8];
        }
        else
        {
            char* rax_4 = _$LT$alloc..ffi..c_str..CString$u20$as$u20$core..default..Default$GT$::default::h715230eacb8601c0();
            rsi_2 = rax_4;
            *var_d8[8] = rax_4;
            int64_t var_c8 = 1;
            var_d8 = 1;
        }
        
        selinux::OpaqueSecurityContext::from_c_str::h368aba2e3de4a508(&var_b0, rsi_2);
        
        if (var_b0 != 0xa)
        {
            *(arg1 + 0x30) = *var_88[8];
            int128_t zmm0_2 = var_b0;
            *(arg1 + 0x20) = var_9c;
            *(arg1 + 0x10) = var_ac;
            *arg1 = zmm0_2;
            *(arg1 + 0x38) = "Creating new contextSetting new …";
            *(arg1 + 0x40) = 0x14;
        }
        else
        {
            *(arg1 + 8) = *var_ac[4];
            *arg1 = 0x11;
        }
        
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$core..ffi..c_str..CStr$GT$$GT$::h347652f5a30ae63e(&var_d8);
    }
    
    return core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h1515c5d0d295c3c5();
}
