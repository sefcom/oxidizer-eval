
  fn uu_uptime::uptime_since::h394d6aa0daf3546a() -> i64

{
    let mut result_1: i64;
    uu_uptime::process_utmpx::hffb29050e36b1dfd(&result_1, nullptr);
    uucore::features::uptime::get_uptime::hcfc49679bdf5d89d(&result_1, result_1);
    let result: i64 = result_1;
    
    if result != 0
    {
        return result;
    }
    
    let mut var_c0: i32;
    chrono::offset::utc::Utc::now::h5df5ece099311fd6(&var_c0);
    let var_bc: i32;
    let var_78: i64;
    chrono::offset::TimeZone::timestamp_opt::h62e74c73f4adfb08(&result_1, 
        (chrono::naive::date::NaiveDate::num_days_from_ce::h3a63bbbadb6054a1(var_c0) - 0xaf93b)
            * 0x15180 + var_bc - var_78);
    let mut var_28: ();
    chrono::offset::LocalResult$LT$T$GT$::unwrap::h2cbe091957f39a68(&var_28, &result_1);
    var_c0 = "%Y-%m-%d %H:%M:%Ssrc/uu/uptime/s…";
    let var_b8_1: i64 = 0x11;
    let var_b0_1: i64 = 8;
    let var_a8_1: i64 = 0;
    let mut var_a0_1: i8 = 0;
    chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h28958959d4d7e05f(&result_1, &var_28, 
        &var_c0);
    let mut var_90: *mut i64 = &result_1;
    let var_88_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$chrono..format..formatting..DelayedFormat$LT$I$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hdd0f10c49a4d6573;
    var_c0 = &data_508278;
    let var_b8_2: i64 = 2;
    var_a0_1 = 0;
    let var_b0_2: *mut *mut i64 = &var_90;
    let var_a8_2: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_c0);
    core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h7c47fab475d990fd(&result_1);
    result
}
