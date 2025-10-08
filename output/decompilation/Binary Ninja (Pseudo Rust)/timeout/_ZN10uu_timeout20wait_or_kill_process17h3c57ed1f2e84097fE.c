
  fn uu_timeout::wait_or_kill_process::h3c57ed1f2e84097f(arg1: *mut i32, arg2: *mut i32, arg3: i64, arg4: i64, arg5: i64, arg6: i32, arg7: i8, arg8: i8, arg9: i8) -> i64

{
    let mut var_60: i32;
    _$LT$std..process..Child$u20$as$u20$uucore..features..process..ChildExt$GT$::wait_or_timeout::he25bb3510a5d6b08(&var_60, arg2, arg5, arg6);
    let rbx: i32 = var_60;
    let var_58: i64;
    let mut rax_1: i32;
    let var_5c: i32;
    
    if rbx != 0
    {
        arg1[1] = 0x7c;
        rax_1 = 0;
    }
    else if var_5c != 1
    {
        let mut rax_5: i8;
        let mut rdx_2: i64;
        rax_5 = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(
            "KILLTRAP -- \x1b[8mPIPEhelpNones…", 4);
        
        if (rax_5 & 1) == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        uu_timeout::report_if_verbose::ha1199c5238d9a8e5(rdx_2, arg3, arg4, arg9);
        uu_timeout::send_signal::h21a409eed1ad1074(arg2, rdx_2, arg8);
        let mut var_40: i32;
        std::process::Child::wait::h7e33de4911114104(&var_40, arg2);
        
        if var_40 != 1
        {
            arg1[1] = rdx_2 + 0x80;
            rax_1 = 0;
        }
        else
        {
            let var_38: i64;
            *arg1.byte_offset(8) = var_38;
            rax_1 = 1;
        }
    }
    else if arg7 == 0
    {
        arg1[1] = 0x7d;
        rax_1 = 0;
    }
    else
    {
        let rax_3: i32 = var_58;
        let rbp: u32 = rax_3 & 0x7f;
        
        if rbp == 0
        {
            arg1[1] = *rax_3[1];
            rax_1 = 0;
        }
        else
        {
            if rbp + 1 <= 1
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            arg1[1] = rbp;
            rax_1 = 0;
        }
    }
    *arg1 = rax_1;
    /* tailcall */
    core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$std..process..ExitStatus$GT$$C$std..io..error..Error$GT$$GT$::hb9c9de528993b73f(rbx, var_58)
}
