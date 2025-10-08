
  fn uu_env::parse_name_value_opt::hf06db07eb579a5e8(arg1: *mut u64, arg2: *mut c_void, arg3: i64, arg4: i64) -> i64

{
    let mut var_a0: i64 = -0x8000000000000000;
    let var_98: i64 = arg3;
    let var_90: i64 = arg4;
    let mut var_88: i64;
    uu_env::native_int_str::NativeStr::split_once::hd6fa271acc4759ea(&var_88, &var_a0, "=");
    
    if var_88 != -0x7fffffffffffffff
    {
        let var_78: i64;
        let var_48_1: i64 = var_78;
        let mut var_58: i128 = var_88;
        let var_70: i128;
        let var_40_1: i128 = var_70;
        let var_60: i64;
        let var_30_1: i64 = var_60;
        alloc::vec::Vec$LT$T$C$A$GT$::push::he136959d09d686c7(arg2.byte_offset(0x30), &var_58);
        arg1[1] = 0;
        *arg1 = 0;
    }
    else
    {
        let rax: u64 = uu_env::parse_program_opt::h7280c27efa5c6406(arg2, arg3, arg4);
        
        if rax == 0
        {
            arg1[1] = 1;
            *arg1 = 0;
        }
        else
        {
            *arg1 = rax;
            arg1[1] = &data_5107e8;
        }
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::h6fa88c11416956ac(
        -0x8000000000000000, arg3)
}
