
  fn uu_realpath::canonicalize_relative::ha3a23c9727c26a2f(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i8, arg5: i8) -> i8

{
    let mut var_58: i64;
    uucore::features::fs::canonicalize::h7cde29b0af4066d7(&var_58, arg2, arg3, arg4, arg5);
    let r15: i64 = var_58;
    let mut result: i8 = -(r15);
    let var_50: i64;
    
    if -(r15) != -0x8000000000000000
    {
        let var_48: u64;
        
        if arg4 == 1
        {
            result = std::path::Path::is_dir::h02edbc48c38d7d9e(var_50, var_48);
            
            if result == 0
            {
                std::fs::read_dir::h45c5fe38c359e267(&var_58, var_50);
                let rax_1: i8 = var_50;
                let rcx: i64 = var_58;
                
                if rax_1 == 2
                {
                    arg1[1] = rcx;
                    *arg1 = -0x8000000000000000;
                    /* tailcall */
                    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb5b343c2ee7576a0(
                        r15, var_50);
                }
                
                let mut var_40: i64 = rcx;
                let var_38_1: i8 = rax_1;
                result =
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::hbf19dde921508ab7(&var_40);
            }
        }
        
        *arg1 = r15;
        arg1[1] = var_50;
        arg1[2] = var_48;
    }
    else
    {
        arg1[1] = var_50;
        *arg1 = -0x8000000000000000;
    }
    result
}
