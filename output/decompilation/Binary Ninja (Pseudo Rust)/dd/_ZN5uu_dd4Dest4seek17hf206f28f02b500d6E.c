
  fn uu_dd::Dest::seek::hf206f28f02b500d6(arg1: *mut i8, arg2: *mut c_void) -> i64

{
    let mut var_68: *mut c_void;
    let mut var_60: i8;
    let mut result: i64;
    let mut rdx_1: i64;
    
    match *arg1
    {
        0 =>
        {
            let var_60_1: i8 = 0;
            var_68 = arg2;
            result = std::io::copy::generic_copy::h685c02dd94feb843(&var_68, &arg1[8]);
        }
        1 =>
        {
            let r15_1: i64 = arg2;
            let mut var_78: i32;
            uu_dd::try_get_len_of_block_device::hf00af9fe29cc4b56(&var_78, &arg1[4]);
            let var_70: i64;
            
            if var_78 == 1 && var_70 < r15_1
            {
                let mut rax_3: i64;
                let mut rdx_2: i64;
                rax_3 = uucore::util_name::h60d842bf27b05e82();
                let mut var_28: i64 = rax_3;
                let var_20_1: i64 = rdx_2;
                let mut var_38: *mut i64 = &var_28;
                let var_30_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                var_68 = &data_561008;
                var_60 = 2;
                let var_48_1: i64 = 0;
                let var_58_1: *mut *mut i64 = &var_38;
                let mut var_50_1: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_68);
                var_68 = &data_5610e0;
                var_60 = 1;
                let var_58_2: i64 = 8;
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
        }
        2 =>
        {
            var_68 = &arg1[4];
            var_60 = arg2;
            result = std::io::copy::generic_copy::h94e6c8f4c841e7c1(&var_68);
        }
        3 =>
        {
            result = 0;
        }
    }
    
    result
}
