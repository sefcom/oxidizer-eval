
  uint64_t uu_echo::uumain::uumain::h369484e1559019c8(int64_t arg1, int64_t arg2)

{
    int64_t* var_d8;
    std::env::var_os::h36cc7c7819522fd6(&var_d8);
    int64_t* r15 = var_d8;
    uint64_t var_d0;
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h51a32f342f7d52fe(r15, var_d0);
    int128_t var_60;
    core::iter::traits::iterator::Iterator::skip::h80fe793616a2e54c(&var_60, arg1, arg2);
    int64_t* var_a8;
    int128_t var_78;
    int64_t var_68;
    uint64_t rbx_1;
    uint64_t rbp;
    int64_t var_c8;
    
    if (-(r15) != -0x8000000000000000)
    {
        int64_t var_50;
        int64_t var_80_1 = var_50;
        int128_t zmm0 = var_60;
        var_a8 = -0x8000000000000001;
        core::option::Option$LT$T$GT$::get_or_insert_with::h2c2a50d748de909a(&var_a8);
        int64_t* r12_1 = var_a8;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h5fa58ea674f5acc7(&var_d8, "-n/home/34r7hm4n/.rustup/toolcha…", 2);
        int64_t* r14_1 = var_d8;
        int128_t var_98;
        char rax_2;
        int64_t var_a0;
        
        if (r12_1 != -0x8000000000000000)
            rax_2 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$GT$::eq::h08c82ed25b2e05bf(var_a0, var_98, var_d0, var_c8);
        
        if (r12_1 == -0x8000000000000000 || !rax_2)
        {
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h209e065877f44192(r14_1, 
                var_d0);
            int128_t var_b8_2 = zmm0;
            var_c8 = var_98;
            var_d8 = var_a8;
            core::iter::traits::iterator::Iterator::collect::h6af5e76be2411346(&var_78, &var_d8);
            rbx_1 = 1;
        }
        else
        {
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h209e065877f44192(r14_1, 
                var_d0);
            int128_t var_b8_1 = zmm0;
            var_c8 = var_98;
            var_d8 = var_a8;
            int128_t var_48;
            uu_echo::filter_echo_flags::h5a59657466e082bc(&var_48, &var_d8);
            var_78 = var_48;
            int64_t var_38;
            var_68 = var_38;
            rbx_1 = 0;
        }
        
        rbp = 1;
    }
    else
    {
        uu_echo::filter_echo_flags::he1c151dda8392092(&var_d8, &var_60);
        var_68 = var_c8;
        var_78 = var_d8;
        char var_c0;
        rbx_1 = var_c0;
        char var_bf;
        rbp = var_bf;
    }
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    var_d8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    var_a8 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_d8);
    int64_t var_c8_1 = var_68;
    var_d8 = var_78;
    uint64_t result;
    int64_t rdx_3;
    result = uu_echo::execute::h866d81bba2075ba9(&var_a8, &var_d8, rbx_1, rbp);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hb8166dfaaae947c0(var_a8);
    return result;
}
