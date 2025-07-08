
  fn uu_cut::cut_fields_explicit_out_delim::h5c816d4033f8d8fe(arg1: i32, arg2: i64, arg3: i64, arg4: i64, arg5: i8, arg6: i8, arg7: i64, arg8: i64) -> *mut i128

{
    let mut var_68: i64 = arg3;
    let var_60: i64 = arg4;
    let mut var_c2: i8 = arg5;
    let mut var_c1: i8 = arg6;
    let mut var_40: ();
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4b66837b380ddfc6(&var_40, 
        0x2000, arg1);
    let mut rax_1: *mut i128;
    let mut rdx_1: *mut i64;
    rax_1 = uu_cut::stdout_writer::h8d13c8405537874a();
    let mut var_c0: *mut i128 = rax_1;
    let mut var_a8: i64 = arg2;
    let var_a0: *mut i8 = &var_c2;
    let var_98: *mut *mut i128 = &var_c0;
    let mut var_90: *mut i8 = &var_c1;
    let var_88: *mut i64 = &var_68;
    let var_80: i64 = arg7;
    let var_78: i64 = arg8;
    let mut rax_2: *mut c_void;
    let mut rdx_3: i64;
    rax_2 = bstr::io::BufReadExt::for_byte_record_with_terminator::h870687f4a8b6b18d(&var_40, arg6, 
        &var_a8);
    
    if rax_2 == 0
    {
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(var_c0, rdx_1);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h847359979c596e00(&var_40);
        return nullptr;
    }
    
    let mut var_b0: *mut c_void = rax_2;
    let mut var_58: i128;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h1fe03c512653459d(&var_58, &var_b0, 
        rdx_3);
    var_90 = 1;
    var_a8 = var_58;
    let var_48: i64;
    let var_98_1: i64 = var_48;
    let result: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::hac334f3a9663fcff(&var_a8);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd987992319436672(var_b0);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(var_c0, rdx_1);
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h847359979c596e00(&var_40);
    result
}
