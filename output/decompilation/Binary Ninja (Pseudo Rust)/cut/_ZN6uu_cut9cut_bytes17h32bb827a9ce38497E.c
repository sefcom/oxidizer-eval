
  fn uu_cut::cut_bytes::h32bb827a9ce38497(arg1: i32, arg2: i64, arg3: i64, arg4: i64, arg5: *mut i64) -> u64

{
    let mut var_78: i64 = arg3;
    let var_70: i64 = arg4;
    let rbp: i8 = arg5[5];
    let mut var_b1: i8 = rbp;
    let mut var_50: ();
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h098d102270798e48(&var_50, 
        arg1);
    let rax: *mut i8 = *arg5;
    let mut rcx: i64 = 1;
    
    if rax != 0
    {
        rcx = arg5[1];
    }
    
    let mut rdx: *const i8 = "\t-: \n: Is a directory\ninvalid…";
    
    if rax != 0
    {
        rdx = rax;
    }
    
    let mut var_a8: *mut i64 = &var_78;
    let var_a0: i64 = arg2;
    let var_98: *const i8 = rdx;
    let mut var_90: i64 = rcx;
    let var_88: *mut i64 = arg5;
    let var_80: *mut i8 = &var_b1;
    let mut rax_1: i64;
    let mut rdx_2: i64;
    rax_1 = bstr::io::BufReadExt::for_byte_record::h7faf1fdbaf93c297(&var_50, rbp, &var_a8);
    let mut result: u64;
    
    if rax_1 == 0
    {
        result = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hde8bb4ba94dd46be(0);
    }
    else
    {
        let mut var_b0: i64 = rax_1;
        let mut var_68: i128;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0d308ee95f9441af(
            &var_68, &var_b0, rdx_2);
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
