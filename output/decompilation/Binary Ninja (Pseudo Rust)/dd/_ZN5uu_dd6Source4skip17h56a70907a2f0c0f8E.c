
  fn uu_dd::Source::skip::h56a70907a2f0c0f8(arg1: *mut i32, arg2: i64) -> i64

{
    let rax: i32 = *arg1;
    
    if rax == 0
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::hab12e77de6c67244(arg2 >> 0x3f);
        /* tailcall */
        return _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(&arg1[1], 
            2, arg2);
    }
    
    let mut result: i64;
    let mut var_88: *mut c_void;
    
    if rax != 1
    {
        var_88 = &arg1[1];
        let var_80_3: i64 = arg2;
        let var_78_3: i64 = arg2;
        let mut rdx_3: i64;
        result = std::io::copy::generic_copy::hbe12d708de713511(&var_88);
    }
    else
    {
        let mut var_58: *mut *mut *mut c_void;
        uu_dd::try_get_len_of_block_device::hb29413a8db7bcc7d(&var_58, &arg1[1]);
        let rax_1: *mut *mut *mut c_void = var_58;
        let var_50: i64;
        let mut var_48: *mut *mut c_void;
        let mut var_38: *mut c_void;
        
        if rax_1 != 2 && (rax_1 & 1) != 0 && var_50 < arg2
        {
            let mut rax_2: *mut c_void;
            let mut rdx: i64;
            rax_2 = uucore::util_name::h074417a1e6395129();
            var_38 = rax_2;
            let var_30_1: i64 = rdx;
            var_48 = &var_38;
            let var_40_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
            var_88 = &data_53dc60;
            let var_80_1: i64 = 2;
            let var_68_1: i64 = 0;
            let var_78_1: *mut *mut *mut c_void = &var_48;
            let mut var_70_1: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
            var_88 = &data_53dc80;
            let var_80_2: i64 = 1;
            let var_78_2: i64 = 8;
            var_70_1 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::hc8d39d0616c700a4(&var_58);
            return 0;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::hc8d39d0616c700a4(&var_58);
        var_38 = &arg1[1];
        let var_30_2: i64 = arg2;
        let var_28_1: i64 = arg2;
        let mut rdx_4: i64;
        result = std::io::copy::generic_copy::hbe12d708de713511(&var_38);
        
        if ((arg2 <= rdx_4 | result) & 1) == 0
        {
            let mut rax_4: *mut *mut c_void;
            let mut rdx_5: i64;
            rax_4 = uucore::util_name::h074417a1e6395129();
            var_48 = rax_4;
            let var_40_2: i64 = rdx_5;
            var_58 = &var_48;
            let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
            var_88 = &data_53dc60;
            let var_80_4: i64 = 2;
            let var_68_2: i64 = 0;
            let var_78_4: *mut *mut *mut *mut c_void = &var_58;
            let mut var_70_2: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
            var_88 = &data_53dc90;
            let var_80_5: i64 = 1;
            let var_78_5: i64 = 8;
            var_70_2 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
        }
    }
    result
}
