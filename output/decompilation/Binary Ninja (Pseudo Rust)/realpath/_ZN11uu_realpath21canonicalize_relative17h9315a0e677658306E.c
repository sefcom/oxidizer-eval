
  fn uu_realpath::canonicalize_relative::h9315a0e677658306(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i8, arg5: i8) -> *mut i8

{
    let mut result_2: *mut i8;
    uucore::features::fs::canonicalize::h4be5c7a9ad65d7f1(&result_2, arg2, arg3, arg4, arg5);
    let mut result: *mut i8 = result_2;
    let result_3: *mut i8;
    
    if result != -0x8000000000000000
    {
        let mut result_1: *mut i8 = result;
        let var_40: u64;
        
        if arg4 == 1 && std::path::Path::is_dir::h9ac0db933706da51(result_3, var_40) == 0
        {
            std::fs::read_dir::h4b97a66205288110(&result_2, result_3);
            let rax_1: i8 = result_3;
            let result_4: *mut i8 = result_2;
            
            if rax_1 == 2
            {
                arg1[1] = result_4;
                *arg1 = -0x8000000000000000;
                return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cc26ee4129f6434(
                    &result_1);
            }
            
            let mut result_5: *mut i8 = result_4;
            let var_30_1: i8 = rax_1;
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
    result
}
