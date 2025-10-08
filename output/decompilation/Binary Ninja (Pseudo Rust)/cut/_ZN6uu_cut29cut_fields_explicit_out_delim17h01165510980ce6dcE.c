
  fn uu_cut::cut_fields_explicit_out_delim::h01165510980ce6dc(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i8, arg7: i128) -> u64

{
    let mut var_78: i64 = arg4;
    let var_70: i64 = arg5;
    let mut var_c1: i8 = arg6;
    let rbp: i8 = arg_8;
    let mut var_50: i64;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h435dadcf49ddd50a(&var_50, 
        arg1);
    let mut var_b8: i64 = arg3;
    let var_b0: *mut i8 = &var_c1;
    let var_a8: i64 = arg2;
    let mut var_a0: *mut i32 = &arg_8;
    let var_98: *mut i64 = &var_78;
    let var_90: i128 = arg7;
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = bstr::io::BufReadExt::for_byte_record_with_terminator::haba5d3f45b2c030e(&var_50, rbp, 
        &var_b8);
    let mut result: u64;
    
    if rax == 0
    {
        result = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hde8bb4ba94dd46be(0);
    }
    else
    {
        let mut var_c0: i64 = rax;
        let mut var_68: i128;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0d308ee95f9441af(
            &var_68, &var_c0, rdx_1);
        var_a0 = 1;
        var_b8 = var_68;
        let var_58: i64;
        let var_a8_1: i64 = var_58;
        result = alloc::boxed::Box$LT$T$GT$::new::h8c28acd2624e9f9f(&var_b8);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h78ae2c01de2ad3a3(var_c0);
    }
    
    let var_48: i64;
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::hecaa96515aaaaccf(var_50, var_48);
    result
}
