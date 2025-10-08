
  fn fd::walk::WorkerState::build_overrides::h07e07fdbe9066c9a(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void) -> i64

{
    let mut var_80: ();
    ignore::gitignore::GitignoreBuilder::new::hdada0b04754bdf0d(&var_80, arg4);
    let mut var_128: i128;
    let mut var_e8: i64;
    let mut var_b8: i128;
    
    if arg3 == 0
    {
        'label_5f85f3:
        ignore::overrides::OverrideBuilder::build::hc0202f9ccbfecce3(&var_e8, &var_80);
        let var_d8: i128;
        let var_c8: i128;
        
        if !(0 + -(var_e8))
        {
            let var_88: i64;
            arg1[0xc] = var_88;
            let var_98: i128;
            *arg1.byte_offset(0x50) = var_98;
            let var_a8: i128;
            *arg1.byte_offset(0x40) = var_a8;
            let zmm0_1: i128 = var_e8;
            *arg1.byte_offset(0x30) = var_b8;
            *arg1.byte_offset(0x20) = var_c8;
            *arg1.byte_offset(0x10) = var_d8;
            *arg1 = zmm0_1;
        }
        else
        {
            let var_f8_1: i64 = *var_b8[8];
            let var_108_1: i128 = var_c8;
            let var_118_1: i128 = var_d8;
            let var_e0: i128;
            var_128 = var_e0;
            arg1[1] = fd::walk::WorkerState::build_overrides::_$u7b$$u7b$closure$u7d$$u7d$::h88ec5f666a7b8bb7(&var_128);
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        let mut rbp_1: i64 = 0;
        
        loop
        {
            ignore::overrides::OverrideBuilder::add::h08511d1b8bd831bd(&var_128, &var_80, 
                *(arg2 + rbp_1 + 8), *(arg2 + rbp_1 + 0x10));
            
            if var_128 != 9
            {
                let var_f8: i64;
                var_b8 = var_f8;
                let var_108: i128;
                let var_c8_1: i128 = var_108;
                let var_118: i128;
                let var_d8_1: i128 = var_118;
                var_e8 = var_128;
                arg1[1] = fd::walk::WorkerState::build_overrides::_$u7b$$u7b$closure$u7d$$u7d$::h032f1114b7bc68dd(&var_e8);
                *arg1 = -0x8000000000000000;
                break;
            }
            
            rbp_1 += 0x18;
            
            if arg3 * 0x18 == rbp_1
            {
                goto 'label_5f85f3;
            }
        }
    }
    core::ptr::drop_in_place$LT$ignore..overrides..OverrideBuilder$GT$::h0428f109c44de354(&var_80)
}
