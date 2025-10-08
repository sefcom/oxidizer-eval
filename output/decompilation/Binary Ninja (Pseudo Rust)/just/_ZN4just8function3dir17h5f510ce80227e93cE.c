
  fn just::function::dir::h5f510ce80227e93c(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_50: i64 = arg2;
    let rdx: i64;
    let var_48: i64 = rdx;
    let mut var_40: i64;
    let rcx: i64;
    let rdx_1: u64 = rcx(&var_40);
    let mut var_80: i32;
    
    if 0 + -(var_40)
    {
        let mut var_28: *mut i64 = &var_50;
        let var_20_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        var_80 = &data_82fe08;
        let var_78_1: i64 = 2;
        let var_60_1: i64 = 0;
        let var_70_1: *mut *mut i64 = &var_28;
        let var_68_1: i64 = 1;
        let result: i64 = core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&arg1[1], 
            0, rdx_1, &var_80);
        *arg1 = 1;
        return result;
    }
    
    let var_38: *mut i8;
    let var_30: u64;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_80, var_38, var_30);
    let var_70: u64;
    
    if var_80 != 1
    {
        let var_78: i64;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_80, var_78, var_70);
        let rax_1: i64 = var_80;
        *arg1.byte_offset(0x10) = var_78;
        arg1[1] = rax_1;
        *arg1 = 0;
    }
    else
    {
        just::function::dir::_$u7b$$u7b$closure$u7d$$u7d$::h71277bd26d076cbf(&var_80, var_38, 
            var_30, &var_50);
        arg1[3] = var_70;
        *arg1.byte_offset(8) = var_80;
        *arg1 = 1;
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_40)
}
