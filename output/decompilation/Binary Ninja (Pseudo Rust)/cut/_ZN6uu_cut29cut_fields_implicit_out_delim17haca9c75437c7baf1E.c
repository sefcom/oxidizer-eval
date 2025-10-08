
  fn uu_cut::cut_fields_implicit_out_delim::haca9c75437c7baf1(arg1: i32, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i8) -> u64

{
    let mut var_78: i64 = arg4;
    let var_70: i64 = arg5;
    let mut var_b1: i8 = arg6;
    let rbp: i8 = arg_8;
    let mut var_50: ();
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h098d102270798e48(&var_50, 
        arg1);
    let mut var_a8: i64 = arg3;
    let var_a0: *mut i8 = &var_b1;
    let var_98: i64 = arg2;
    let mut var_90: *mut i32 = &arg_8;
    let var_88: *mut i64 = &var_78;
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = bstr::io::BufReadExt::for_byte_record_with_terminator::hd98daae6afad1e27(&var_50, rbp, 
        &var_a8);
    let mut result: u64;
    
    if rax == 0
    {
        result = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hde8bb4ba94dd46be(0);
    }
    else
    {
        let mut var_b0: i64 = rax;
        let mut var_68: i128;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0d308ee95f9441af(
            &var_68, &var_b0, rdx_1);
        var_90 = 1;
        var_a8 = var_68;
        let var_58: i64;
        let var_98_1: i64 = var_58;
        result = alloc::boxed::Box$LT$T$GT$::new::h8c28acd2624e9f9f(&var_a8);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h78ae2c01de2ad3a3(var_b0);
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::hbec81c69bfd4ba75(&var_50);
    result
}
