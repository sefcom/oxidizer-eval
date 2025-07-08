
  fn uu_realpath::resolve_path::h12f80bacada43346(arg1: i64, arg2: i64, arg3: i8, arg4: i8, arg5: i8, arg6: i64, arg7: i64, arg8: i64, arg9: i64) -> *mut *mut c_void

{
    let mut var_60: *mut i64;
    uucore::features::fs::canonicalize::h4be5c7a9ad65d7f1(&var_60, arg1, arg2, arg5, arg4);
    let rsi_1: *mut i64 = var_60;
    let result_1: *mut *mut c_void;
    let mut result: *mut *mut c_void = result_1;
    
    if rsi_1 != -0x8000000000000000
    {
        let mut var_48: *mut i64 = rsi_1;
        let result_2: *mut *mut c_void = result;
        let var_50: i64;
        let var_38_1: i64 = var_50;
        let mut var_30: ();
        uu_realpath::process_relative::h8c6e307666422bfa(&var_30, &var_48, arg8, arg9, arg6);
        result = uucore::mods::display::print_verbatim::hdcaab9bba9aa0144(&var_30);
        
        if result == 0
        {
            std::io::stdio::stdout::h077da66234850927();
            var_60 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
            let mut var_61: i8 = arg3;
            return _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&var_60, &var_61, 1);
        }
    }
    
    result
}
