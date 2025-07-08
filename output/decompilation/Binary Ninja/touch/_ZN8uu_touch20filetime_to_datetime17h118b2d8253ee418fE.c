
  int64_t* uu_touch::filetime_to_datetime::h118b2d8253ee418f(int64_t* arg1)

{
    int32_t var_24;
    int32_t rdx;
    int64_t rsi;
    int64_t* result = chrono::datetime::DateTime$LT$chrono..offset..utc..Utc$GT$::from_timestamp::h8ab0e73f75167f24(&var_24, rsi, rdx);
    
    if (!var_24)
    {
        *arg1 = 0;
        return result;
    }
    
    int32_t var_1c;
    int32_t var_10_1 = var_1c;
    int64_t var_18 = var_24;
    return _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$chrono..datetime..DateTime$LT$chrono..offset..utc..Utc$GT$$GT$$GT$::from::he1bf453ed4172c95(arg1, &var_18);
}
