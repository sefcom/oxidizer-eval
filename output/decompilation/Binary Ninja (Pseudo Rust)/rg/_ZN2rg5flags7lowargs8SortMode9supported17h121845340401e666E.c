
  fn rg::flags::lowargs::SortMode::supported::h121845340401e666(arg1: i8) -> u64

{
    let mut var_1c8: *mut *mut c_void;
    let mut var_1c0: *mut *mut c_void;
    let var_1b8: i32;
    let mut var_168: i32;
    let mut var_160: fn(arg1: *mut i64, arg2: *mut i64) -> i64;
    let mut var_b8: *mut *mut [i8; 0xd0];
    let mut result: u64;
    
    match jump_table_462d60[arg1]
    {
        0x1f0ccc =>
        {
            0
        }
        0x1f0cd7 =>
        {
            let mut var_198: i64;
            std::env::current_exe::h5073ac412771085b(&var_198);
            let mut var_190: ();
            
            if !(0 + -(var_198))
            {
                rg::flags::lowargs::SortMode::supported::_$u7b$$u7b$closure$u7d$$u7d$::hc056460e351461d8(&var_168, &var_198);
                
                if var_168 != 2
                {
                    memcpy(&var_b8, &var_168, 0xb0);
                    std::fs::Metadata::accessed::he9d0f32bdb438e2a(&var_1c0, &var_b8);
                    
                    if var_1b8 != 0x3b9aca00
                    {
                        return 0;
                    }
                }
                else
                {
                    var_1c0 = var_160;
                }
            }
            else
            {
                var_1c0 = var_190;
            }
            var_1c8 = var_1c0;
            var_168 = &var_1c8;
            var_160 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_b8 = &data_7eb488;
            let var_b0: i64 = 1;
            let var_98: i64 = 0;
            let var_a8: *mut i32 = &var_168;
            let var_a0: i64 = 1;
            result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_b8);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_1c8);
            result
        }
        0x1f0cf2 =>
        {
            let mut var_180: i64;
            std::env::current_exe::h5073ac412771085b(&var_180);
            let mut var_178: ();
            
            if !(0 + -(var_180))
            {
                rg::flags::lowargs::SortMode::supported::_$u7b$$u7b$closure$u7d$$u7d$::hc056460e351461d8(&var_168, &var_180);
                
                if var_168 != 2
                {
                    memcpy(&var_b8, &var_168, 0xb0);
                    std::fs::Metadata::created::hedfca1c6312fe34e(&var_1c0, &var_b8);
                    
                    if var_1b8 != 0x3b9aca00
                    {
                        return 0;
                    }
                }
                else
                {
                    var_1c0 = var_160;
                }
            }
            else
            {
                var_1c0 = var_178;
            }
            var_1c8 = var_1c0;
            var_168 = &var_1c8;
            var_160 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_b8 = &data_7eb498;
            let var_b0_1: i64 = 1;
            let var_98_1: i64 = 0;
            let var_a8_1: *mut i32 = &var_168;
            let var_a0_1: i64 = 1;
            result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_b8);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_1c8);
            result
        }
        0x1f0d14 =>
        {
            let mut var_1b0: i64;
            std::env::current_exe::h5073ac412771085b(&var_1b0);
            let mut var_1a8: ();
            
            if !(0 + -(var_1b0))
            {
                rg::flags::lowargs::SortMode::supported::_$u7b$$u7b$closure$u7d$$u7d$::hc056460e351461d8(&var_168, &var_1b0);
                
                if var_168 != 2
                {
                    memcpy(&var_b8, &var_168, 0xb0);
                    std::fs::Metadata::modified::he3c19aa683c05d81(&var_1c0, &var_b8);
                    
                    if var_1b8 != 0x3b9aca00
                    {
                        return 0;
                    }
                }
                else
                {
                    var_1c0 = var_160;
                }
            }
            else
            {
                var_1c0 = var_1a8;
            }
            var_1c8 = var_1c0;
            var_168 = &var_1c8;
            var_160 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_b8 = &data_7eb478;
            let var_b0_2: i64 = 1;
            let var_98_2: i64 = 0;
            let var_a8_2: *mut i32 = &var_168;
            let var_a0_2: i64 = 1;
            result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_b8);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_1c8);
            result
        }
    }
}
