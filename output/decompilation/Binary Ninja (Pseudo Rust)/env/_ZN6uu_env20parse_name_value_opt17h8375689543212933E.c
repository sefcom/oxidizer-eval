
  fn uu_env::parse_name_value_opt::h8375689543212933(arg1: *mut *mut i128, arg2: *mut c_void, arg3: i64, arg4: i64) -> i64

{
    let mut var_a0: i64 = -0x8000000000000000;
    let var_98: i64 = arg3;
    let var_90: i64 = arg4;
    let mut var_88: i64;
    uu_env::native_int_str::NativeStr::split_once::hcbed3488f59e21a4(&var_88, &var_a0, "=");
    let mut rax: *mut i128;
    
    if var_88 != -0x7fffffffffffffff
    {
        let var_78: i64;
        let var_48_1: i64 = var_78;
        let mut var_58: i128 = var_88;
        let var_70: i128;
        let var_40_1: i128 = var_70;
        let var_60: i64;
        let var_30_1: i64 = var_60;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd0be2e25e316a3f1(arg2.byte_offset(0x30), &var_58);
        arg1[1] = 0;
        rax = nullptr;
    }
    else
    {
        rax = uu_env::parse_program_opt::h5dc288b3b7b61775(arg2, arg3, arg4);
        
        if rax == 0
        {
            arg1[1] = 1;
            rax = nullptr;
        }
        else
        {
            arg1[1] = &data_548840;
        }
    }
    
    *arg1 = rax;
    core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::hef710a318dedb98d(&var_a0)
}
