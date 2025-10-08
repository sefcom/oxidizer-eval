
  uint64_t zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::deserialize::he176e887fb59a3e7(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_c0 = 0x2000000;
    char rax;
    int64_t rdx;
    rax = bincode::internal::serialized_size::hb22fc907dc4f82e9(&var_c0);
    int64_t rax_1 = core::result::Result$LT$T$C$E$GT$::unwrap::hafceaa8716aa428b(rax, rdx);
    uint64_t result;
    void** const var_b0;
    
    if (arg3 < rax_1)
    {
        var_b0 = &data_534af0;
        int64_t var_a8_1 = 1;
        int64_t var_a0_1 = 8;
        int128_t var_98_1 = {0};
        result = anyhow::__private::format_err::h09b344f6a077676a(&var_b0);
        arg1[1] = result;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        int64_t var_60;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h7a84bcba58f46e1f(&var_60, 
            arg2, arg3, rax_1);
        int64_t var_58;
        uint64_t rdx_3 =
            bincode::internal::deserialize_seed::haadefd01c21343c3(&var_b0, var_60, var_58);
        
        if (var_b0 == 1)
        {
            int64_t var_a8;
            result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::hacc644a7f9a110d3(var_a8);
            arg1[1] = result;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            int32_t rax_2 = *var_b0[4];
            int32_t* var_80;
            
            if (rax_2 != 3)
            {
                int32_t var_b4 = rax_2;
                var_80 = &var_b4;
                uint64_t (* var_78)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
                char const* const var_70_1 = &data_418e14;
                uint64_t (* var_68_1)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
                var_b0 = &data_534b00;
                int64_t var_a8_2 = 3;
                int128_t var_98;
                *var_98[8] = 0;
                int32_t** var_a0_2 = &var_80;
                var_98 = 2;
                void var_40;
                core::option::Option$LT$T$GT$::map_or_else::h14192bf0a0209b71(&var_40, 0, rdx_3, 
                    &var_b0);
                result =
                    anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::hc23a566b3b9e9070(&var_40);
                arg1[1] = result;
                *arg1 = -0x8000000000000000;
            }
            else
            {
                int64_t var_50;
                int64_t var_48;
                bincode::internal::deserialize_seed::h6b6492c86183f11f(&var_b0, var_50, var_48);
                anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h239f06cbae04b87d(&var_80, &var_b0);
                int32_t* rcx_2 = var_80;
                uint64_t result_1;
                result = result_1;
                
                if (rcx_2 != -0x8000000000000000)
                {
                    *arg1 = rcx_2;
                    arg1[1] = result;
                    int64_t var_70;
                    arg1[2] = var_70;
                }
                else
                {
                    arg1[1] = result;
                    *arg1 = -0x8000000000000000;
                }
            }
        }
    }
    return result;
}
