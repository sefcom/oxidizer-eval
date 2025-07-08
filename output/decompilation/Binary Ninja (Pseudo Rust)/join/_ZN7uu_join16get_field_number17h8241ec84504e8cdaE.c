
  fn uu_join::get_field_number::h8241ec84504e8cda(arg1: *mut *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64)

{
    if arg2 != 1
    {
        if arg4 == 0
        {
            arg5 = arg4;
        }
        
        arg1[1] = arg5;
        *arg1 = nullptr;
        return;
    }
    
    if arg4 != 1 || arg3 == arg5
    {
        arg1[1] = arg3;
        *arg1 = nullptr;
        return;
    }
    
    let mut var_90: i64 = arg3 + 1;
    let mut var_88: i64 = arg5 + 1;
    let mut var_80: *mut i64 = &var_90;
    let var_78: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    let var_70: *mut i64 = &var_88;
    let var_68: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    let mut var_60: *mut *mut [i8; 0x47] = &data_535490;
    let var_58: i64 = 2;
    let var_40: i64 = 0;
    let var_50: *mut *mut i64 = &var_80;
    let var_48: i64 = 2;
    let mut var_30: ();
    core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&var_30, &var_60);
    let var_18: i32 = 1;
    *arg1 = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&var_30);
    arg1[1] = &data_5352b8;
}
