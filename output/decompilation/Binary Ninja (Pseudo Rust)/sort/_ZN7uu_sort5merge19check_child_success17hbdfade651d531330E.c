
  fn uu_sort::merge::check_child_success::hbdfade651d531330(arg1: *mut i32, arg2: i64, arg3: u64) -> u64

{
    let mut var_58: i32;
    std::process::Child::wait::h7e33de4911114104(&var_58, arg1);
    let mut result: u64;
    let mut var_70: i32;
    let mut var_50: i64;
    
    if var_58 != 1
    {
        let var_54: i32;
        let temp0_1: i8 = var_54 & 0x7f;
        let mut rcx_1: i32;
        rcx_1 = temp0_1 == 0;
        let var_6c_1: i32 = rcx_1;
        let mut rax_3: u32 = var_54 >> 8;
        let var_68_1: u32 = rax_3;
        var_70 = 0;
        rax_3 = rax_3 == 0;
        rax_3 |= temp0_1 != 0;
        
        if rax_3 != 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::h5f0fafecf499e947(&var_70);
            result = 0;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::h5f0fafecf499e947(&var_70);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_70, arg2, arg3);
            let var_60: i64;
            let var_40_1: i64 = var_60;
            var_50 = var_70;
            var_58 = -0x7ffffffffffffffb;
            result = alloc::boxed::Box$LT$T$GT$::new::h4da5af3d8a2f6642(&var_58);
        }
    }
    else
    {
        let mut var_68: i32;
        var_68 = var_50;
        var_70 = 1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::h5f0fafecf499e947(&var_70);
        result = 0;
    }
    core::ptr::drop_in_place$LT$std..process..Child$GT$::hc47d8b8842bb4996(arg1);
    result
}
