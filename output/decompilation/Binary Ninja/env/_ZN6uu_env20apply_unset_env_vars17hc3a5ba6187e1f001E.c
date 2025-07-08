
  int128_t* uu_env::apply_unset_env_vars::hc3a5ba6187e1f001(void* arg1)

{
    int64_t rax = *(arg1 + 0x20);
    int64_t rcx_2 = (*(arg1 + 0x28) << 4) + rax;
    int64_t var_d0 = rax;
    int64_t var_c8 = rcx_2;
    int64_t* i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4336037a61c6f015(&var_d0);
    
    if (i_2)
    {
        int64_t* i_1 = i_2;
        char const (** const var_d8_1)[0xfa] = &data_548bc8;
        int64_t* i;
        
        do
        {
            int64_t rbx_1 = *i_1;
            int64_t r13_1 = i_1[1];
            int64_t var_c0 = -0x8000000000000000;
            int64_t var_b8_1 = rbx_1;
            int64_t var_b0_1 = r13_1;
            
            if (!r13_1)
            {
                label_4ced79:
                int64_t var_68 = 1;
                int64_t var_60_1 = rbx_1;
                int64_t var_58_1 = r13_1;
                char var_50_1 = 1;
                int64_t* var_78 = &var_68;
                int64_t (* var_70_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                void** const var_a8 = &data_548ba8;
                int64_t var_a0_1 = 2;
                int64_t var_88_1 = 0;
                int64_t** var_98_1 = &var_78;
                int64_t var_90_1 = 1;
                int128_t var_48;
                core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&var_48, &var_a8);
                var_90_1 = 0x7d;
                var_a8 = var_48;
                int64_t var_38;
                int64_t var_98_2 = var_38;
                int128_t* result = alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&var_a8);
                core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::hef710a318dedb98d(&var_c0);
                return result;
            }
            
            char rax_1 = uu_env::native_int_str::NativeStr::contains::h70e4bf3944233ada(&var_c0, 
                &data_417568);
            uint32_t rax_3;
            
            if (rax_1)
            {
                rax_3 = rax_1;
                label_4ced70:
                
                if (rax_3 != 2)
                    goto label_4ced79;
                
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            char rax_2 =
                uu_env::native_int_str::NativeStr::contains::h70e4bf3944233ada(&var_c0, "=");
            
            if (rax_2)
            {
                rax_3 = rax_2;
                var_d8_1 = &data_548be0;
                goto label_4ced70;
            }
            
            std::env::remove_var::h15b89aa0b6126639(i_1);
            core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::hef710a318dedb98d(
                &var_c0);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4336037a61c6f015(&var_d0);
            i_1 = i;
        } while (i);
    }
    
    return nullptr;
}
