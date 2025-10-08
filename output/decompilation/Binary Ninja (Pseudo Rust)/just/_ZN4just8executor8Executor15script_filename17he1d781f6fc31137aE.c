
  fn just::executor::Executor::script_filename::he1d781f6fc31137a(arg1: *mut i64, arg2: *mut i64, arg3: u64, arg4: i64, arg5: *mut i8) -> i64

{
    let mut var_78: u64 = arg3;
    let var_70: i64 = arg4;
    let mut r9: u64;
    
    if arg5 == 0
    {
        let mut rax_1: *mut i8;
        rax_1 = just::executor::Executor::script_filename::_$u7b$$u7b$closure$u7d$$u7d$::hc27e29dca0ced4a6(arg2);
        arg5 = rax_1;
        r9 = arg3;
    }
    
    let mut var_68: *mut i8 = arg5;
    let var_60: u64 = r9;
    let mut var_58: *mut i64 = &var_78;
    let var_50: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
    let var_48: *mut *mut i8 = &var_68;
    let var_40: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
    let mut var_38: *const i8 = &data_46ca80;
    let var_30: i64 = 2;
    let var_18: i64 = 0;
    let var_28: *mut *mut i64 = &var_58;
    let var_20: i64 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(arg1, 0, arg3, &var_38)
}
