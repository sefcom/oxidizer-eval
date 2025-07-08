
  fn uu_dd::Source::skip::hb4d238ded1ebd635(arg1: *mut i32, arg2: i64) -> i64

{
    let rax: i32 = *arg1;
    let mut result: i64;
    let mut rdx_2: i64;
    
    if rax == 0
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(arg2 >> 0x3f);
        result = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&arg1[1], 
            2, arg2);
    }
    else
    {
        let mut var_68: *mut c_void;
        
        if rax != 1
        {
            var_68 = &arg1[1];
            let var_60_3: i64 = arg2;
            result = std::io::copy::generic_copy::h94e6c8f4c841e7c1(&var_68);
        }
        else
        {
            let mut var_78: i32;
            uu_dd::try_get_len_of_block_device::hf00af9fe29cc4b56(&var_78, &arg1[1]);
            let var_70: i64;
            let mut var_38: *mut i64;
            let mut var_28: i64;
            
            if var_78 == 1 && var_70 < arg2
            {
                let mut rax_1: i64;
                let mut rdx: i64;
                rax_1 = uucore::util_name::h60d842bf27b05e82();
                var_28 = rax_1;
                let var_20_1: i64 = rdx;
                var_38 = &var_28;
                let var_30_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                var_68 = &data_561008;
                let var_60_1: i64 = 2;
                let var_48_1: i64 = 0;
                let var_58_1: *mut *mut i64 = &var_38;
                let mut var_50_1: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_68);
                var_68 = &data_561028;
                let var_60_2: i64 = 1;
                let var_58_2: i64 = 8;
                var_50_1 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_68);
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::h7e0cb750979df1d6(&var_78);
                return 0;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::h7e0cb750979df1d6(&var_78);
            var_78 = &arg1[1];
            let var_70_1: i64 = arg2;
            let mut rdx_4: i64;
            result = std::io::copy::generic_copy::h94e6c8f4c841e7c1(&var_78);
            
            if result == 0 && rdx_4 < arg2
            {
                let mut rax_2: i64;
                let mut rdx_5: i64;
                rax_2 = uucore::util_name::h60d842bf27b05e82();
                var_28 = rax_2;
                let var_20_2: i64 = rdx_5;
                var_38 = &var_28;
                let var_30_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                var_68 = &data_561008;
                let var_60_4: i64 = 2;
                let var_48_2: i64 = 0;
                let var_58_3: *mut *mut i64 = &var_38;
                let mut var_50_2: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_68);
                var_68 = &data_561038;
                let var_60_5: i64 = 1;
                let var_58_4: i64 = 8;
                var_50_2 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_68);
            }
        }
    }
    result
}
