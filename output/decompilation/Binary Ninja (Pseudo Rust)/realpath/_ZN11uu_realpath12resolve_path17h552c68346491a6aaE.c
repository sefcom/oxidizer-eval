
  fn uu_realpath::resolve_path::h552c68346491a6aa(arg1: i64, arg2: i64, arg3: i8, arg4: i8, arg5: i8, arg6: i64, arg7: i64, arg8: i64, arg9: i64) -> ssize_t

{
    let mut var_60: *mut i64;
    uucore::features::fs::canonicalize::h7cde29b0af4066d7(&var_60, arg1, arg2, arg5, arg4);
    let rsi_1: *mut i64 = var_60;
    let result_1: ssize_t;
    let mut result: ssize_t = result_1;
    
    if -(rsi_1) != -0x8000000000000000
    {
        let mut var_48: *mut i64 = rsi_1;
        let result_2: ssize_t = result;
        let var_50: i64;
        let var_38_1: i64 = var_50;
        let mut var_30: ();
        uu_realpath::process_relative::he019ee2f680b65b0(&var_30, &var_48, arg8, arg9, arg6);
        result = uucore::mods::display::print_verbatim::h7448dce65f98869f(&var_30);
        
        if result == 0
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            var_60 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            let mut var_61: i8 = arg3;
            return _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(&var_60, &var_61, 1);
        }
    }
    
    result
}
