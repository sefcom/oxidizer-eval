
  int64_t uu_comm::LineReader::read_line::hcee5e6e842767e3f(int64_t* arg1, int64_t* arg2)

{
    char r12 = arg1[6];
    int32_t* var_38;
    int64_t result;
    
    if (!*arg1)
    {
        int32_t* rax;
        char rdx_2;
        rax = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&arg1[1]);
        var_38 = rax;
        int64_t result_2;
        int64_t rdx_4;
        result_2 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::hc4dcd49adc43842d(&var_38, r12, arg2);
        result = result_2;
        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::ha1cd649d6c05cfff(var_38, 
            rdx_2 & 1);
    }
    else
    {
        int64_t result_1;
        int64_t rdx_1;
        result_1 = std::io::read_until::ha0639595779685f0(arg1, r12, arg2);
        result = result_1;
    }
    
    var_38 = r12;
    
    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hffb6799ff363e4fd(arg2[1], arg2[2], 
            &var_38))
        alloc::vec::Vec$LT$T$C$A$GT$::push::h4a924773790e6b9b(arg2, r12);
    
    return result;
}
