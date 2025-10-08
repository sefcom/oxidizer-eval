
  fn uu_comm::LineReader::read_line::hcee5e6e842767e3f(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let r12: i8 = arg1[6];
    let mut var_38: *mut i32;
    let mut result: i64;
    
    if *arg1 == 0
    {
        let mut rax: *mut i32;
        let mut rdx_2: i8;
        rax = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&arg1[1]);
        var_38 = rax;
        let mut result_2: i64;
        let mut rdx_4: i64;
        result_2 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::hc4dcd49adc43842d(&var_38, r12, arg2);
        result = result_2;
        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::ha1cd649d6c05cfff(var_38, 
            rdx_2 & 1);
    }
    else
    {
        let mut result_1: i64;
        let mut rdx_1: i64;
        result_1 = std::io::read_until::ha0639595779685f0(arg1, r12, arg2);
        result = result_1;
    }
    
    var_38 = r12;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hffb6799ff363e4fd(arg2[1], arg2[2], 
        &var_38) == 0
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h4a924773790e6b9b(arg2, r12);
    }
    
    result
}
