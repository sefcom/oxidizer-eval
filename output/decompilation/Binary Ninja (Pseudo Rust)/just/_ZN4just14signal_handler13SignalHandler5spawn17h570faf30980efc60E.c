
  fn just::signal_handler::SignalHandler::spawn::h570faf30980efc60(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut rax: *mut i32;
    let mut rdx: i8;
    rax = just::signal_handler::SignalHandler::instance::h68aa94a07828712f();
    let rbp: i8 = rdx & 1;
    let mut var_1f0: i32;
    let rdx_1: u64 = std::process::Command::spawn::haea730ea7b05a977(&var_1f0, arg2);
    let mut var_1ec: i128;
    
    if var_1f0 != 1
    {
        let var_25c_1: i128 = var_1ec;
        let mut var_268: i128 = var_1ec;
        let r12_1: i32 = *var_268[8];
        let var_26c_1: u32 = r12_1 >> 0x1f;
        let mut var_110: *mut c_void;
        
        if r12_1 >= 0
        {
            memcpy(&var_1f0, arg2, 0xe0);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h09a706d466e486d9(
                &var_110, &rax[2], r12_1, &var_1f0);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..process..Command$GT$$GT$::h96bb04e57b0be99b(&var_110);
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$just..signal_handler..SignalHandler$GT$$GT$::hf98ecd4a30a182c6(rax, rbp);
            let mut var_240: i128;
            core::ops::function::Fn::call::hf37251a2e5a30d6e(&var_240, &var_268);
            let mut rax_4: *mut i32;
            let mut rdx_3: i8;
            rax_4 = just::signal_handler::SignalHandler::instance::h68aa94a07828712f();
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h0d088e6304f84304(
                &var_1f0, &rax_4[2], r12_1);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..process..Command$GT$$GT$::h96bb04e57b0be99b(&var_1f0);
            let rax_5: i32 = rax_4[8];
            let var_210: i64;
            arg1[6] = var_210;
            let zmm0_2: i128 = var_240;
            let var_220: i128;
            *arg1.byte_offset(0x20) = var_220;
            let var_230: i128;
            *arg1.byte_offset(0x10) = var_230;
            *arg1 = zmm0_2;
            arg1[7] = rax_5;
            /* tailcall */
            return core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$just..signal_handler..SignalHandler$GT$$GT$::hf98ecd4a30a182c6(rax_4, rdx_3 & 1);
        }
        
        let mut var_26d: ();
        var_110 = &var_26d;
        let var_108_1: fn(arg1: i64, arg2: *mut i64) -> i64 = _$LT$core..num..error..TryFromIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h290431c872b2642a;
        var_1f0 = &data_830f40;
        *var_1ec[4] = 1;
        let var_1d0_1: i64 = 0;
        *var_1ec[0xc] = &var_110;
        let var_1d8_1: i64 = 1;
        let mut var_208: ();
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_208, 0, rdx_1, &var_1f0);
        let rax_8: *mut c_void = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
            alloc::boxed::Box$LT$T$GT$::new::hf7e2634ead86a888(&var_208), &data_830e98);
        *arg1 = -0x8000000000000000;
        arg1[1] = rax_8;
        arg1[7] = 0;
        core::ptr::drop_in_place$LT$std..process..Child$GT$::h297edfa0c5bf1f96(&var_268);
    }
    else
    {
        *arg1 = -0x8000000000000000;
        arg1[1] = *var_1ec[4];
        arg1[7] = 0;
    }
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$just..signal_handler..SignalHandler$GT$$GT$::hf98ecd4a30a182c6(rax, rbp);
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h68c11017a1ebd395(arg2)
}
