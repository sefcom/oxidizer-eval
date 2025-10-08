
  fn uu_chroot::enter_chroot::h98c30b2b91faf011(arg1: i64, arg2: u64, arg3: i8) -> u64

{
    let mut var_58: i32;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&var_58, arg1, arg2);
    let mut var_88: *mut c_void;
    _$LT$T$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h9454a905dbd2aba1(&var_88, &var_58);
    let mut rax: *mut i8;
    let mut rdx_1: i64;
    rax = core::result::Result$LT$T$C$E$GT$::unwrap::hbf878c93376006ae(&var_88);
    let rax_1: i32 = chroot(rax);
    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h6d1e06643df38b2e(rax, rdx_1);
    
    if rax_1 == 0
    {
        if arg3 == 0
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::h3feb26b805379e13(
                std::env::set_current_dir::hba1a8e936af69830());
        }
        
        return 0;
    }
    
    let mut var_98: i64 = arg1;
    let var_90_1: u64 = arg2;
    let mut var_a8: *mut i64 = &var_98;
    let var_a0_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
        _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
    var_88 = &data_4195b0;
    let var_80_1: i64 = 1;
    let var_68_1: i64 = 0;
    let var_78_1: *mut *mut i64 = &var_a8;
    let var_70_1: i64 = 1;
    let mut var_48: ();
    core::option::Option$LT$T$GT$::map_or_else::he3c27e96c71bac83(&var_48, &var_88);
    let var_50_1: i64 = *__errno_location() << 0x20 | 2;
    var_58 = 0;
    alloc::boxed::Box$LT$T$GT$::new::h6d25de4dbe6fde20(&var_58)
}
