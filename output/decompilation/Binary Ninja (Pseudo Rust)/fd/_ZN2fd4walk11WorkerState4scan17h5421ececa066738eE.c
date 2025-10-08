
  fn fd::walk::WorkerState::scan::h5421ececa066738e(arg1: *mut i8, arg2: *mut i128) -> u64

{
    let mut var_128: i64;
    let rcx: i64;
    let rdx: *mut c_void;
    fd::walk::WorkerState::build_walker::h528fba1b6fc20641(&var_128, arg2, rdx, rcx);
    let rcx_1: i64 = var_128;
    let result_1: u64;
    let mut result: u64 = result_1;
    let mut r14: *mut i128;
    
    if rcx_1 != 2
    {
        let result_2: u64 = result;
        
        if !(0 + -(*arg2.byte_offset(0xc8))) && *arg2.byte_offset(0x1c8) == 0
        {
            let rsi: *mut i64 = arg2[0x21];
            let temp1_1: i64 = *rsi;
            *rsi += 1;
            let mut temp2_1: i64;
            
            if temp1_1 > -1
            {
                let rdx_1: *mut i64 = *arg2.byte_offset(0x218);
                temp2_1 = *rdx_1;
                *rdx_1 += 1;
            }
            
            if temp1_1 <= -1 || temp2_1 <= -1
            {
                trap(6);
            }
            
            ctrlc::init_and_set_handler::h1bb3233601cb3954(&var_128, rsi);
            core::result::Result$LT$T$C$E$GT$::unwrap::hacb05d1112c71bda(&var_128);
        }
        
        crossbeam_channel::channel::bounded::h59736cade95c7d49(&var_128, arg2[0x1a] * 2);
        let var_98_1: *mut i128 = arg2;
        let var_118: i128;
        let var_a8_1: i128 = var_118;
        var_128 = rcx_1;
        let var_118_1: i128 = var_118;
        let var_108: i128;
        let var_108_1: i128 = var_108;
        let var_f8: i128;
        let var_f8_1: i128 = var_f8;
        let var_e8: i128;
        let var_e8_1: i128 = var_e8;
        let var_d8: i128;
        let var_d8_1: i128 = var_d8;
        let var_c8: i128;
        let var_c8_1: i128 = var_c8;
        let var_b8_1: i128 = var_128;
        r14 = nullptr;
        result = std::thread::scoped::scope::hf42bb0e2e47ad158(&var_128);
        let mut rcx_2: i8 = 5;
        
        if core::sync::atomic::atomic_load::h95058969b162ab98(
            (*arg2.byte_offset(0x218)).byte_offset(0x10), 0) == 0
        {
            rcx_2 = result;
        }
        
        arg1[1] = rcx_2;
    }
    else
    {
        *arg1.byte_offset(8) = result;
        r14 = 1;
    }
    
    *arg1 = r14;
    result
}
