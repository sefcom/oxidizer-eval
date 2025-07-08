
  fn uu_tail::forwards_thru_file::h1756bf1e18ac67f2(arg1: i64, arg2: i64, arg3: i8) -> i64

{
    let mut var_60: i64;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7fcbf21db742f1f7(&var_60, 
        0x2000, arg1);
    let mut var_78: i64 = 0;
    let var_70: i64 = 1;
    let var_68: i64 = 0;
    let mut rbx: i64 = 0;
    let mut r12: i64 = 0;
    let mut result: i64;
    
    loop
    {
        r12 = _$LT$u64$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h30cfd590689ce002(
            r12);
        let mut rdx_2: i64;
        result = std::io::read_until::hc44e4035ffea86b1(&var_60, arg3, &var_78);
        
        if result != 0 || rdx_2 == 0
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h284f430dac29ffa9(&var_78);
            break;
        }
        
        rbx += rdx_2;
        let var_68_1: i64 = 0;
        
        if r12 < arg2
        {
            continue;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h284f430dac29ffa9(&var_78);
        break;
    }
    
    let var_58: i64;
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::hcb85c70210735641(var_60, var_58);
    result
}
