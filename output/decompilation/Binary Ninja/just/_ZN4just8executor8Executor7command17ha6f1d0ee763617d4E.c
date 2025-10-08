
  int64_t just::executor::Executor::command::ha6f1d0ee763617d4(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9)

{
    int64_t var_110;
    
    if (!*arg2)
    {
        void* r12_1 = arg2[1];
        std::process::Command::new::h121b24b9008368b8(&var_110, r12_1 + 0x18);
        
        if (arg8)
            std::process::Command::current_dir::h92a579a9f249f22b(&var_110, arg8);
        
        int64_t rax_1 = *(r12_1 + 0x10);
        
        if (rax_1)
        {
            void* r12_2 = *(r12_1 + 8);
            int64_t i_1 = rax_1 * 0x30;
            int64_t i;
            
            do
            {
                std::process::Command::arg::hbc8267a490af6d59(&var_110, r12_2);
                r12_2 += 0x30;
                i = i_1;
                i_1 -= 0x30;
            } while (i != 0x30);
        }
        
        std::process::Command::arg::h20b967969329bd8e(&var_110, arg4);
    }
    else
    {
        int64_t rax;
        int64_t rsi_1;
        int64_t r8;
        rax = just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::set_execute_permission::h806fa988509c0503(arg4, arg5);
        
        if (rax)
        {
            arg1[1] = 0x31;
            arg1[2] = arg6;
            arg1[3] = arg7;
            arg1[4] = rax;
            *arg1 = -0x8000000000000000;
            return rax;
        }
        
        just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::make_shebang_command::hee0ff321f7029a87(&var_110, rsi_1, arg4, arg5, r8, arg8, arg9);
        
        if (var_110 == -0x8000000000000000)
        {
            int128_t var_108;
            *(arg1 + 0x20) = var_108;
            arg1[1] = 0xe;
            arg1[2] = arg6;
            arg1[3] = arg7;
            *arg1 = -0x8000000000000000;
            return arg7;
        }
    }
    
    return memcpy(arg1, &var_110, 0xe0);
}
