
  fn uu_mv::rename_file_fallback::hf572c573f0edc49f(arg1: i64, arg2: i64, arg3: *mut i8, arg4: u64) -> i64

{
    let mut var_60: i64 = arg1;
    let var_58: i64 = arg2;
    let mut var_50: *mut i8 = arg3;
    let var_48: u64 = arg4;
    
    if std::path::Path::is_symlink::h004cfac91d04dbc0(arg3, arg4) != 0
    {
        let rax_1: i64 = std::fs::remove_file::hcda18fb70e9be9e2(arg3);
        let mut var_40: *mut i8 = arg3;
        let var_38_1: u64 = arg4;
        let var_30_1: i64 = arg1;
        let var_28_1: i64 = arg2;
        
        if rax_1 != 0
        {
            return uu_mv::rename_file_fallback::_$u7b$$u7b$closure$u7d$$u7d$::h6a325a2489558ace(
                &var_40, rax_1);
        }
    }
    
    let mut rax_3: i8;
    let mut rdx_1: i64;
    rax_3 = std::fs::copy::hde78b31b31968bf9(arg1, arg2, arg3);
    
    if (rax_3 & 1) != 0
    {
        return rdx_1;
    }
    
    let rax_2: i64 = uucore::features::fsxattr::copy_xattrs::h8f8abeea335a41ae(&var_60, &var_50);
    
    if rax_2 != 0
    {
        return rax_2;
    }
    
    std::fs::remove_file::hcda18fb70e9be9e2(arg1)
}
