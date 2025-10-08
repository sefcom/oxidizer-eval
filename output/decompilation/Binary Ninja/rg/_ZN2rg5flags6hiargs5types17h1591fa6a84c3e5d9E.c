
  int64_t rg::flags::hiargs::types::h1591fa6a84c3e5d9(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    void var_78;
    ignore::types::TypesBuilder::new::h122fb34b094e5283(&var_78);
    ignore::types::TypesBuilder::add_defaults::h9c0a1c66c6d96833(&var_78);
    int128_t var_138;
    int64_t var_f8;
    int128_t var_f0;
    int128_t var_e0;
    int128_t var_d0;
    
    if (!arg3)
    {
        label_651e8d:
        ignore::types::TypesBuilder::build::h4beff1898c4bd452(&var_f8, &var_78);
        int64_t rax_6 = var_f8;
        var_138 = var_f0;
        int128_t var_118_1 = var_d0;
        int64_t var_c0;
        
        if (-(rax_6) != -0x8000000000000000)
        {
            int64_t var_88;
            arg1[0xe] = var_88;
            int128_t var_98;
            *(arg1 + 0x60) = var_98;
            int128_t var_a8;
            *(arg1 + 0x50) = var_a8;
            int128_t var_b8;
            *(arg1 + 0x40) = var_b8;
            arg1[7] = var_c0;
            int128_t zmm0_1 = var_138;
            *(arg1 + 0x28) = var_118_1;
            *(arg1 + 0x18) = var_e0;
            *(arg1 + 8) = zmm0_1;
            *arg1 = rax_6;
        }
        else
        {
            *var_d0[8] = var_c0;
            int128_t zmm1_1 = var_e0;
            var_e0 = var_118_1;
            var_f0 = zmm1_1;
            var_f8 = var_138;
            arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_f8);
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        int64_t rbp_1 = 0;
        
        while (true)
        {
            switch (*(arg2 + rbp_1))
            {
                case 0:
                {
                    ignore::types::TypesBuilder::clear::h6fd8f43672f8a9b1(&var_78, 
                        *(arg2 + rbp_1 + 0x10), *(arg2 + rbp_1 + 0x18));
                    break;
                }
                case 1:
                {
                    ignore::types::TypesBuilder::add_def::hb323634d24804538(&var_138, &var_78, 
                        *(arg2 + rbp_1 + 0x10), *(arg2 + rbp_1 + 0x18));
                    
                    if (var_138 != 9)
                    {
                        int64_t var_108;
                        *var_d0[8] = var_108;
                        int128_t var_118;
                        var_e0 = var_118;
                        int128_t var_128;
                        var_f0 = var_128;
                        var_f8 = var_138;
                        arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_f8);
                        break;
                    }
                    break;
                }
                case 2:
                {
                    ignore::types::TypesBuilder::select::h6f4757711341892c(&var_78, 
                        *(arg2 + rbp_1 + 0x10), *(arg2 + rbp_1 + 0x18));
                    break;
                }
                case 3:
                {
                    ignore::types::TypesBuilder::negate::hb8a8a4290c83549c(&var_78, 
                        *(arg2 + rbp_1 + 0x10), *(arg2 + rbp_1 + 0x18));
                    break;
                }
            }
            
            rbp_1 += 0x20;
            
            if (arg3 << 5 == rbp_1)
                goto label_651e8d;
        }
        
        *arg1 = -0x8000000000000000;
    }
    return core::ptr::drop_in_place$LT$ignore..types..TypesBuilder$GT$::hd937f0a8ba1360d7(&var_78);
}
