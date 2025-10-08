
  ssize_t uu_realpath::resolve_path::h552c68346491a6aa(int64_t arg1, int64_t arg2, char arg3, char arg4, char arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9)

{
    int64_t* var_60;
    uucore::features::fs::canonicalize::h7cde29b0af4066d7(&var_60, arg1, arg2, arg5, arg4);
    int64_t* rsi_1 = var_60;
    ssize_t result_1;
    ssize_t result = result_1;
    
    if (-(rsi_1) != -0x8000000000000000)
    {
        int64_t* var_48 = rsi_1;
        ssize_t result_2 = result;
        int64_t var_50;
        int64_t var_38_1 = var_50;
        void var_30;
        uu_realpath::process_relative::he019ee2f680b65b0(&var_30, &var_48, arg8, arg9, arg6);
        result = uucore::mods::display::print_verbatim::h7448dce65f98869f(&var_30);
        
        if (!result)
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            var_60 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            char var_61 = arg3;
            return _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(&var_60, &var_61, 1);
        }
    }
    
    return result;
}
