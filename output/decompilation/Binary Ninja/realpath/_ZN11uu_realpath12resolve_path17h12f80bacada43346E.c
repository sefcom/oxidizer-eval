
  void** uu_realpath::resolve_path::h12f80bacada43346(int64_t arg1, int64_t arg2, char arg3, char arg4, char arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9)

{
    int64_t* var_60;
    uucore::features::fs::canonicalize::h4be5c7a9ad65d7f1(&var_60, arg1, arg2, arg5, arg4);
    int64_t* rsi_1 = var_60;
    void** result_1;
    void** result = result_1;
    
    if (rsi_1 != -0x8000000000000000)
    {
        int64_t* var_48 = rsi_1;
        void** result_2 = result;
        int64_t var_50;
        int64_t var_38_1 = var_50;
        void var_30;
        uu_realpath::process_relative::h8c6e307666422bfa(&var_30, &var_48, arg8, arg9, arg6);
        result = uucore::mods::display::print_verbatim::hdcaab9bba9aa0144(&var_30);
        
        if (!result)
        {
            std::io::stdio::stdout::h077da66234850927();
            var_60 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
            char var_61 = arg3;
            return _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&var_60, &var_61, 1);
        }
    }
    
    return result;
}
