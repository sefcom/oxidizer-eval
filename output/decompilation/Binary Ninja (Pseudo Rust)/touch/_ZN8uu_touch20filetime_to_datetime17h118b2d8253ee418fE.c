
  fn uu_touch::filetime_to_datetime::h118b2d8253ee418f(arg1: *mut i64) -> *mut i64

{
    let mut var_24: i32;
    let rdx: i32;
    let rsi: i64;
    let result: *mut i64 = chrono::datetime::DateTime$LT$chrono..offset..utc..Utc$GT$::from_timestamp::h8ab0e73f75167f24(&var_24, rsi, rdx);
    
    if var_24 == 0
    {
        *arg1 = 0;
        return result;
    }
    
    let var_1c: i32;
    let var_10_1: i32 = var_1c;
    let mut var_18: i64 = var_24;
    _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$chrono..datetime..DateTime$LT$chrono..offset..utc..Utc$GT$$GT$$GT$::from::he1bf453ed4172c95(arg1, &var_18)
}
