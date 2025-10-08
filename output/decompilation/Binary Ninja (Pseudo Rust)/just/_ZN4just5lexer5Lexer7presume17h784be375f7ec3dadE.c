
  fn just::lexer::Lexer::presume::h784be375f7ec3dad(arg1: *mut i128, arg2: *mut c_void, arg3: u64) -> i64

{
    let mut var_94: i32 = arg3;
    let mut var_80: u64;
    
    if *arg2.byte_offset(0xc0) != arg3
    {
        let mut var_90: *mut i32 = &var_94;
        let var_88_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_80 = &data_8303a8;
        let var_78_1: i64 = 2;
        let var_60_1: i64 = 0;
        let var_70_1: *mut *mut i32 = &var_90;
        let var_68_1: i64 = 1;
        let mut var_30: ();
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_30, 0, arg3, &var_80);
        return just::lexer::Lexer::internal_error::h78cb678bc55cc920(arg1, arg2, &var_30);
    }
    
    let result: i64 = just::lexer::Lexer::advance::hab928493b22c646a(&var_80, arg2);
    let var_38: i8;
    
    if var_38 != 0x25
    {
        let var_40: i128;
        arg1[4] = var_40;
        let zmm0_1: i128 = var_80;
        let var_50: i128;
        arg1[3] = var_50;
        let var_60: i64;
        arg1[2] = var_60;
        let var_70: i64;
        arg1[1] = var_70;
        *arg1 = zmm0_1;
    }
    else
    {
        *arg1.byte_offset(0x48) = 0x25;
    }
    
    result
}
