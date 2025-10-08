
  uint64_t rg::flags::lowargs::SortMode::supported::h121845340401e666(char arg1)

{
    void** var_1c8;
    void** var_1c0;
    int32_t var_1b8;
    int32_t var_168;
    int64_t (* var_160)(int64_t* arg1, int64_t* arg2);
    char const (** const var_b8)[0xd0];
    uint64_t result;
    
    switch (jump_table_462d60[arg1])
    {
        case 0x1f0ccc:
        {
            return 0;
            break;
        }
        case 0x1f0cd7:
        {
            int64_t var_198;
            std::env::current_exe::h5073ac412771085b(&var_198);
            void var_190;
            
            if (!(0 + -(var_198)))
            {
                rg::flags::lowargs::SortMode::supported::_$u7b$$u7b$closure$u7d$$u7d$::hc056460e351461d8(&var_168, &var_198);
                
                if (var_168 != 2)
                {
                    memcpy(&var_b8, &var_168, 0xb0);
                    std::fs::Metadata::accessed::he9d0f32bdb438e2a(&var_1c0, &var_b8);
                    
                    if (var_1b8 != 0x3b9aca00)
                        return 0;
                }
                else
                    var_1c0 = var_160;
            }
            else
                var_1c0 = var_190;
            var_1c8 = var_1c0;
            var_168 = &var_1c8;
            var_160 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_b8 = &data_7eb488;
            int64_t var_b0 = 1;
            int64_t var_98 = 0;
            int32_t* var_a8 = &var_168;
            int64_t var_a0 = 1;
            result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_b8);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_1c8);
            return result;
            break;
        }
        case 0x1f0cf2:
        {
            int64_t var_180;
            std::env::current_exe::h5073ac412771085b(&var_180);
            void var_178;
            
            if (!(0 + -(var_180)))
            {
                rg::flags::lowargs::SortMode::supported::_$u7b$$u7b$closure$u7d$$u7d$::hc056460e351461d8(&var_168, &var_180);
                
                if (var_168 != 2)
                {
                    memcpy(&var_b8, &var_168, 0xb0);
                    std::fs::Metadata::created::hedfca1c6312fe34e(&var_1c0, &var_b8);
                    
                    if (var_1b8 != 0x3b9aca00)
                        return 0;
                }
                else
                    var_1c0 = var_160;
            }
            else
                var_1c0 = var_178;
            var_1c8 = var_1c0;
            var_168 = &var_1c8;
            var_160 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_b8 = &data_7eb498;
            int64_t var_b0_1 = 1;
            int64_t var_98_1 = 0;
            int32_t* var_a8_1 = &var_168;
            int64_t var_a0_1 = 1;
            result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_b8);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_1c8);
            return result;
            break;
        }
        case 0x1f0d14:
        {
            int64_t var_1b0;
            std::env::current_exe::h5073ac412771085b(&var_1b0);
            void var_1a8;
            
            if (!(0 + -(var_1b0)))
            {
                rg::flags::lowargs::SortMode::supported::_$u7b$$u7b$closure$u7d$$u7d$::hc056460e351461d8(&var_168, &var_1b0);
                
                if (var_168 != 2)
                {
                    memcpy(&var_b8, &var_168, 0xb0);
                    std::fs::Metadata::modified::he3c19aa683c05d81(&var_1c0, &var_b8);
                    
                    if (var_1b8 != 0x3b9aca00)
                        return 0;
                }
                else
                    var_1c0 = var_160;
            }
            else
                var_1c0 = var_1a8;
            var_1c8 = var_1c0;
            var_168 = &var_1c8;
            var_160 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_b8 = &data_7eb478;
            int64_t var_b0_2 = 1;
            int64_t var_98_2 = 0;
            int32_t* var_a8_2 = &var_168;
            int64_t var_a0_2 = 1;
            result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_b8);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_1c8);
            return result;
            break;
        }
    }
}
