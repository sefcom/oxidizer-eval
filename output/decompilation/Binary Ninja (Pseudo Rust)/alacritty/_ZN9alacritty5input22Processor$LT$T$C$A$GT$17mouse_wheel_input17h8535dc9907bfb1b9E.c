
  fn alacritty::input::Processor$LT$T$C$A$GT$::mouse_wheel_input::h8535dc9907bfb1b9(arg1: *mut i64, arg2: *mut i32, arg3: i8) -> u32

{
    let r15_1: i8 = *(arg1[8] + 0x414);
    let mut zmm0_1: u128;
    let mut zmm1_1: u128;
    let mut zmm2: [f64; 0x2];
    
    if *arg2 != 1
    {
        let var_78_1: f32 = arg2[1];
        let var_68_1: i32 = arg2[2];
        let r14_1: *mut c_void = arg1[6];
        let mut var_48: ();
        _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_48, r14_1);
        _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_48, r14_1);
        let var_2c: i32;
        zmm1_1 = var_68_1 * var_2c;
        let var_30: f32;
        zmm0_1 = (var_78_1 * var_30);
        zmm1_1 = zmm1_1;
    }
    else
    {
        let mut result: u32;
        
        if arg3 == 0
        {
            let rbx_1: *mut c_void = arg1[3];
            result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::scheduler_mut::h7228edc0b7dad3ea(rbx_1);
            *rbx_1.byte_offset(0x10) = {0};
            return result;
        }
        
        result = arg3;
        
        if result != 1
        {
            return result;
        }
        
        let zmm0: u128 = *arg2.byte_offset(8);
        let zmm1: u128 = *arg2.byte_offset(0x10);
        let mut var_78: i32;
        var_78 = zmm1;
        let mut var_68: i32;
        var_68 = _mm_and_pd(data_4e7800, zmm0);
        zmm0_1 = hypot(zmm0, zmm1);
        zmm2 = var_68;
        zmm2[0] = zmm2[0] / zmm0_1;
        zmm0_1 = zmm0;
        zmm1_1 = 0x3feccccccccccccd;
        let cond:0_1: bool = zmm2[0] > zmm1_1;
        zmm1_1 = __andnpd_xmmxuq_memxuq(_mm_cmpeq_sd(zmm1_1, zmm2[0], 1), var_78);
        
        if !cond:0_1
        {
            zmm0_1 = {0};
        }
    }
    
    zmm2 = {0};
    zmm2[0] = r15_1;
    /* tailcall */
    alacritty::input::Processor$LT$T$C$A$GT$::scroll_terminal::h19a40c0c4c7b1806(arg1, zmm0_1, 
        zmm1_1, zmm2)
}
