
  int64_t* uu_touch::filetime_to_datetime::h915ff47696d18514(int64_t* arg1, int64_t arg2, int32_t arg3)

{
    int32_t var_24;
    int64_t result = chrono::datetime::DateTime$LT$chrono..offset..utc..Utc$GT$::from_timestamp::h1ce8e0fb8cfe0735(&var_24, arg2, arg3);
    
    if (!var_24)
    {
        *arg1 = 0;
        return result;
    }
    
    int32_t var_1c;
    int32_t var_10 = var_1c;
    int64_t var_18 = var_24;
    return _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$chrono..datetime..DateTime$LT$chrono..offset..utc..Utc$GT$$GT$$GT$::from::h90f246ab10ef0572(arg1, &var_18);
}
