
  fn uu_runcon::execute_command::hf1fa972cc5d084a3(arg1: *mut i8, arg2: u64, arg3: i64, arg4: i64) -> u64

{
    let mut var_170: i32;
    uu_runcon::os_str_to_c_string::h048fb3727ae8a25a(&var_170, arg1, arg2);
    let rax: i32 = var_170;
    let var_16c: i32;
    let mut var_168: i128;
    let var_158: i128;
    let var_148: i128;
    let var_138: i128;
    let mut var_128: i32;
    
    if rax != 0x11
    {
        let var_f0_1: i128 = var_138;
        let var_100_1: i128 = var_148;
        let var_110_1: i128 = var_158;
        var_128 = rax;
        let var_124_1: i32 = var_16c;
        let var_120_1: i128 = var_168;
        let var_e0_1: i32 = 1;
        return alloc::boxed::Box$LT$T$GT$::new::h9d7116f1e2e735a5(&var_128);
    }
    
    let file: *mut i8 = var_168;
    let rbx_1: i64 = *var_168[8];
    core::iter::traits::iterator::Iterator::collect::h5d210673f8f24f41(&var_170, arg3);
    let rax_3: i32 = var_170;
    let mut result: u64;
    let mut var_120: i128;
    let mut var_110: i128;
    let mut var_100: i128;
    let mut var_f0: i128;
    
    if rax_3 != 0x11
    {
        *var_f0[8] = *var_138[8];
        var_100 = var_148;
        var_110 = var_158;
        let var_b8_1: i128 = var_16c;
        let mut var_124: i32;
        var_124 = var_168;
        var_120 = var_168;
        var_128 = rax_3;
        let var_e0_2: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h9d7116f1e2e735a5(&var_128);
    }
    else
    {
        let mut var_d8: i128 = var_168;
        let mut rdi_2: i64 = -1;
        
        if arg4 < -2
        {
            rdi_2 = arg4 + 2;
        }
        
        let mut rax_5: i64;
        let mut rdx_2: i64;
        rax_5 =
            alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::hed9964fe064c2e72(rdi_2, 8, 8);
        var_170 = rax_5;
        var_168 = rdx_2;
        *var_168[8] = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hc452364fbd761f0e(&var_170, file);
        let rsi_3: *mut c_void = *var_d8[8];
        alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::hdc1408df1d37ee13(&var_170, rsi_3, 
            (var_158 << 4) + rsi_3);
        alloc::vec::Vec$LT$T$C$A$GT$::push::hc452364fbd761f0e(&var_170, 0);
        execvp(file, var_168);
        let r13_4: i64 = *__errno_location() << 0x20 | 2;
        let rax_7: i8 = std::io::error::Error::kind::h135fe00c4e7365f3(r13_4);
        let mut var_78: i128;
        uu_runcon::errors::Error::from_io1::h2e5a1b363c345453(&var_78, 
            "Executing commandCString::new() …", 0x11, arg1, arg2, r13_4);
        let var_38: i64;
        *var_f0[8] = var_38;
        let var_48: i128;
        var_100 = var_48;
        let var_58: i128;
        var_110 = var_58;
        let var_68: i128;
        var_120 = var_68;
        var_128 = var_78;
        let var_e0: i32 = 0 + 0x7e;
        result = alloc::boxed::Box$LT$T$GT$::new::h9d7116f1e2e735a5(&var_128);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$BP$const$u20$i8$GT$$GT$::hc4556757e5bae3cf(
            var_170, var_168);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..ffi..c_str..CString$GT$$GT$::h05fd21f4674cee22(&var_d8);
    }
    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h9db586c62cff4b59(file, rbx_1);
    result
}
