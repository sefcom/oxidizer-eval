
  fn uu_echo::uumain::uumain::h369484e1559019c8(arg1: i64, arg2: i64) -> u64

{
    let mut var_d8: *mut i64;
    std::env::var_os::h36cc7c7819522fd6(&var_d8);
    let r15: *mut i64 = var_d8;
    let var_d0: u64;
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h51a32f342f7d52fe(r15, var_d0);
    let mut var_60: i128;
    core::iter::traits::iterator::Iterator::skip::h80fe793616a2e54c(&var_60, arg1, arg2);
    let mut var_a8: *mut i64;
    let mut var_78: i128;
    let mut var_68: i64;
    let mut rbx_1: u64;
    let mut rbp: u64;
    let mut var_c8: i64;
    
    if -(r15) != -0x8000000000000000
    {
        let var_50: i64;
        let var_80_1: i64 = var_50;
        let zmm0: i128 = var_60;
        var_a8 = -0x8000000000000001;
        core::option::Option$LT$T$GT$::get_or_insert_with::h2c2a50d748de909a(&var_a8);
        let r12_1: *mut i64 = var_a8;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h5fa58ea674f5acc7(&var_d8, "-n/home/34r7hm4n/.rustup/toolcha…", 2);
        let r14_1: *mut i64 = var_d8;
        let var_98: i128;
        let mut rax_2: i8;
        let var_a0: i64;
        
        if r12_1 != -0x8000000000000000
        {
            rax_2 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$GT$::eq::h08c82ed25b2e05bf(var_a0, var_98, var_d0, var_c8);
        }
        
        if r12_1 == -0x8000000000000000 || rax_2 == 0
        {
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h209e065877f44192(r14_1, 
                var_d0);
            let var_b8_2: i128 = zmm0;
            var_c8 = var_98;
            var_d8 = var_a8;
            core::iter::traits::iterator::Iterator::collect::h6af5e76be2411346(&var_78, &var_d8);
            rbx_1 = 1;
        }
        else
        {
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h209e065877f44192(r14_1, 
                var_d0);
            let var_b8_1: i128 = zmm0;
            var_c8 = var_98;
            var_d8 = var_a8;
            let mut var_48: i128;
            uu_echo::filter_echo_flags::h5a59657466e082bc(&var_48, &var_d8);
            var_78 = var_48;
            let var_38: i64;
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
        let var_c0: i8;
        rbx_1 = var_c0;
        let var_bf: i8;
        rbp = var_bf;
    }
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    var_d8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    var_a8 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_d8);
    let var_c8_1: i64 = var_68;
    var_d8 = var_78;
    let mut result: u64;
    let mut rdx_3: i64;
    result = uu_echo::execute::h866d81bba2075ba9(&var_a8, &var_d8, rbx_1, rbp);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hb8166dfaaae947c0(var_a8);
    result
}
