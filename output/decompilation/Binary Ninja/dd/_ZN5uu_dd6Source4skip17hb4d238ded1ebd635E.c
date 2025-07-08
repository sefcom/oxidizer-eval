
  int64_t uu_dd::Source::skip::hb4d238ded1ebd635(int32_t* arg1, int64_t arg2)

{
    int32_t rax = *arg1;
    int64_t result;
    int64_t rdx_2;
    
    if (!rax)
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(arg2 >> 0x3f);
        result = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&arg1[1], 
            2, arg2);
    }
    else
    {
        void* var_68;
        
        if (rax != 1)
        {
            var_68 = &arg1[1];
            int64_t var_60_3 = arg2;
            result = std::io::copy::generic_copy::h94e6c8f4c841e7c1(&var_68);
        }
        else
        {
            int32_t var_78;
            uu_dd::try_get_len_of_block_device::hf00af9fe29cc4b56(&var_78, &arg1[1]);
            int64_t var_70;
            int64_t* var_38;
            int64_t var_28;
            
            if (var_78 == 1 && var_70 < arg2)
            {
                int64_t rax_1;
                int64_t rdx;
                rax_1 = uucore::util_name::h60d842bf27b05e82();
                var_28 = rax_1;
                int64_t var_20_1 = rdx;
                var_38 = &var_28;
                int64_t (* var_30_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                var_68 = &data_561008;
                int64_t var_60_1 = 2;
                int64_t var_48_1 = 0;
                int64_t** var_58_1 = &var_38;
                int64_t var_50_1 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_68);
                var_68 = &data_561028;
                int64_t var_60_2 = 1;
                int64_t var_58_2 = 8;
                var_50_1 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_68);
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::h7e0cb750979df1d6(&var_78);
                return 0;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::h7e0cb750979df1d6(&var_78);
            var_78 = &arg1[1];
            int64_t var_70_1 = arg2;
            int64_t rdx_4;
            result = std::io::copy::generic_copy::h94e6c8f4c841e7c1(&var_78);
            
            if (!result && rdx_4 < arg2)
            {
                int64_t rax_2;
                int64_t rdx_5;
                rax_2 = uucore::util_name::h60d842bf27b05e82();
                var_28 = rax_2;
                int64_t var_20_2 = rdx_5;
                var_38 = &var_28;
                int64_t (* var_30_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                var_68 = &data_561008;
                int64_t var_60_4 = 2;
                int64_t var_48_2 = 0;
                int64_t** var_58_3 = &var_38;
                int64_t var_50_2 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_68);
                var_68 = &data_561038;
                int64_t var_60_5 = 1;
                int64_t var_58_4 = 8;
                var_50_2 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_68);
            }
        }
    }
    return result;
}
