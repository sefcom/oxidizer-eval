
  fn just::subcommand::Subcommand::groups::h91135709a9d2e1de(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    let mut var_b8: *mut *mut [i8; 0xd5] = &data_831050;
    let var_b0: i64 = 1;
    let var_a8: i64 = 8;
    let mut var_a0: i128 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_b8);
    just::justfile::Justfile::public_groups::he2abda4ed6140bb7(&var_b8, arg2, 
        *arg1.byte_offset(0x1a3));
    let mut var_50: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he9001c4925ee01b8(&var_50, &var_b8);
    let mut i: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89f3f68b0a4d6be6(&i, &var_50);
    
    if !(0 + -(i))
    {
        do
        {
            let var_c0: i64;
            let var_78_1: i64 = var_c0;
            let mut var_88: i128 = i;
            let mut var_70: *mut c_void = arg1.byte_offset(0x48);
            let var_68_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let var_60_1: *mut i128 = &var_88;
            let var_58_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_b8 = &data_831060;
            let var_b0_1: i64 = 3;
            *var_a0[8] = 0;
            let var_a8_1: *mut *mut c_void = &var_70;
            var_a0 = 2;
            std::io::stdio::_print::h5e446ff973c02de6(&var_b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_88);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89f3f68b0a4d6be6(&i, &var_50);
        } while i != -0x8000000000000000;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h57d196e280b32628(&var_50)
}
