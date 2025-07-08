
  int64_t uu_comm::LineReader::read_line::h3933b983d3202395(int64_t* arg1, int64_t* arg2)

{
    char r12 = arg1[6];
    int32_t* var_38;
    int64_t result;
    
    if (!*arg1)
    {
        int32_t* rax;
        char rdx_2;
        rax = std::io::stdio::Stdin::lock::h161a36d857331d7f(&arg1[1]);
        var_38 = rax;
        int64_t result_2;
        int64_t rdx_4;
        result_2 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(&var_38, r12, arg2);
        result = result_2;
        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h53bab959efd69a8e(var_38, 
            rdx_2 & 1);
    }
    else
    {
        int64_t result_1;
        int64_t rdx_1;
        result_1 = std::io::read_until::h8fb7c8014b7193eb(arg1, r12, arg2);
        result = result_1;
    }
    
    var_38 = r12;
    
    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h6db73eece4d5ba57(arg2[1], arg2[2], 
            &var_38, 1))
        alloc::vec::Vec$LT$T$C$A$GT$::push::h396eb65ba5211a69(arg2, r12);
    
    return result;
}
