
  fn uu_cp::copydir::build_dir::hcf48ec2566a6908d(arg1: *mut i64, arg2: *mut c_void, arg3: i8, arg4: i8, arg5: i8, arg6: i64, arg7: i64) -> i64

{
    let var_d4: i8 = arg3;
    arg5 &= 1;
    let mut rdx: i32 = 0x12;
    
    if arg5 == 0
    {
        rdx = 0;
    }
    
    let mut rbp: i32 = 0x3f;
    
    if (arg4 & 1) == 0
    {
        rbp = rdx;
    }
    
    let mut result: i64;
    let mut rax_1: i32;
    
    if (arg6 != 0 & arg5) != 1
    {
        rax_1 = uucore::features::mode::get_umask::h22fe72fd4e3f2e99();
        'label_49aef4:
        let mut var_d8: i32 = ((rax_1 & 0x1ff) | rbp) ^ 0x1ff;
        result = std::fs::DirBuilder::create::h220b70ad501ba6bc(&var_d8, arg2);
        
        if result == 0
        {
            *arg1 = -0x7ffffffffffffff4;
        }
        else
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = result;
        }
    }
    else
    {
        let mut var_d0: i32;
        std::fs::symlink_metadata::h814bc3976f7d40c5(&var_d0, arg6);
        
        if var_d0 != 2
        {
            let var_98: i32;
            rax_1 = !var_98;
            goto 'label_49aef4;
        }
        
        let result_1: i64;
        result = result_1;
        *arg1 = -0x7fffffffffffffff;
        arg1[1] = result;
    }
    result
}
