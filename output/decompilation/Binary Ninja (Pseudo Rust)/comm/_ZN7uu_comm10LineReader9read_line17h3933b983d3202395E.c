
  fn uu_comm::LineReader::read_line::h3933b983d3202395(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let r12: i8 = arg1[6];
    let mut var_38: *mut i32;
    let mut result: i64;
    
    if *arg1 == 0
    {
        let mut rax: *mut i32;
        let mut rdx_2: i8;
        rax = std::io::stdio::Stdin::lock::h161a36d857331d7f(&arg1[1]);
        var_38 = rax;
        let mut result_2: i64;
        let mut rdx_4: i64;
        result_2 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(&var_38, r12, arg2);
        result = result_2;
        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h53bab959efd69a8e(var_38, 
            rdx_2 & 1);
    }
    else
    {
        let mut result_1: i64;
        let mut rdx_1: i64;
        result_1 = std::io::read_until::h8fb7c8014b7193eb(arg1, r12, arg2);
        result = result_1;
    }
    
    var_38 = r12;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h6db73eece4d5ba57(arg2[1], arg2[2], 
        &var_38, 1) == 0
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h396eb65ba5211a69(arg2, r12);
    }
    
    result
}
