
  fn uu_realpath::process_relative::h8c6e307666422bfa(arg1: *mut i128, arg2: *mut i128, arg3: i64, arg4: i64, arg5: i64) -> *mut i128

{
    let mut var_48: i128;
    
    if arg3 != 0
    {
        if std::path::Path::starts_with::heff55995860ce76c(*arg2.byte_offset(8), arg2[1], arg3) != 0
        {
            let var_38_1: i64 = arg2[1];
            var_48 = *arg2;
            let mut rdx: i64 = arg3;
            
            if arg5 != 0
            {
                rdx = arg5;
            }
            
            return uucore::features::fs::make_path_relative_to::h09a4623272c797bd(arg1, &var_48, 
                rdx);
        }
    }
    else if arg5 != 0
    {
        let var_38_2: i64 = arg2[1];
        var_48 = *arg2;
        return uucore::features::fs::make_path_relative_to::h09a4623272c797bd(arg1, &var_48, arg5);
    }
    let result: *mut i128 = arg2[1];
    arg1[1] = result;
    *arg1 = *arg2;
    result
}
