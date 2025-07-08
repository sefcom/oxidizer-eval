
  fn uu_od::output_info::OutputInfo::calculate_alignment::ha011183b33bb66dc(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> *mut i128

{
    let mut s: *mut c_void;
    
    if arg4 >= 9
    {
        let mut var_a0: i64 = arg4 << 3;
        let mut var_50: *mut i64 = &var_a0;
        let var_48: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        let var_40: *const i8 = "@";
        let var_38: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        s = &data_543668;
        let var_90: i64 = 3;
        let var_78: i64 = 0;
        let var_88: *mut *mut i64 = &var_50;
        let var_80: i64 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&s);
        /* no return */
    }
    
    let mut zmm0: i512;
    zmm0 = {0};
    __builtin_memset(&s, 0, 0x40);
    let rax: i64 = (*(arg3 + 0x18))(arg2, zmm0);
    
    if rax == 0
    {
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
        /* no return */
    }
    
    let mut r15: i64 = rax;
    let rax_1: i64 = (*(arg3 + 0x20))(arg2);
    
    if r15 <= arg4
    {
        let mut rax_2: u16 = arg4;
        let temp2_1: i8 = r15;
        let temp1_1: u8 = rax_2 % temp2_1;
        rax_2 = rax_2 / temp2_1;
        *rax_2[1] = temp1_1;
        let mut rbp_1: u64 = rax_2;
        let mut r14_1: i64 = arg5 - rax_1 * rbp_1;
        let mut cond:0_1: bool;
        
        do
        {
            let mut r12_1: u64;
            
            if r14_1 >> 0x20 == 0
            {
                r12_1 = COMBINE(0, r14_1) / rbp_1;
            }
            else
            {
                r12_1 = COMBINE(0, r14_1) / rbp_1;
            }
            
            let mut rax_9: i64 = 0;
            
            do
            {
                let r13_2: i64 = rax_9 * r15;
                
                if r13_2 > 7
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(r13_2, 8);
                    /* no return */
                }
                
                rax_9 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rax_9);
                (&s)[r13_2] += r12_1;
                r14_1 -= r12_1;
            } while rax_9 < rbp_1;
            
            r15 *= 2;
            cond:0_1 = rbp_1 >= 2;
            rbp_1 >>= 1;
        } while cond:0_1;
    }
    
    let zmm0_1: i128 = s;
    __builtin_memset(&arg1[1], 0, 0x30);
    *arg1 = zmm0_1;
    arg1
}
