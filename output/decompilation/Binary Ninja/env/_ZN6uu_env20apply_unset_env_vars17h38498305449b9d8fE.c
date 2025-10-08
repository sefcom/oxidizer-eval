
  uint64_t uu_env::apply_unset_env_vars::h38498305449b9d8f(void* arg1)

{
    int64_t rbp = *(arg1 + 0x28);
    
    if (rbp)
    {
        int64_t* r12_1 = *(arg1 + 0x20);
        int64_t i_1 = rbp << 4;
        int64_t i;
        
        do
        {
            int64_t r14_1 = *r12_1;
            int64_t rax_1 = r12_1[1];
            int64_t var_80 = -0x8000000000000000;
            int64_t var_78_1 = r14_1;
            int64_t var_70_1 = rax_1;
            
            if (!rax_1)
            {
                label_4753b3:
                int64_t rax_4 = *r12_1;
                int64_t rcx_1 = r12_1[1];
                int64_t var_68 = 1;
                int64_t var_60_1 = rax_4;
                int64_t var_58_1 = rcx_1;
                char var_50_1 = 1;
                int64_t* var_90 = &var_68;
                int64_t (* var_88_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                void** const var_c8 = &data_510c38;
                int64_t var_c0_1 = 2;
                int64_t var_a8_1 = 0;
                int64_t** var_b8_1 = &var_90;
                int64_t var_b0_1 = 1;
                int128_t var_48;
                core::option::Option$LT$T$GT$::map_or_else::h96013652e67eecbe(&var_48, &var_c8);
                var_b0_1 = 0x7d;
                var_c8 = var_48;
                int64_t var_38;
                int64_t var_b8_2 = var_38;
                uint64_t result = alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_c8);
                core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::h6fa88c11416956ac(-0x8000000000000000, r14_1);
                return result;
            }
            
            char rax_2 = uu_env::native_int_str::NativeStr::contains::hb8fde7d27ed4d3f1(&var_80, 
                &data_41c740);
            
            if (rax_2 == 2)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            if (rax_2 & 1)
                goto label_4753b3;
            
            char rax_3 =
                uu_env::native_int_str::NativeStr::contains::hb8fde7d27ed4d3f1(&var_80, "=");
            
            if (rax_3 == 2)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            if (rax_3 & 1)
                goto label_4753b3;
            
            std::env::remove_var::h2faae5d651d19217(r12_1);
            r12_1 = &r12_1[2];
            core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::h6fa88c11416956ac(
                -0x8000000000000000, r14_1);
            i = i_1;
            i_1 -= 0x10;
        } while (i != 0x10);
    }
    
    return 0;
}
