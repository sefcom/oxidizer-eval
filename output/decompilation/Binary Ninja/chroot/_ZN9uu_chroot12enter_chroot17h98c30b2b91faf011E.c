
  uint64_t uu_chroot::enter_chroot::h98c30b2b91faf011(int64_t arg1, uint64_t arg2, char arg3)

{
    int32_t var_58;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&var_58, arg1, arg2);
    void* const var_88;
    _$LT$T$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h9454a905dbd2aba1(&var_88, &var_58);
    char* rax;
    int64_t rdx_1;
    rax = core::result::Result$LT$T$C$E$GT$::unwrap::hbf878c93376006ae(&var_88);
    int32_t rax_1 = chroot(rax);
    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h6d1e06643df38b2e(rax, rdx_1);
    
    if (!rax_1)
    {
        if (!arg3)
            core::result::Result$LT$T$C$E$GT$::unwrap::h3feb26b805379e13(
                std::env::set_current_dir::hba1a8e936af69830());
        
        return 0;
    }
    
    int64_t var_98 = arg1;
    uint64_t var_90_1 = arg2;
    int64_t* var_a8 = &var_98;
    uint64_t (* var_a0_1)(int64_t* arg1, int64_t arg2) =
        _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
    var_88 = &data_4195b0;
    int64_t var_80_1 = 1;
    int64_t var_68_1 = 0;
    int64_t** var_78_1 = &var_a8;
    int64_t var_70_1 = 1;
    void var_48;
    core::option::Option$LT$T$GT$::map_or_else::he3c27e96c71bac83(&var_48, &var_88);
    int64_t var_50_1 = *__errno_location() << 0x20 | 2;
    var_58 = 0;
    return alloc::boxed::Box$LT$T$GT$::new::h6d25de4dbe6fde20(&var_58);
}
