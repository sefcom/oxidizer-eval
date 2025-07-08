
  fn uu_sort::merge::check_child_success::h7aa5fa471a5255f8(arg1: *mut i32, arg2: i64, arg3: u64) -> u64

{
    let mut var_58: i32;
    std::process::Child::wait::h4ce2f205e1183efb(&var_58, arg1);
    let mut result: u64;
    let mut var_70: i32;
    let mut var_50: i64;
    
    if var_58 == 0
    {
        let var_54: i16;
        let temp0_1: i8 = var_54 & 0x7f;
        let mut rcx_1: i32;
        rcx_1 = temp0_1 == 0;
        let rax_3: u32 = *var_54[1];
        let var_6c_1: i32 = rcx_1;
        let var_68_1: u32 = rax_3;
        var_70 = 0;
        
        if temp0_1 != 0 || rax_3 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::h9de5c560a761a38e(&var_70);
            result = 0;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::h9de5c560a761a38e(&var_70);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(
                &var_70, arg2, arg3);
            let var_60: i64;
            let var_40_1: i64 = var_60;
            var_50 = var_70;
            var_58 = 6;
            result = alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_58);
        }
    }
    else
    {
        let mut var_68: i32;
        var_68 = var_50;
        var_70 = 1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::h9de5c560a761a38e(&var_70);
        result = 0;
    }
    core::ptr::drop_in_place$LT$std..process..Child$GT$::h2a8c738952384278(arg1);
    result
}
