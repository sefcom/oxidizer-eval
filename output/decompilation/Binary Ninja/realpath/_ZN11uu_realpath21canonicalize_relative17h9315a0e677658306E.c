
  char* uu_realpath::canonicalize_relative::h9315a0e677658306(int64_t* arg1, int64_t arg2, int64_t arg3, char arg4, char arg5)

{
    char* result_2;
    uucore::features::fs::canonicalize::h4be5c7a9ad65d7f1(&result_2, arg2, arg3, arg4, arg5);
    char* result = result_2;
    char* result_3;
    
    if (result != -0x8000000000000000)
    {
        char* result_1 = result;
        uint64_t var_40;
        
        if (arg4 == 1 && !std::path::Path::is_dir::h9ac0db933706da51(result_3, var_40))
        {
            std::fs::read_dir::h4b97a66205288110(&result_2, result_3);
            char rax_1 = result_3;
            char* result_4 = result_2;
            
            if (rax_1 == 2)
            {
                arg1[1] = result_4;
                *arg1 = -0x8000000000000000;
                return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cc26ee4129f6434(
                    &result_1);
            }
            
            char* result_5 = result_4;
            char var_30_1 = rax_1;
            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h8145669f43335f0d(&result_5);
        }
        
        arg1[2] = var_40;
        *arg1 = result_1;
        result = result_3;
        arg1[1] = result;
    }
    else
    {
        arg1[1] = result_3;
        *arg1 = -0x8000000000000000;
    }
    return result;
}
