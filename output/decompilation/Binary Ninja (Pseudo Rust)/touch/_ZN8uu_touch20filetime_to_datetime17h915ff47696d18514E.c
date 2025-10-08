
  fn uu_touch::filetime_to_datetime::h915ff47696d18514(arg1: *mut i64, arg2: i64, arg3: i32) -> *mut i64

{
    let mut var_24: i32;
    let result: i64 = chrono::datetime::DateTime$LT$chrono..offset..utc..Utc$GT$::from_timestamp::h1ce8e0fb8cfe0735(&var_24, arg2, arg3);
    
    if var_24 == 0
    {
        *arg1 = 0;
        return result;
    }
    
    let var_1c: i32;
    let var_10: i32 = var_1c;
    let mut var_18: i64 = var_24;
    _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$chrono..datetime..DateTime$LT$chrono..offset..utc..Utc$GT$$GT$$GT$::from::h90f246ab10ef0572(arg1, &var_18)
}
