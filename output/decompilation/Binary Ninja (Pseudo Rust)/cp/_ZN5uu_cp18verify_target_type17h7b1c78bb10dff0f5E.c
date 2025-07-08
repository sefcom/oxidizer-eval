
  fn uu_cp::verify_target_type::h7b1c78bb10dff0f5(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: *mut i8) -> *mut i64

{
    let rax: i8 = std::path::Path::is_dir::h9ac0db933706da51(arg2, arg3);
    let mut rcx: i64;
    let mut var_80: *mut i64;
    let mut var_70: i64;
    let mut rax_1: *mut *mut [i8; 0x93];
    
    if *arg4 == 0
    {
        rcx = 0xd;
        
        if rax == 0
        {
            var_70 = 1;
            let var_68_2: *mut i8 = arg2;
            let var_60_2: u64 = arg3;
            let var_58_2: i8 = 1;
            var_80 = &var_70;
            let var_78_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            rax_1 = &data_5b60b0;
            'label_5088ac:
            let mut var_50: *mut *mut [i8; 0x93] = rax_1;
            let var_48_1: i64 = 2;
            let var_30_1: i64 = 0;
            let var_40_1: *mut *mut i64 = &var_80;
            let var_38_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&arg1[1], &var_50);
            rcx = 4;
        }
    }
    else
    {
        rcx = 0xd;
        
        if rax != 0
        {
            var_70 = 1;
            let var_68_1: *mut i8 = arg2;
            let var_60_1: u64 = arg3;
            let var_58_1: i8 = 1;
            var_80 = &var_70;
            let var_78_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            rax_1 = &data_5b5db8;
            goto 'label_5088ac;
        }
    }
    *arg1 = rcx;
    arg1
}
