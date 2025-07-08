
  int64_t uu_tail::forwards_thru_file::h1756bf1e18ac67f2(int64_t arg1, int64_t arg2, char arg3)

{
    int64_t var_60;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7fcbf21db742f1f7(&var_60, 
        0x2000, arg1);
    int64_t var_78 = 0;
    int64_t var_70 = 1;
    int64_t var_68 = 0;
    int64_t rbx = 0;
    int64_t r12 = 0;
    int64_t result;
    
    while (true)
    {
        r12 = _$LT$u64$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h30cfd590689ce002(
            r12);
        int64_t rdx_1;
        result = std::io::read_until::hc44e4035ffea86b1(&var_60, arg3);
        
        if (result || !rdx_1)
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h284f430dac29ffa9(&var_78);
            break;
        }
        
        rbx += rdx_1;
        int64_t var_68_1 = 0;
        
        if (r12 < arg2)
            continue;
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h284f430dac29ffa9(&var_78);
        break;
    }
    
    int64_t var_58;
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::hcb85c70210735641(var_60, var_58);
    return result;
}
