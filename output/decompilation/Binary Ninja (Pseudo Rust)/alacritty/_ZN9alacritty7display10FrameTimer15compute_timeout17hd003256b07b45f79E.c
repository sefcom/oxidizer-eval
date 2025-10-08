
  fn alacritty::display::FrameTimer::compute_timeout::hd003256b07b45f79(arg1: *mut i64, arg2: i64, arg3: i32) -> i64

{
    let mut result: i64 = arg2;
    let mut rax: i64;
    let mut rdx: i32;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    
    if arg1[4] != result || arg1[5] != arg3
    {
        *arg1 = rax;
        arg1[1] = rdx;
        arg1[2] = rax;
        arg1[3] = rdx;
        arg1[4] = result;
        arg1[5] = arg3;
    }
    else
    {
        let mut rax_1: i64;
        let mut rdx_2: i32;
        rax_1 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h6e1ba6fe622dc9c8(arg1[2], arg1[3], result, arg3);
        
        if rax_1 == rax
        {
            if rdx_2 < rdx
            {
                goto 'label_84fd7d;
            }
            
            goto 'label_84fd34;
        }
        
        if rax_1 < rax
        {
            'label_84fd7d:
            let mut rax_2: i64;
            let mut rdx_6: i32;
            rax_2 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Sub$GT$::sub::h58e97276508fd021(rax, rdx, *arg1);
            let rsi_3: i64 = result * 0xf4240;
            let rcx_4: u64 = arg3 / 0x3e8;
            let rcx_5: i64 = rcx_4 + rsi_3;
            
            if rcx_4 == -(rsi_3)
            {
                core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                /* no return */
            }
            
            let rax_4: i64 = rax_2 * 0xf4240 + rdx_6 / 0x3e8;
            let mut rcx_6: u64;
            
            if (rax_4 | rcx_5) >> 0x20 == 0
            {
                rcx_6 = COMBINE(0, rax_4) % rcx_5;
            }
            else
            {
                rcx_6 = COMBINE(0, rax_4) % rcx_5;
            }
            
            let rdx_17: u64 = rcx_6 / 0xf4240;
            let mut rax_10: i64;
            let mut rdx_18: i32;
            rax_10 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Sub$LT$core..time..Duration$GT$$GT$::sub::h5e9dd3ecc3decb67(rax, rdx, rdx_17, (rcx_6 - rdx_17 * 0xf4240) * 0x3e8);
            arg1[2] = rax_10;
            arg1[3] = rdx_18;
            return 0;
        }
        
        'label_84fd34:
        arg1[2] = rax_1;
        arg1[3] = rdx_2;
        let mut result_1: i64;
        let mut rdx_4: i32;
        result_1 =
            _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Sub$GT$::sub::h58e97276508fd021(
            rax_1, rdx_2, rax);
        result = result_1;
    }
    
    result
}
