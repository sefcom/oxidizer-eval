
  fn uu_groups::infallible_gid2grp::h0969cf89b297b066(arg1: *mut i128, arg2: *mut i32) -> *mut i128

{
    let rbp: gid_t = *arg2;
    let mut var_80: *mut c_void;
    _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::hf537d3ad4e514fa6(&var_80, rbp);
    let rax: *mut c_void = var_80;
    let var_78: i64;
    
    if -(rax) != -0x8000000000000000
    {
        *arg1 = rax;
        *arg1.byte_offset(8) = var_78;
        let var_70: i64;
        arg1[1] = var_70;
    }
    else
    {
        let mut var_98: i64 = -0x7fffffffffffffff;
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = uucore::util_name::h074417a1e6395129();
        let mut var_30: i64 = rax_1;
        let var_28_1: i64 = rdx_1;
        let mut var_50: *mut i64 = &var_30;
        let var_48_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he95cae3a5b723209;
        let var_40_1: *mut i64 = &var_98;
        let var_38_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$uu_groups..GroupsError$u20$as$u20$core..fmt..Display$GT$::fmt::hd998d0f2fe9171d6;
        var_80 = &data_4e2138;
        let var_78_1: i64 = 3;
        let var_60_1: i64 = 0;
        let var_70_1: *mut *mut i64 = &var_50;
        let var_68_1: i64 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_80);
        core::ptr::drop_in_place$LT$uu_groups..GroupsError$GT$::hb769ad25550869ea(var_98, rbp);
        let mut rax_2: i64;
        let mut rdx_2: u64;
        rax_2 =
            core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(rbp, &var_50, 0xa);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h5efff031ccf83c83(&var_80, rax_2, rdx_2);
        arg1[1] = var_70_1;
        *arg1 = var_80;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hc31f46757294ff16(-0x8000000000000000, var_78);
    }
    arg1
}
