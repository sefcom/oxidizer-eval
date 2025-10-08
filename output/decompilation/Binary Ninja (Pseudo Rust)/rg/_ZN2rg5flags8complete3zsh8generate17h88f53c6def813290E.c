
  fn rg::flags::complete::zsh::generate::h88f53c6def813290(arg1: *mut i128) -> i64

{
    let mut var_28: i64;
    grep_printer::hyperlink::hyperlink_aliases::h6e6a9a2f559641af(&var_28);
    let mut var_40: ();
    let var_20: i64;
    core::iter::traits::iterator::Iterator::collect::h215381e0edf4cfde(&var_40, var_20);
    let mut var_70: i128;
    let var_38: i64;
    let var_30: i64;
    alloc::str::join_generic_copy::h51bc700a0c907f5e(&var_70, var_38, var_30, 
        "\n/home/34r7hm4n/dev/oxidizer/ox…", 1);
    let mut var_58: i128 = var_70;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h86d7461d11433c9d(
        &var_40);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$regex_syntax..ast..FlagsItem$GT$$GT$::hc1c1149e8a605025(var_28, var_20);
    let mut rax_1: *mut i8;
    let mut rdx_3: *mut c_void;
    rax_1 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h6abe8100f4b9b9b1(
        "# This is impossible to read, bu…", 0x5ad);
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_70, 
        "#compdef rg\n\n##\n# zsh complet…", 0x77b2, "!ENCODINGS!!HYPERLINK_ALIASES!:"…", 0xb, 
        rax_1, rdx_3);
    let var_60: *mut c_void;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(arg1, *var_70[8], var_60, 
        "!HYPERLINK_ALIASES!:"failed to r…", 0x13, *var_58[8], var_60);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_70);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_58)
}
