
  fn just::function::parent_directory::he998b42e01b3bf07(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64) -> *mut i64

{
    let mut var_58: i64 = arg3;
    let var_50: i64 = arg4;
    let mut rax: *mut i8;
    let mut rdx: u64;
    rax = std::path::Path::parent::hef287f60afa56900(arg3, arg4);
    let mut rax_2: i64;
    let mut var_48: *mut *mut [i8; 0xab];
    
    if rax == 0
    {
        let mut var_18: *mut i64 = &var_58;
        let var_10_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        var_48 = &data_82ffa0;
        let var_40_1: i64 = 2;
        let var_28_1: i64 = 0;
        let var_38_1: *mut *mut i64 = &var_18;
        let var_30_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&arg1[1], 0, rdx, &var_48);
        rax_2 = 1;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h901fb789f3b446ec(
            &var_48, rax, rdx);
        let rax_1: *mut *mut [i8; 0xab] = var_48;
        let var_40: i64;
        *arg1.byte_offset(0x10) = var_40;
        arg1[1] = rax_1;
        rax_2 = 0;
    }
    *arg1 = rax_2;
    arg1
}
