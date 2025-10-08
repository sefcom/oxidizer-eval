
  int64_t uu_dd::Source::skip::h56a70907a2f0c0f8(int32_t* arg1, int64_t arg2)

{
    int32_t rax = *arg1;
    
    if (!rax)
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::hab12e77de6c67244(arg2 >> 0x3f);
        /* tailcall */
        return _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(&arg1[1], 
            2, arg2);
    }
    
    int64_t result;
    void* const var_88;
    
    if (rax != 1)
    {
        var_88 = &arg1[1];
        int64_t var_80_3 = arg2;
        int64_t var_78_3 = arg2;
        int64_t rdx_3;
        result = std::io::copy::generic_copy::hbe12d708de713511(&var_88);
    }
    else
    {
        void*** var_58;
        uu_dd::try_get_len_of_block_device::hb29413a8db7bcc7d(&var_58, &arg1[1]);
        void*** rax_1 = var_58;
        int64_t var_50;
        void** var_48;
        void* var_38;
        
        if (rax_1 != 2 && rax_1 & 1 && var_50 < arg2)
        {
            void* rax_2;
            int64_t rdx;
            rax_2 = uucore::util_name::h074417a1e6395129();
            var_38 = rax_2;
            int64_t var_30_1 = rdx;
            var_48 = &var_38;
            int64_t (* var_40_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
            var_88 = &data_53dc60;
            int64_t var_80_1 = 2;
            int64_t var_68_1 = 0;
            void*** var_78_1 = &var_48;
            int64_t var_70_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
            var_88 = &data_53dc80;
            int64_t var_80_2 = 1;
            int64_t var_78_2 = 8;
            var_70_1 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::hc8d39d0616c700a4(&var_58);
            return 0;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::hc8d39d0616c700a4(&var_58);
        var_38 = &arg1[1];
        int64_t var_30_2 = arg2;
        int64_t var_28_1 = arg2;
        int64_t rdx_4;
        result = std::io::copy::generic_copy::hbe12d708de713511(&var_38);
        
        if (!((arg2 <= rdx_4 | result) & 1))
        {
            void** rax_4;
            int64_t rdx_5;
            rax_4 = uucore::util_name::h074417a1e6395129();
            var_48 = rax_4;
            int64_t var_40_2 = rdx_5;
            var_58 = &var_48;
            int64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
            var_88 = &data_53dc60;
            int64_t var_80_4 = 2;
            int64_t var_68_2 = 0;
            void**** var_78_4 = &var_58;
            int64_t var_70_2 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
            var_88 = &data_53dc90;
            int64_t var_80_5 = 1;
            int64_t var_78_5 = 8;
            var_70_2 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
        }
    }
    return result;
}
