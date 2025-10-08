
  fn just::function::datetime::h5d794853d1bed789(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let mut var_88: ();
    chrono::offset::local::Local::now::h41ddf45366a21dac(&var_88);
    let mut var_b0: i64 = arg3;
    let rcx: i64;
    let var_a8: i64 = rcx;
    let var_a0: i64 = 8;
    let var_98: i64 = 0;
    let var_90: i8 = 0;
    let mut var_78: ();
    chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h14b63f323818dc79(&var_78, &var_88, 
        &var_b0);
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h7a0253cb9a868533(&var_b0, 
        &var_78);
    arg1[3] = var_a0;
    *arg1.byte_offset(8) = var_b0;
    *arg1 = 0;
    core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h832ee16fadc7d71f(&var_78);
    arg1
}
