
  fn spyware::logging::core::setup_logging::hadfb9a3c25f8d0fb(arg1: *mut i64) -> i64

{
    let rbx: *mut i128 = arg1;
    core::sync::atomic::atomic_store::hcdb68c044bd3631f(*arg1);
    let var_b0: i64 = 0;
    let var_a8: i8 = 0;
    let var_a0: i64 = 0;
    let var_98: i8 = 0;
    let var_90: i64 = 0;
    let var_88: i64 = 8;
    let var_80: i64 = 0;
    let var_78: u64 = *rbx.byte_offset(8) >> 2;
    let mut var_c8: i128 = *rbx;
    let var_b8: i64 = rbx[1];
    let mut var_68: ();
    once_cell::sync::OnceCell$LT$T$GT$::try_insert::h31b4b9b30fac51fa(&var_68, 
        &spyware::logging::core::MEMORY_LOGGER_INSTANCE::h716e29c46813bbfa, &var_c8);
    let mut var_128: i128;
    let var_60: i32;
    
    if var_60 != 6
    {
        var_128 = var_60;
        let var_10: i64;
        let var_d8_1: i64 = var_10;
        let var_20: i128;
        let var_e8_1: i128 = var_20;
        let var_30: i128;
        let var_f8_1: i128 = var_30;
        let var_40: i128;
        let var_108_1: i128 = var_40;
        let var_50: i128;
        let var_118_1: i128 = var_50;
        
        if var_128 != 6
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$spyware..logging..core..MemoryLogger$GT$$GT$::h253edf7ce6e0679b(&var_128);
            let mut rax_6: i64;
            rax_6 = 2;
            return rax_6;
        }
    }
    else
    {
        var_128 = 6;
    }
    
    let rax_3: i64 = spyware::logging::core::MemoryLogger::global::h99d7eb6ce0974984();
    
    if rax_3 == 0
    {
        core::option::unwrap_failed::hf53ee17a2013bd69();
        /* no return */
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap::hb116e08a8e7e6c8f(log::set_logger::h154ac6d5c2538341(
        rax_3));
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$spyware..logging..core..MemoryLogger$GT$$GT$::h253edf7ce6e0679b(&var_128);
    let mut rax_5: i64;
    rax_5 = 3;
    rax_5
}
