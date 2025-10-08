
  fn fuel_core_keygen::Command::exec::h7b13e9ffe44d0813(arg1: *mut i8, arg2: *mut i64) -> *mut i64

{
    let mut result: *mut i64;
    let mut result_1: i8;
    let var_1ff: i32;
    let var_1f8: i64;
    let var_1f0: i128;
    let mut var_1e0: i64;
    let result_2: *mut i64;
    let mut var_1d0: i128;
    let mut rcx_4: i64;
    let mut rdx_3: i8;
    
    if !(0 + -(*arg2))
    {
        fuel_core_keygen::parse_secret::h9a30821daaaf76fe(&var_1e0, *arg2.byte_offset(0x19), 
            arg2[1], arg2[2]);
        let rcx_2: i64 = var_1e0;
        result = result_2;
        
        if rcx_2 != 2
        {
            let var_170: i128;
            let var_d0_1: i128 = var_170;
            let var_180: i128;
            let var_e0_1: i128 = var_180;
            let var_190: i128;
            let var_f0_1: i128 = var_190;
            let var_1a0: i128;
            let var_100_1: i128 = var_1a0;
            let var_1b0: i128;
            let var_110_1: i128 = var_1b0;
            let var_1c0: i128;
            let var_120_1: i128 = var_1c0;
            let var_130_1: i128 = var_1d0;
            let mut var_140: i64 = rcx_2;
            let result_3: *mut i64 = result;
            serde_json::value::to_value::h79764bd2822118aa(&result_1, &var_140);
            result = result_1;
            
            if result == 6
            {
                'label_48b8b2:
                result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::hf165bc09399aedc8(var_1f8);
                *arg1 = result;
                arg1[0x20] = 2;
            }
            else
            {
                *arg1.byte_offset(4) = var_1ff;
                *arg1.byte_offset(1) = var_1ff;
                rcx_4 = var_1f8;
                *arg1.byte_offset(0x10) = var_1f0;
                rdx_3 = arg2[3];
                'label_48b895:
                *arg1 = result;
                *arg1.byte_offset(8) = rcx_4;
                arg1[0x20] = rdx_3;
            }
        }
        else
        {
            *arg1 = result;
            arg1[0x20] = 2;
        }
    }
    else
    {
        result = fuel_core_keygen::new_key::h5166178937848b2b(&var_1e0, *arg2.byte_offset(9));
        let r12_1: i64 = var_1e0;
        
        if r12_1 != 2
        {
            let mut var_b0: ();
            memcpy(&var_b0, &var_1d0, 0x90);
            let mut var_c0: i64 = r12_1;
            let result_4: *mut i64 = result_2;
            serde_json::value::to_value::h6580f94fbd1542b4(&result_1, &var_c0);
            result = result_1;
            
            if result == 6
            {
                goto 'label_48b8b2;
            }
            
            *arg1.byte_offset(4) = var_1ff;
            *arg1.byte_offset(1) = var_1ff;
            rcx_4 = var_1f8;
            *arg1.byte_offset(0x10) = var_1f0;
            rdx_3 = arg2[1];
            goto 'label_48b895;
        }
        
        *arg1 = result_2;
        arg1[0x20] = 2;
    }
    result
}
