
  fn just::source::Source::module::h8a09876a3d20f69d(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i128, arg4: *mut i64) -> i64

{
    let rax: i32 = *arg2.byte_offset(0x78);
    let mut var_a0: i128;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h2bd5fac3a44d596c(
        &var_a0, *arg2.byte_offset(8), *arg2.byte_offset(0x10));
    let mut var_68: i128;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7020ec4582f4a09d(&var_68, &var_a0);
    let r15: i64 = arg4[1];
    let r12: u64 = arg4[2];
    _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_a0, r15, r12);
    let var_90: i64;
    let var_a8: i64 = var_90;
    let mut var_b8: i128 = var_a0;
    core::iter::traits::iterator::Iterator::chain::h6ca93b7fa2b582b5(&var_a0, &var_68, &var_b8);
    let mut var_48: i128;
    core::iter::traits::iterator::Iterator::collect::h823ffc06f5fa5e1c(&var_48, &var_a0);
    let mut rsi_5: *mut c_void = arg2.byte_offset(0x60);
    
    if 0 + -(*arg2.byte_offset(0x60))
    {
        rsi_5 = nullptr;
    }
    
    core::option::Option$LT$T$GT$::map_or_else::h3951ea035978ff2a(&var_a0, rsi_5, arg3, arg3);
    var_b8 = var_a0;
    _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_a0, r15, r12);
    var_68 = var_a0;
    let mut rax_4: *mut i8;
    let mut rdx_5: u64;
    rax_4 = std::path::Path::parent::hef287f60afa56900(r15, r12);
    
    if rax_4 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_a0, rax_4, rdx_5);
    *arg1.byte_offset(0x58) = var_90;
    *arg1.byte_offset(0x48) = var_a0;
    *arg1.byte_offset(0x78) = rax + 1;
    *arg1 = var_48;
    let var_38: i64;
    arg1[1] = var_38;
    *arg1.byte_offset(0x18) = 0;
    arg1[2] = 8;
    *arg1.byte_offset(0x28) = 0;
    arg1[6] = var_b8;
    arg1[7] = var_90;
    arg1[3] = var_68;
    arg1[4] = var_90;
    /* tailcall */
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(arg4)
}
