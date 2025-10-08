
  fn fd::exec::command::handle_cmd_error::he0c689dc29352ec0(arg1: *mut c_void, arg2: *mut *mut i64) -> i64

{
    let mut rax_1: i8;
    
    if arg1 != 0
    {
        rax_1 = std::io::error::Error::kind::h135fe00c4e7365f3(arg2);
    }
    
    let mut rdi_3: *mut i64;
    let mut var_a0: *mut *mut i64;
    let mut var_88: *mut i64;
    let mut var_70: *mut *mut c_void;
    
    if arg1 != 0 && rax_1 == 0
    {
        let mut var_90: *mut *mut i64 = arg2;
        let mut rax_2: i64;
        let mut rdx_1: i64;
        rax_2 = std::process::Command::get_program::h41efdce1cd7a1359(arg1);
        let rdx_2: u64 =
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_88, rax_2, rdx_1);
        var_a0 = &var_88;
        let var_98_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h339b4df17109b8de;
        var_70 = &data_802190;
        let var_68_1: i64 = 1;
        let var_50_1: i64 = 0;
        let var_60_1: *mut *mut *mut i64 = &var_a0;
        let var_58_1: i64 = 1;
        let mut var_40: ();
        core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_40, 0, rdx_2, &var_70);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(&var_88);
        fd::error::print_error::h653511955bf98e50(&var_40);
        rdi_3 = &var_90;
    }
    else
    {
        var_a0 = arg2;
        var_88 = &var_a0;
        let var_80_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_70 = &data_8021a0;
        let var_68: i64 = 1;
        let var_50: i64 = 0;
        let var_60: *mut *mut i64 = &var_88;
        let var_58: i64 = 1;
        let mut var_28: ();
        let rdx: u64;
        core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_28, 0, rdx, &var_70);
        fd::error::print_error::h653511955bf98e50(&var_28);
        rdi_3 = &var_a0;
    }
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h70c4621fa5d008f5(rdi_3)
}
