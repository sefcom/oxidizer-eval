
  fn uu_join::Repr$LT$Sep$GT$::print_format::h42b6e953664a5ea5(arg1: *mut c_void, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut r13: i64 = *arg1.byte_offset(0x10);
    
    if r13 == 0
    {
        return 0;
    }
    
    let r12_1: *mut i8 = *arg1.byte_offset(8);
    let rbp_1: i64 = *arg1.byte_offset(0x18);
    let r15_1: u64 = *arg1.byte_offset(0x20);
    let mut rax_1: i64;
    let mut rdx: u64;
    rax_1 = uu_join::State::combine::_$u7b$$u7b$closure$u7d$$u7d$::h139dd91493e9d14f(arg3, r12_1);
    let cond:0_1: bool = rax_1 == 0;
    
    if rax_1 == 0
    {
        rax_1 = rbp_1;
    }
    
    if cond:0_1
    {
        rdx = r15_1;
    }
    
    let mut result: i64 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, rax_1, rdx);
    
    if result != 0
    {
        return result;
    }
    
    let mut r12_2: *mut c_void = &r12_1[0x10];
    
    loop
    {
        let temp1_1: i64 = r13;
        r13 -= 1;
        
        if temp1_1 == 1
        {
            return 0;
        }
        
        result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, 1, 0);
        
        if result != 0
        {
            return result;
        }
        
        let mut rax_2: i64;
        let mut rdx_1: u64;
        rax_2 =
            uu_join::State::combine::_$u7b$$u7b$closure$u7d$$u7d$::h139dd91493e9d14f(arg3, r12_2);
        let cond:1_1: bool = rax_2 == 0;
        
        if rax_2 == 0
        {
            rax_2 = rbp_1;
        }
        
        if cond:1_1
        {
            rdx_1 = r15_1;
        }
        
        result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, rax_2, rdx_1);
        r12_2 += 0x10;
        
        if result != 0
        {
            return result;
        }
    }
}
