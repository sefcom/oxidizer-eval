
  fn rg::flags::hiargs::types::h1591fa6a84c3e5d9(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> i64

{
    let mut var_78: ();
    ignore::types::TypesBuilder::new::h122fb34b094e5283(&var_78);
    ignore::types::TypesBuilder::add_defaults::h9c0a1c66c6d96833(&var_78);
    let mut var_138: i128;
    let mut var_f8: i64;
    let mut var_f0: i128;
    let mut var_e0: i128;
    let mut var_d0: i128;
    
    if arg3 == 0
    {
        'label_651e8d:
        ignore::types::TypesBuilder::build::h4beff1898c4bd452(&var_f8, &var_78);
        let rax_6: i64 = var_f8;
        var_138 = var_f0;
        let var_118_1: i128 = var_d0;
        let var_c0: i64;
        
        if -(rax_6) != -0x8000000000000000
        {
            let var_88: i64;
            arg1[0xe] = var_88;
            let var_98: i128;
            *arg1.byte_offset(0x60) = var_98;
            let var_a8: i128;
            *arg1.byte_offset(0x50) = var_a8;
            let var_b8: i128;
            *arg1.byte_offset(0x40) = var_b8;
            arg1[7] = var_c0;
            let zmm0_1: i128 = var_138;
            *arg1.byte_offset(0x28) = var_118_1;
            *arg1.byte_offset(0x18) = var_e0;
            *arg1.byte_offset(8) = zmm0_1;
            *arg1 = rax_6;
        }
        else
        {
            *var_d0[8] = var_c0;
            let zmm1_1: i128 = var_e0;
            var_e0 = var_118_1;
            var_f0 = zmm1_1;
            var_f8 = var_138;
            arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_f8);
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        let mut rbp_1: i64 = 0;
        
        loop
        {
            match *arg2.byte_offset(rbp_1)
            {
                0 =>
                {
                    ignore::types::TypesBuilder::clear::h6fd8f43672f8a9b1(&var_78, 
                        *arg2.byte_offset(rbp_1).byte_offset(0x10), 
                        *arg2.byte_offset(rbp_1).byte_offset(0x18));
                }
                1 =>
                {
                    ignore::types::TypesBuilder::add_def::hb323634d24804538(&var_138, &var_78, 
                        *arg2.byte_offset(rbp_1).byte_offset(0x10), 
                        *arg2.byte_offset(rbp_1).byte_offset(0x18));
                    
                    if var_138 != 9
                    {
                        let var_108: i64;
                        *var_d0[8] = var_108;
                        let var_118: i128;
                        var_e0 = var_118;
                        let var_128: i128;
                        var_f0 = var_128;
                        var_f8 = var_138;
                        arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_f8);
                        break;
                    }
                }
                2 =>
                {
                    ignore::types::TypesBuilder::select::h6f4757711341892c(&var_78, 
                        *arg2.byte_offset(rbp_1).byte_offset(0x10), 
                        *arg2.byte_offset(rbp_1).byte_offset(0x18));
                }
                3 =>
                {
                    ignore::types::TypesBuilder::negate::hb8a8a4290c83549c(&var_78, 
                        *arg2.byte_offset(rbp_1).byte_offset(0x10), 
                        *arg2.byte_offset(rbp_1).byte_offset(0x18));
                }
            }
            
            rbp_1 += 0x20;
            
            if arg3 << 5 == rbp_1
            {
                goto 'label_651e8d;
            }
        }
        
        *arg1 = -0x8000000000000000;
    }
    core::ptr::drop_in_place$LT$ignore..types..TypesBuilder$GT$::hd937f0a8ba1360d7(&var_78)
}
