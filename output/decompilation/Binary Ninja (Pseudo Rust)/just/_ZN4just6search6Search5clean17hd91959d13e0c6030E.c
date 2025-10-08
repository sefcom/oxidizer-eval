
  fn just::search::Search::clean::hd91959d13e0c6030(arg1: *mut i128, arg2: i64, arg3: u64) -> i64

{
    let mut var_100: ();
    let rcx: i64;
    std::path::Path::join::h1eac0ae5e7efa361(&var_100, arg2, arg3, rcx);
    let mut var_118: i64 = 0;
    let var_110: *mut i8 = 8;
    let mut var_108: i64 = 0;
    let var_f8: i64;
    let var_f0: i64;
    let mut var_a8: i128;
    std::path::Path::components::hd0346d362206f2e9(&var_a8, var_f8, var_f0);
    let var_78: i128;
    let var_b8: i128 = var_78;
    let var_88: i128;
    let var_c8: i128 = var_88;
    let var_98: i128;
    let var_d8: i128 = var_98;
    let mut var_e8: i128 = var_a8;
    
    loop
    {
        let mut var_68: i8;
        _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h73ed8dd6f02f5cb4(&var_68, &var_e8);
        
        if var_68 == 0xa
        {
            break;
        }
        
        if _$LT$std..path..Component$u20$as$u20$core..cmp..PartialEq$GT$::eq::hfa2fa96020c6cc4b(
            &var_68, &data_471728) == 0
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::hf0e1448068b63a5d(&var_118, &var_68);
        }
        else if var_108 != 0 && var_110[(var_108 - 1) * 0x38] == 9
        {
            var_108 -= 1;
        }
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc695da30dbf516c4(&var_e8, &var_118);
    core::iter::traits::iterator::Iterator::collect::h5ec721f06ebe2405(arg1, &var_e8);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_100)
}
