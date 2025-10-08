
  int64_t fd::walk::WorkerState::build_overrides::h07e07fdbe9066c9a(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    void var_80;
    ignore::gitignore::GitignoreBuilder::new::hdada0b04754bdf0d(&var_80, arg4);
    int128_t var_128;
    int64_t var_e8;
    int128_t var_b8;
    
    if (!arg3)
    {
        label_5f85f3:
        ignore::overrides::OverrideBuilder::build::hc0202f9ccbfecce3(&var_e8, &var_80);
        int128_t var_d8;
        int128_t var_c8;
        
        if (!(0 + -(var_e8)))
        {
            int64_t var_88;
            arg1[0xc] = var_88;
            int128_t var_98;
            *(arg1 + 0x50) = var_98;
            int128_t var_a8;
            *(arg1 + 0x40) = var_a8;
            int128_t zmm0_1 = var_e8;
            *(arg1 + 0x30) = var_b8;
            *(arg1 + 0x20) = var_c8;
            *(arg1 + 0x10) = var_d8;
            *arg1 = zmm0_1;
        }
        else
        {
            int64_t var_f8_1 = *var_b8[8];
            int128_t var_108_1 = var_c8;
            int128_t var_118_1 = var_d8;
            int128_t var_e0;
            var_128 = var_e0;
            arg1[1] = fd::walk::WorkerState::build_overrides::_$u7b$$u7b$closure$u7d$$u7d$::h88ec5f666a7b8bb7(&var_128);
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        int64_t rbp_1 = 0;
        
        while (true)
        {
            ignore::overrides::OverrideBuilder::add::h08511d1b8bd831bd(&var_128, &var_80, 
                *(arg2 + rbp_1 + 8), *(arg2 + rbp_1 + 0x10));
            
            if (var_128 != 9)
            {
                int64_t var_f8;
                var_b8 = var_f8;
                int128_t var_108;
                int128_t var_c8_1 = var_108;
                int128_t var_118;
                int128_t var_d8_1 = var_118;
                var_e8 = var_128;
                arg1[1] = fd::walk::WorkerState::build_overrides::_$u7b$$u7b$closure$u7d$$u7d$::h032f1114b7bc68dd(&var_e8);
                *arg1 = -0x8000000000000000;
                break;
            }
            
            rbp_1 += 0x18;
            
            if (arg3 * 0x18 == rbp_1)
                goto label_5f85f3;
        }
    }
    return core::ptr::drop_in_place$LT$ignore..overrides..OverrideBuilder$GT$::h0428f109c44de354(
        &var_80);
}
