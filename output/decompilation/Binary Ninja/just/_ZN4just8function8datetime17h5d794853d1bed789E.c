
  int64_t* just::function::datetime::h5d794853d1bed789(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    void var_88;
    chrono::offset::local::Local::now::h41ddf45366a21dac(&var_88);
    int64_t var_b0 = arg3;
    int64_t rcx;
    int64_t var_a8 = rcx;
    int64_t var_a0 = 8;
    int64_t var_98 = 0;
    char var_90 = 0;
    void var_78;
    chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h14b63f323818dc79(&var_78, &var_88, 
        &var_b0);
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h7a0253cb9a868533(&var_b0, 
        &var_78);
    arg1[3] = var_a0;
    *(arg1 + 8) = var_b0;
    *arg1 = 0;
    core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h832ee16fadc7d71f(&var_78);
    return arg1;
}
