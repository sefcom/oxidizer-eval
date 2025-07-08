
  fn uu_tail::paths::HeaderPrinter::print::h45f27ae0b4b499e5(arg1: *mut i8, arg2: i64)

{
    let mut var_78: i64 = arg2;
    let rdx: i64;
    let var_70: i64 = rdx;
    
    if *arg1 != 0
    {
        let rax_1: u64 = arg1[1];
        let mut rdx_1: *const i8 = 1;
        
        if rax_1 == 0
        {
            rdx_1 = "\n";
        }
        
        let mut var_68: *const i8 = rdx_1;
        let var_60_1: i64 = rax_1 ^ 1;
        let mut var_58: *mut i64 = &var_68;
        let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        let var_48_1: *mut i64 = &var_78;
        let var_40_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        let mut var_38: *mut c_void = &data_5bc6e8;
        let var_30_1: i64 = 3;
        let var_18_1: i64 = 0;
        let var_28_1: *mut *mut i64 = &var_58;
        let var_20_1: i64 = 2;
        std::io::stdio::_print::he918bceb0c89db46(&var_38);
        arg1[1] = 0;
    }
}
