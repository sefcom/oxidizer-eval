
  int64_t uu_stat::pretty_time::h245badb3e9e8e0d9(int128_t* arg1, int64_t arg2, int32_t arg3)

{
    int32_t var_80;
    chrono::datetime::DateTime$LT$chrono..offset..utc..Utc$GT$::from_timestamp::h1ce8e0fb8cfe0735(
        &var_80, arg2, arg3);
    int64_t var_b8;
    
    if (!var_80)
        _$LT$chrono..datetime..DateTime$LT$chrono..offset..utc..Utc$GT$$u20$as$u20$core..default..Default$GT$::default::h251f53cfce2ba472(&var_b8);
    else
    {
        int32_t var_78;
        int32_t var_b0_1 = var_78;
        var_b8 = var_80;
    }
    
    void var_28;
    _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$chrono..datetime..DateTime$LT$chrono..offset..utc..Utc$GT$$GT$$GT$::from::h90f246ab10ef0572(&var_28, &var_b8);
    void* const var_a8 = "%Y-%m-%d %H:%M:%S.%f %z";
    int64_t var_a0 = 0x17;
    int64_t var_98 = 8;
    int64_t var_90 = 0;
    char var_88 = 0;
    chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h59e8183133fd231f(&var_80, &var_28, 
        &var_a8);
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hae7f708c1328924d(arg1, 
        &var_80);
    return core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::ha95c3915e5883151(&var_80);
}
