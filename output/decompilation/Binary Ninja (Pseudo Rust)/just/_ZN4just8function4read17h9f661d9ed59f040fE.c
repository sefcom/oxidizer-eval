
  fn just::function::read::h9f661d9ed59f040f(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> *mut i64

{
    let mut var_28: i64 = arg3;
    let rcx: i64;
    let var_20: i64 = rcx;
    let rax: *mut c_void = *arg2;
    let mut var_58: ();
    just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_58, 
        *rax.byte_offset(0x10), *rax.byte_offset(0x18));
    let var_50: i64;
    let var_48: u64;
    let mut var_40: i128;
    std::path::Path::join::h1eac0ae5e7efa361(&var_40, var_50, var_48, arg3);
    let mut var_70: i64;
    std::fs::read_to_string::h6e0119a910dad901(&var_70, &var_40);
    
    if !(0 + -(var_70))
    {
        let var_60: i64;
        arg1[3] = var_60;
        *arg1.byte_offset(8) = var_70;
        *arg1 = 0;
    }
    else
    {
        let var_68: u64;
        just::function::read::_$u7b$$u7b$closure$u7d$$u7d$::h9a1193e6eab69c80(&var_40, &var_28, 
            var_68);
        let var_30: i64;
        arg1[3] = var_30;
        *arg1.byte_offset(8) = var_40;
        *arg1 = 1;
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_58);
    arg1
}
