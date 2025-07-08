
  fn uu_join::parse_field_number::h9316b11a89c3fc26(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> *mut i8

{
    let mut var_a8: i8;
    let mut result: *mut i8 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_a8, arg2, arg3);
    let var_a0: i64;
    
    if var_a8 != 0
    {
        let var_a7: i8;
        
        if var_a7 != 2
        {
            goto 'label_4c52fc;
        }
        
        arg1[1] = -1;
        *arg1 = 0;
    }
    else if var_a0 == 0
    {
        'label_4c52fc:
        let mut var_88: i64 = 0;
        let var_80_1: *mut i8 = arg2;
        let var_78_1: i64 = arg3;
        let var_70_1: i8 = 1;
        let mut var_98: *mut i64 = &var_88;
        let var_90_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        let mut var_68: *mut *mut c_void = &data_5354b0;
        let var_60_1: i64 = 1;
        let var_48_1: i64 = 0;
        let var_58_1: *mut *mut i64 = &var_98;
        let var_50_1: i64 = 1;
        let mut var_38: ();
        core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&var_38, &var_68);
        let var_20_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&var_38);
        *arg1 = result;
        arg1[1] = &data_5352b8;
    }
    else
    {
        result = var_a0 - 1;
        arg1[1] = result;
        *arg1 = 0;
    }
    result
}
