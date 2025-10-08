
  fn uu_pinky::platform::unix::read_to_console::hc6a6cffdbcb4a9a1(arg1: i32) -> i64

{
    let mut var_38: ();
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h00e1d9f834816982(&var_38, 
        arg1);
    let mut var_a8: i64 = 0;
    let var_a0: i64 = 1;
    let var_98: u64 = 0;
    let mut rax: u64;
    let mut rdx: i64;
    rax = _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_end::h05014a0e11dc2a76(&var_38, &var_a8);
    
    if rax == 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h5ea1a6bc07b7fdfc(0, rdx);
        let mut var_50: ();
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_50, var_a0, var_98);
        let mut var_90: *mut c_void = &var_50;
        let var_88_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h3e04ddfa3244aadc;
        let mut var_80: *mut c_void = &data_419240;
        let var_78_1: i64 = 1;
        let var_60_1: i64 = 0;
        let var_70_1: *mut *mut c_void = &var_90;
        let var_68_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_80);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h29ddd331d55ccf59(&var_50);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h5ea1a6bc07b7fdfc(rax, rdx);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h736d7624bde0aeed(var_a8, var_a0);
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h4d2d4d2b5655530e(&var_38)
}
