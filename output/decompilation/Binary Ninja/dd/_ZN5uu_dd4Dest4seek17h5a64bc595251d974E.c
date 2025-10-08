
  int64_t uu_dd::Dest::seek::h5a64bc595251d974(char* arg1, void* arg2)

{
    void* const var_78;
    char var_68;
    int64_t result;
    int64_t rdx_1;
    
    switch (*arg1)
    {
        case 0:
        {
            char var_68_1 = 0;
            var_78 = arg2;
            void* var_70_1 = arg2;
            result = std::io::copy::generic_copy::h5d155776f99ed8a8(&var_78, &arg1[8]);
            return result;
            break;
        }
        case 1:
        {
            int64_t r15_1 = arg2;
            int64_t var_48;
            uu_dd::try_get_len_of_block_device::hb29413a8db7bcc7d(&var_48, &arg1[4]);
            int64_t rax_3 = var_48;
            int64_t var_40;
            
            if (rax_3 == 2 || !(rax_3 & 1) || var_40 >= r15_1)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::hc8d39d0616c700a4(&var_48);
                core::result::Result$LT$T$C$E$GT$::unwrap::hab12e77de6c67244(r15_1 >> 0x3f);
                result = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(
                    &arg1[4], 2, r15_1);
                return result;
            }
            
            int64_t rax_4;
            int64_t rdx_2;
            rax_4 = uucore::util_name::h074417a1e6395129();
            int64_t var_28 = rax_4;
            int64_t var_20_1 = rdx_2;
            int64_t* var_38 = &var_28;
            int64_t (* var_30_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
            var_78 = &data_53dc60;
            int64_t var_70_3 = 2;
            int64_t var_58_1 = 0;
            var_68 = &var_38;
            int64_t var_60_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_78);
            var_78 = &data_53ddc8;
            int64_t var_70_4 = 1;
            var_68 = 8;
            var_60_1 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_78);
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::hc8d39d0616c700a4(&var_48);
            return 0;
            break;
        }
        case 2:
        {
            var_78 = &arg1[4];
            void* var_70_2 = arg2;
            var_68 = arg2;
            result = std::io::copy::generic_copy::hbe12d708de713511(&var_78);
            return result;
            break;
        }
        case 3:
        {
            return 0;
            break;
        }
    }
}
