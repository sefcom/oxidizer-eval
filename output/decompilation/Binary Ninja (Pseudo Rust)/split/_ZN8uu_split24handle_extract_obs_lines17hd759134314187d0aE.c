
  fn uu_split::handle_extract_obs_lines::hd759134314187d0a(arg1: *mut i64, arg2: i64, arg3: size_t, arg4: *mut i64) -> i64

{
    let mut var_b8: i64 = 0;
    let var_b0: i64 = 4;
    let var_a8: i64 = 0;
    let mut var_b9: i8 = 0;
    let mut var_70: i64 = arg2;
    let var_68: i64 = arg2 + arg3;
    let var_60: *mut i8 = &var_b9;
    let var_58: *mut i64 = &var_b8;
    let mut var_a0: ();
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hcbe47f8a54903219(&var_a0, &var_70);
    
    if var_a8 == 0
    {
        let mut var_38: i128;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_38, arg2, arg3);
        let var_28: i64;
        arg1[2] = var_28;
        *arg1 = var_38;
    }
    else
    {
        let mut var_88: i128;
        _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::hcf3bda9dc0bd03f6(&var_88, var_b0);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h9a0a0458ef52dcc0(arg4);
        let var_78: i64;
        arg4[2] = var_78;
        *arg4 = var_88;
        let var_90: i64;
        
        if var_90 >= 2
        {
            let var_98: i64;
            let mut var_50: i128;
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::hcf3bda9dc0bd03f6(&var_50, var_98);
            let var_40: i64;
            arg1[2] = var_40;
            *arg1 = var_50;
        }
        else
        {
            *arg1 = -0x8000000000000000;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::hd7f863a59b4c66da(&var_a0);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::hd7f863a59b4c66da(&var_b8)
}
