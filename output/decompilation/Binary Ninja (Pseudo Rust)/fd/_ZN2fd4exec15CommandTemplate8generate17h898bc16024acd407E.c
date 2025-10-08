
  fn fd::exec::CommandTemplate::generate::h898bc16024acd407(arg1: *mut i64, arg2: *mut i32, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64) -> i64

{
    if arg3 == 0
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    let mut var_130: ();
    fd::fmt::FormatTemplate::generate::hfff854f5585a67ff(&var_130, arg2, arg4, arg5, arg6, arg7);
    let mut var_118: ();
    argmax::Command::new::h0ff314cd1dda056e(&var_118, &var_130);
    let r13_1: i64 = arg3 << 5;
    
    if r13_1 != 0x20
    {
        let mut rbp_1: *mut c_void = &arg2[8];
        let mut i_1: i64 = r13_1 - 0x20;
        let mut i: i64;
        
        do
        {
            fd::fmt::FormatTemplate::generate::hfff854f5585a67ff(&var_130, rbp_1, arg4, arg5, arg6, 
                arg7);
            let mut rax_1: i8;
            let mut rdx_2: i64;
            rax_1 = argmax::Command::try_arg::ha49bcf2cb4dd0994(&var_118, &var_130);
            
            if (rax_1 & 1) != 0
            {
                arg1[1] = rdx_2;
                *arg1 = -0x8000000000000000;
                return core::ptr::drop_in_place$LT$argmax..Command$GT$::hca65ebb0b5b23438(&var_118);
            }
            
            rbp_1 += 0x20;
            i = i_1;
            i_1 -= 0x20;
        } while i != 0x20;
    }
    
    memcpy(arg1, &var_118, 0xe8)
}
