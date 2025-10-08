
  int64_t uu_uptime::uptime_since::h394d6aa0daf3546a()

{
    int64_t result_1;
    uu_uptime::process_utmpx::hffb29050e36b1dfd(&result_1, nullptr);
    uucore::features::uptime::get_uptime::hcfc49679bdf5d89d(&result_1, result_1);
    int64_t result = result_1;
    
    if (result)
        return result;
    
    int32_t var_c0;
    chrono::offset::utc::Utc::now::h5df5ece099311fd6(&var_c0);
    int32_t var_bc;
    int64_t var_78;
    chrono::offset::TimeZone::timestamp_opt::h62e74c73f4adfb08(&result_1, 
        (chrono::naive::date::NaiveDate::num_days_from_ce::h3a63bbbadb6054a1(var_c0) - 0xaf93b)
            * 0x15180 + var_bc - var_78);
    void var_28;
    chrono::offset::LocalResult$LT$T$GT$::unwrap::h2cbe091957f39a68(&var_28, &result_1);
    var_c0 = "%Y-%m-%d %H:%M:%Ssrc/uu/uptime/s…";
    int64_t var_b8_1 = 0x11;
    int64_t var_b0_1 = 8;
    int64_t var_a8_1 = 0;
    char var_a0_1 = 0;
    chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h28958959d4d7e05f(&result_1, &var_28, 
        &var_c0);
    int64_t* var_90 = &result_1;
    uint64_t (* var_88_1)(int64_t* arg1, int64_t* arg2) = _$LT$chrono..format..formatting..DelayedFormat$LT$I$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hdd0f10c49a4d6573;
    var_c0 = &data_508278;
    int64_t var_b8_2 = 2;
    var_a0_1 = 0;
    int64_t** var_b0_2 = &var_90;
    int64_t var_a8_2 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_c0);
    core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h7c47fab475d990fd(&result_1);
    return result;
}
