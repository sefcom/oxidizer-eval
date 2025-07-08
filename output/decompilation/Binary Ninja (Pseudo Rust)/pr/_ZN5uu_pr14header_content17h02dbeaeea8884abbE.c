
  fn uu_pr::header_content::h02dbeaeea8884abb(arg1: *mut i64, arg2: *mut c_void, arg3: i64)

{
    let mut var_88: i64 = arg3;
    
    if *arg2.byte_offset(0x141) == 0
    {
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        return;
    }
    
    let mut var_68: *mut c_void = arg2.byte_offset(0x78);
    let var_60_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    let var_58_1: *mut c_void = arg2.byte_offset(0x30);
    let var_50_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    let var_48_1: *mut i64 = &var_88;
    let var_40_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    let mut var_38: *mut c_void = &data_709590;
    let var_30_1: i64 = 3;
    let var_18_1: i64 = 0;
    let var_28_1: *mut *mut c_void = &var_68;
    let var_20_1: i64 = 3;
    let mut var_80: i128;
    core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&var_80, &var_38);
    let rax_2: *mut i64 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 0x78);
    
    if rax_2 == 0
    {
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
        /* no return */
    }
    
    *rax_2 = 0;
    rax_2[1] = 1;
    *rax_2.byte_offset(0x10) = {0};
    rax_2[4] = 1;
    rax_2[5] = 0;
    *rax_2.byte_offset(0x30) = var_80;
    let var_70: i64;
    rax_2[8] = var_70;
    rax_2[9] = 0;
    rax_2[0xa] = 1;
    *rax_2.byte_offset(0x58) = {0};
    rax_2[0xd] = 1;
    rax_2[0xe] = 0;
    alloc::slice::hack::into_vec::h00e2e55fcd83f713(arg1, rax_2, 5);
}
