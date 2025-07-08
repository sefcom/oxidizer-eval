
  int64_t uu_dd::Dest::seek::hf206f28f02b500d6(char* arg1, void* arg2)

{
    void* const var_68;
    char var_60;
    int64_t result;
    int64_t rdx_1;
    
    switch (*arg1)
    {
        case 0:
        {
            char var_60_1 = 0;
            var_68 = arg2;
            result = std::io::copy::generic_copy::h685c02dd94feb843(&var_68, &arg1[8]);
            break;
        }
        case 1:
        {
            int64_t r15_1 = arg2;
            int32_t var_78;
            uu_dd::try_get_len_of_block_device::hf00af9fe29cc4b56(&var_78, &arg1[4]);
            int64_t var_70;
            
            if (var_78 == 1 && var_70 < r15_1)
            {
                int64_t rax_3;
                int64_t rdx_2;
                rax_3 = uucore::util_name::h60d842bf27b05e82();
                int64_t var_28 = rax_3;
                int64_t var_20_1 = rdx_2;
                int64_t* var_38 = &var_28;
                int64_t (* var_30_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                var_68 = &data_561008;
                var_60 = 2;
                int64_t var_48_1 = 0;
                int64_t** var_58_1 = &var_38;
                int64_t var_50_1 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_68);
                var_68 = &data_5610e0;
                var_60 = 1;
                int64_t var_58_2 = 8;
                var_50_1 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_68);
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::h7e0cb750979df1d6(&var_78);
                return 0;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::h7e0cb750979df1d6(&var_78);
            core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(r15_1 >> 0x3f);
            result = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(
                &arg1[4], 2, r15_1);
            break;
        }
        case 2:
        {
            var_68 = &arg1[4];
            var_60 = arg2;
            result = std::io::copy::generic_copy::h94e6c8f4c841e7c1(&var_68);
            break;
        }
        case 3:
        {
            result = 0;
            break;
        }
    }
    
    return result;
}
