
  fn bat::preprocessor::try_parse_utf8_char::h1bda9850eb158fe9(arg1: *mut i8, arg2: i64) -> u64

{
    let mut rax_1: i64;
    let mut rdx_1: i64;
    
    if arg2 != 0
    {
        rax_1 = core::ops::function::FnOnce::call_once::h54c7237f01dba59c(arg1, 1);
    }
    
    let mut var_70: i64;
    
    if arg2 == 0 || rax_1 == 0
    {
        var_70 = 0;
    }
    else
    {
        var_70 = rax_1;
        let var_68_1: i64 = rdx_1;
        let var_60_1: i64 = 1;
    }
    
    let mut var_88: *mut i8 = arg1;
    let var_80: i64 = arg2;
    let mut var_89: ();
    let var_78: *mut c_void = &var_89;
    let mut var_40: ();
    core::option::Option$LT$T$GT$::or_else::hfee0966e79903d38(&var_40, &var_70, &var_88);
    var_88 = arg1;
    let var_80_1: i64 = arg2;
    let var_78_1: *mut c_void = &var_89;
    core::option::Option$LT$T$GT$::or_else::ha099be0b27fe940c(&var_70, &var_40, &var_88);
    var_88 = arg1;
    let var_80_2: i64 = arg2;
    let var_78_2: *mut c_void = &var_89;
    let mut var_58: i64;
    core::option::Option$LT$T$GT$::or_else::h79e5d0e906669d4e(&var_58, &var_70, &var_88);
    
    if var_58 != 0
    {
        return 
            bat::preprocessor::try_parse_utf8_char::_$u7b$$u7b$closure$u7d$$u7d$::h88b6350c93ea306c(
            &var_58);
    }
    
    0x110000
}
