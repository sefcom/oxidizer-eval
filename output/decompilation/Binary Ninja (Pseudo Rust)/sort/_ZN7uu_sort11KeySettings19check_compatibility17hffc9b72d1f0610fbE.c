
  fn uu_sort::KeySettings::check_compatibility::hffc9b72d1f0610fb(arg1: *mut i128, arg2: i8, arg3: i8, arg4: i8)

{
    if arg2 <= 3
    {
        let mut var_54: i32;
        let mut rax_2: *const i8;
        
        if arg4 != 0
        {
            var_54 = *"n".byte_offset(arg2 << 2);
            rax_2 = "d";
            'label_4d07aa:
            let mut var_50: *const i8 = rax_2;
            let var_48: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            let var_40: *mut i32 = &var_54;
            let var_38: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            let mut var_30: *mut *mut [i8; 0x34] = &data_58cdc0;
            let var_28: i64 = 3;
            let var_10: i64 = 0;
            let var_20: *const *const i8 = &var_50;
            let var_18: i64 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h9f6bdb3fe8306f69(arg1, &var_30);
            return;
        }
        
        if arg3 != 0
        {
            var_54 = *"n".byte_offset(arg2 << 2);
            rax_2 = "i";
            goto 'label_4d07aa;
        }
    }
    
    *arg1 = -0x8000000000000000;
}
