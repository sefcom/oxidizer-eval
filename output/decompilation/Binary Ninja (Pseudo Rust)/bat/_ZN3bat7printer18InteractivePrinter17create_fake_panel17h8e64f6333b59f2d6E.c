
  fn bat::printer::InteractivePrinter::create_fake_panel::h8e64f6333b59f2d6(arg1: *mut i128, arg2: *mut c_void, arg3: i64) -> i64

{
    if arg3 == 0
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(arg1, 1, 0);
    }
    
    let mut var_a8: *const i8 = &data_481164[0x10];
    let var_a0: *const i8 = &data_481164[0x14];
    let mut var_40: ();
    core::iter::traits::iterator::Iterator::collect::hf2327cdb95cc4d00(&var_40, &var_a8);
    let var_30: i64;
    let rdx: u64 = alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(&var_a8, 
        " \s +Failed to load one or more …", 1, !var_30 + arg3);
    let var_b8: i64 = arg3 - 1;
    let mut var_c8: i128 = var_a8;
    let mut var_78: *mut c_void = &var_40;
    let var_70: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_68: *mut i128 = &var_c8;
    let var_60: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_a8 = &data_485820;
    let var_a0_1: i64 = 2;
    let var_88: i64 = 0;
    let var_98_1: *mut *mut c_void = &var_78;
    let var_90: i64 = 2;
    let mut var_58: i128;
    core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_58, 0, rdx, &var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_c8);
    var_c8 = var_58;
    let mut rax_3: i8;
    let mut rdx_1: u64;
    rax_3 = bat::style::StyleComponents::grid::h47e585e5c9942068(arg2.byte_offset(0xc0));
    
    if rax_3 == 0
    {
        let var_48: i64;
        arg1[1] = var_48;
        *arg1 = var_c8;
    }
    else
    {
        var_58 = &var_c8;
        *var_58[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_a8 = &data_aceaa0;
        let var_a0_2: i64 = 2;
        let var_88_1: i64 = 0;
        let var_98_2: *mut i128 = &var_58;
        let var_90_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_78, 0, rdx_1, &var_a8);
        arg1[1] = var_68;
        *arg1 = var_78;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_c8);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_40)
}
