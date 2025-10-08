
  fn forc_crypto::keys::vanity::RegexMatcher::new::h881b9c176c268426(arg1: *mut *mut *mut [i8; 0xa], arg2: i64, arg3: u64) -> *mut *mut *mut [i8; 0xa]

{
    let mut var_30: i64 = arg2;
    let var_28: u64 = arg3;
    let mut var_20: *mut i64 = &var_30;
    let var_18: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h30043921d5c5f2d0;
    let mut var_98: *mut *mut [i8; 0xa] = &data_a2f008;
    let var_90: i64 = 1;
    let var_78: i64 = 0;
    let var_88: *mut *mut i64 = &var_20;
    let var_80: i64 = 1;
    let mut var_48: ();
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_48, 0, arg3, &var_98);
    let var_40: i64;
    regex::regex::string::Regex::new::h92399a8041d2121d(&var_98, var_40);
    let r14: *mut *mut [i8; 0xa] = var_98;
    let zmm0: i128 = var_90;
    
    if r14 == 0
    {
        let var_88_1: i64 = var_80;
        var_98 = zmm0;
        arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h776f44fb6b4ee09d(&var_98);
        *arg1 = nullptr;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_48);
    }
    else
    {
        arg1[3] = var_80;
        *arg1.byte_offset(8) = zmm0;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_48);
        *arg1 = r14;
    }
    
    arg1
}
