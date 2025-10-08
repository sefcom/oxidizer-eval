
  fn uu_mv::rename_fifo_fallback::hccc5a9868ad3d518(arg1: i64, arg2: i64, arg3: *mut i8, arg4: i64) -> i64

{
    let mut var_30: i8;
    std::fs::exists::h687a541e0d003889(&var_30, arg3);
    
    if var_30 == 1
    {
        let var_28: i64;
        return var_28;
    }
    
    let var_2f: i8;
    let mut rax_1: i64;
    
    if var_2f != 1
    {
        'label_48d7a2:
        rax_1 = uucore::features::fs::make_fifo::hb14eabe17aca9891(arg3, arg4);
        
        if rax_1 == 0
        {
            /* tailcall */
            return std::fs::remove_file::hcda18fb70e9be9e2(arg1);
        }
    }
    else
    {
        rax_1 = std::fs::remove_file::hcda18fb70e9be9e2(arg3);
        
        if rax_1 == 0
        {
            goto 'label_48d7a2;
        }
    }
    
    rax_1
}
