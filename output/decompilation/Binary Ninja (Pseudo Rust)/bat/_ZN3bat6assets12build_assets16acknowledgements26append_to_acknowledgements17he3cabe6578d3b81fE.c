
  fn bat::assets::build_assets::acknowledgements::append_to_acknowledgements::he3cabe6578d3b81f(arg1: u64, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_78: i64 = arg2;
    let var_70: i64 = arg3;
    let mut var_68: i64 = arg4;
    let r8: i64;
    let var_60: i64 = r8;
    let mut var_28: *mut i64 = &var_78;
    let var_20: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5cd1e3edb3ca57a0;
    let var_18: *mut i64 = &var_68;
    let var_10: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5cd1e3edb3ca57a0;
    let mut var_58: *mut *mut c_void = &data_acdfb8;
    let var_50: i64 = 2;
    let var_38: i64 = 0;
    let var_48: *mut *mut i64 = &var_28;
    let var_40: i64 = 2;
    _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hc61af94ec255152a(arg1, &var_58);
    let rax: *mut *mut c_void = *(arg1 + 8);
    let rcx_1: *mut c_void = (*(arg1 + 0x10)).byte_offset(rax);
    var_58 = rax;
    let var_50_1: *mut c_void = rcx_1;
    let mut rax_1: i8;
    let mut rdx: i32;
    rax_1 = core::str::validations::next_code_point_reverse::h8f1d1c5074629447(&var_58, arg1);
    
    if (rax_1 & 1) == 0
    {
        core::option::expect_failed::h3f620cfb8545dc61("acknowledgements is not the empt…");
        /* no return */
    }
    
    if rdx != 0xa
    {
        alloc::string::String::push::h0ede46164189e411(arg1, 0xa);
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(arg1, "\n\nacknowledgements is not the …", "acknowledgements is not the empt…")
}
