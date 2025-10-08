
  fn uu_stat::pretty_time::h245badb3e9e8e0d9(arg1: *mut i128, arg2: i64, arg3: i32) -> i64

{
    let mut var_80: i32;
    chrono::datetime::DateTime$LT$chrono..offset..utc..Utc$GT$::from_timestamp::h1ce8e0fb8cfe0735(
        &var_80, arg2, arg3);
    let mut var_b8: i64;
    
    if var_80 == 0
    {
        _$LT$chrono..datetime..DateTime$LT$chrono..offset..utc..Utc$GT$$u20$as$u20$core..default..Default$GT$::default::h251f53cfce2ba472(&var_b8);
    }
    else
    {
        let var_78: i32;
        let var_b0_1: i32 = var_78;
        var_b8 = var_80;
    }
    
    let mut var_28: ();
    _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$chrono..datetime..DateTime$LT$chrono..offset..utc..Utc$GT$$GT$$GT$::from::h90f246ab10ef0572(&var_28, &var_b8);
    let mut var_a8: *mut c_void = "%Y-%m-%d %H:%M:%S.%f %z";
    let var_a0: i64 = 0x17;
    let var_98: i64 = 8;
    let var_90: i64 = 0;
    let var_88: i8 = 0;
    chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h59e8183133fd231f(&var_80, &var_28, 
        &var_a8);
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hae7f708c1328924d(arg1, 
        &var_80);
    core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::ha95c3915e5883151(&var_80)
}
