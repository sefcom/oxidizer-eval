
  fn just::executor::Executor::command::ha6f1d0ee763617d4(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64, arg8: i64, arg9: i64) -> i64

{
    let mut var_110: i64;
    
    if *arg2 == 0
    {
        let r12_1: *mut c_void = arg2[1];
        std::process::Command::new::h121b24b9008368b8(&var_110, r12_1.byte_offset(0x18));
        
        if arg8 != 0
        {
            std::process::Command::current_dir::h92a579a9f249f22b(&var_110, arg8);
        }
        
        let rax_1: i64 = *r12_1.byte_offset(0x10);
        
        if rax_1 != 0
        {
            let mut r12_2: *mut c_void = *r12_1.byte_offset(8);
            let mut i_1: i64 = rax_1 * 0x30;
            let mut i: i64;
            
            do
            {
                std::process::Command::arg::hbc8267a490af6d59(&var_110, r12_2);
                r12_2 += 0x30;
                i = i_1;
                i_1 -= 0x30;
            } while i != 0x30;
        }
        
        std::process::Command::arg::h20b967969329bd8e(&var_110, arg4);
    }
    else
    {
        let mut rax: i64;
        let mut rsi_1: i64;
        let mut r8: i64;
        rax = just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::set_execute_permission::h806fa988509c0503(arg4, arg5);
        
        if rax != 0
        {
            arg1[1] = 0x31;
            arg1[2] = arg6;
            arg1[3] = arg7;
            arg1[4] = rax;
            *arg1 = -0x8000000000000000;
            return rax;
        }
        
        just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::make_shebang_command::hee0ff321f7029a87(&var_110, rsi_1, arg4, arg5, r8, arg8, arg9);
        
        if var_110 == -0x8000000000000000
        {
            let var_108: i128;
            *arg1.byte_offset(0x20) = var_108;
            arg1[1] = 0xe;
            arg1[2] = arg6;
            arg1[3] = arg7;
            *arg1 = -0x8000000000000000;
            return arg7;
        }
    }
    
    memcpy(arg1, &var_110, 0xe0)
}
