
  fn uu_cp::verify_target_type::h2b848ad41a27e25d(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: *mut i8) -> *mut i64

{
    let mut r13: i64 = -0x7ffffffffffffffd;
    let rax: i8 = std::path::Path::is_dir::h02edbc48c38d7d9e(arg2, arg3);
    let mut var_88: *mut i64;
    let mut var_78: i64;
    let mut rax_1: *mut *mut [i8; 0x63];
    
    if *arg4 == 1
    {
        if rax != 0
        {
            var_78 = 1;
            let var_70_1: *mut i8 = arg2;
            let var_68_1: u64 = arg3;
            let var_60_1: i8 = 1;
            var_88 = &var_78;
            let var_80_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            rax_1 = &data_55eae8;
            goto 'label_4a55ee;
        }
        
        r13 = -0x7ffffffffffffff4;
    }
    else if rax == 0
    {
        var_78 = 1;
        let var_70_2: *mut i8 = arg2;
        let var_68_2: u64 = arg3;
        let var_60_2: i8 = 1;
        var_88 = &var_78;
        let var_80_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        rax_1 = &data_55edb0;
        'label_4a55ee:
        let mut var_58: *mut *mut [i8; 0x63] = rax_1;
        let var_50_1: i64 = 2;
        let var_38_1: i64 = 0;
        let var_48_1: *mut *mut i64 = &var_88;
        let var_40_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&arg1[1], &var_58);
    }
    else
    {
        r13 = -0x7ffffffffffffff4;
    }
    *arg1 = r13;
    arg1
}
