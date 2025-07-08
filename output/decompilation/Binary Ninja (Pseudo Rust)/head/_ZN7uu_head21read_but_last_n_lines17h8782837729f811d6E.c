
  fn uu_head::read_but_last_n_lines::h8782837729f811d6(arg1: i64, arg2: i64, arg3: i8) -> *mut *mut c_void

{
    std::io::stdio::stdout::h077da66234850927();
    let mut var_e0: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_e8: *mut i64 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_e0);
    let mut var_68: i128;
    uu_head::take::TakeAllBut$LT$I$GT$::new::hc0845bc7cedacb1c(&var_68, arg1, arg3, arg2);
    let var_38: i64;
    let var_78: i64 = var_38;
    let var_48: i128;
    let var_88: i128 = var_48;
    let var_58: i128;
    let var_98: i128 = var_58;
    let mut var_a8: i128 = var_68;
    let mut result: *mut *mut c_void;
    
    loop
    {
        let mut var_c0: i64;
        _$LT$uu_head..take..TakeAllBut$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a0f0232c199d7f6(&var_c0, &var_a8);
        let rax_2: i64 = var_c0;
        
        if rax_2 == -0x7fffffffffffffff
        {
            core::ptr::drop_in_place$LT$uu_head..take..TakeAllBut$LT$uucore..features..lines..Lines$LT$$RF$mut$u20$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$$GT$$GT$::h8c6f48dc289688b8(&var_a8);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(var_e8);
            return nullptr;
        }
        
        let result_2: *mut *mut c_void;
        result = result_2;
        
        if rax_2 == -0x8000000000000000
        {
            break;
        }
        
        let mut var_d8: i64 = rax_2;
        let result_1: *mut *mut c_void = result;
        let var_b0: u64;
        let var_c8_1: u64 = var_b0;
        let result_3: *mut *mut c_void = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_e8, result, var_b0);
        result = result_3;
        
        if result_3 != 0
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb5d1cc1ebcc864d9(&var_d8);
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb5d1cc1ebcc864d9(&var_d8);
    }
    
    core::ptr::drop_in_place$LT$uu_head..take..TakeAllBut$LT$uucore..features..lines..Lines$LT$$RF$mut$u20$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$$GT$$GT$::h8c6f48dc289688b8(&var_a8);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(var_e8);
    result
}
