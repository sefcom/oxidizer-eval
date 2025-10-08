
  fn uu_dd::Dest::seek::h5a64bc595251d974(arg1: *mut i8, arg2: *mut c_void) -> i64

{
    let mut var_78: *mut c_void;
    let mut var_68: i8;
    let mut result: i64;
    let mut rdx_1: i64;
    
    match *arg1
    {
        0 =>
        {
            let var_68_1: i8 = 0;
            var_78 = arg2;
            let var_70_1: *mut c_void = arg2;
            result = std::io::copy::generic_copy::h5d155776f99ed8a8(&var_78, &arg1[8]);
            result
        }
        1 =>
        {
            let r15_1: i64 = arg2;
            let mut var_48: i64;
            uu_dd::try_get_len_of_block_device::hb29413a8db7bcc7d(&var_48, &arg1[4]);
            let rax_3: i64 = var_48;
            let var_40: i64;
            
            if rax_3 == 2 || (rax_3 & 1) == 0 || var_40 >= r15_1
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::hc8d39d0616c700a4(&var_48);
                core::result::Result$LT$T$C$E$GT$::unwrap::hab12e77de6c67244(r15_1 >> 0x3f);
                result = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(
                    &arg1[4], 2, r15_1);
                return result;
            }
            
            let mut rax_4: i64;
            let mut rdx_2: i64;
            rax_4 = uucore::util_name::h074417a1e6395129();
            let mut var_28: i64 = rax_4;
            let var_20_1: i64 = rdx_2;
            let mut var_38: *mut i64 = &var_28;
            let var_30_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
            var_78 = &data_53dc60;
            let var_70_3: i64 = 2;
            let var_58_1: i64 = 0;
            var_68 = &var_38;
            let mut var_60_1: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_78);
            var_78 = &data_53ddc8;
            let var_70_4: i64 = 1;
            var_68 = 8;
            var_60_1 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_78);
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::hc8d39d0616c700a4(&var_48);
            0
        }
        2 =>
        {
            var_78 = &arg1[4];
            let var_70_2: *mut c_void = arg2;
            var_68 = arg2;
            result = std::io::copy::generic_copy::hbe12d708de713511(&var_78);
            result
        }
        3 =>
        {
            0
        }
    }
}
