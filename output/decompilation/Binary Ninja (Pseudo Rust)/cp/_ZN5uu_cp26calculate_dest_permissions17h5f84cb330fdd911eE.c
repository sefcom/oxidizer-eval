
  fn uu_cp::calculate_dest_permissions::h5f84cb330fdd911e(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i32, arg5: i8, arg6: i8, arg7: i64, arg8: i64) -> i64

{
    let mut var_e0: i32;
    std::fs::metadata::h87a95e5fd9b91fc7(&var_e0, arg2);
    let r14: i32 = var_e0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_e0);
    let mut result: i32;
    
    if r14 != 2
    {
        std::fs::symlink_metadata::h814bc3976f7d40c5(&var_e0, arg2);
        
        if var_e0 == 2
        {
            var_e0 = arg7;
            let var_d8_1: i64 = arg8;
            let var_d8: i64;
            let var_d0_1: i64 = var_d8;
            return _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hda2d8848c156368b(arg1, &var_e0);
        }
        
        let result_1: i32;
        result = result_1;
    }
    else
    {
        let rax: i32 = uu_cp::handle_no_preserve_mode::h796a58434a5cfa44(arg5, arg6, arg4);
        result = !uucore::features::mode::get_umask::h22fe72fd4e3f2e99() & rax;
    }
    
    arg1[1] = result;
    *arg1 = -0x7ffffffffffffff4;
    result
}
