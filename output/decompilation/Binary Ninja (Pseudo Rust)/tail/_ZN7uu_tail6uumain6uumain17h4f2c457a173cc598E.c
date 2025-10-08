
  fn uu_tail::uumain::uumain::h4f2c457a173cc598(arg1: i64) -> u64

{
    let mut var_f8: *mut *mut [i8; 0xa3];
    uu_tail::args::parse_args::h43d18e920560b20a(&var_f8, arg1);
    let rcx: *mut *mut [i8; 0xa3] = var_f8;
    let var_f0: u64;
    let mut rax: u64 = var_f0;
    
    if rcx != 5
    {
        let var_b0: i64;
        let var_50_1: i64 = var_b0;
        let var_c0: i128;
        let var_60_1: i128 = var_c0;
        let var_d0: i128;
        let var_70_1: i128 = var_d0;
        let mut var_e0: i128;
        let var_80_1: i128 = var_e0;
        let mut var_98: *mut *mut [i8; 0xa3] = rcx;
        let var_90_1: u64 = rax;
        let var_e8: i64;
        let var_88_1: i64 = var_e8;
        uu_tail::args::Settings::check_warnings::h0e1cfe5e0e5b7f3f(&var_98);
        let rax_1: i8 = uu_tail::args::Settings::verify::hc5274fc1768a90af(&var_98);
        
        if rax_1 != 0
        {
            let mut rbx_1: u64;
            
            if rax_1 != 1
            {
                rbx_1 = 0;
            }
            else
            {
                let mut var_48: i64 = 0;
                let var_40_1: *const i8 = "-cannot follow /home/34r7hm4n/.r…";
                let var_38_1: i64 = 1;
                let var_30_1: i8 = 1;
                let mut var_a8: *mut i64 = &var_48;
                let var_a0_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_f8 = &data_571ae0;
                let var_f0_1: i64 = 2;
                *var_e0[8] = 0;
                let var_e8_1: *mut *mut i64 = &var_a8;
                var_e0 = 1;
                let mut var_28: i128;
                core::option::Option$LT$T$GT$::map_or_else::h42203edf7c781717(&var_28, &var_f8);
                var_e0 = 1;
                var_f8 = var_28;
                let var_18: i64;
                let var_e8_2: i64 = var_18;
                rbx_1 = alloc::boxed::Box$LT$T$GT$::new::h91ea36abbec1b09e(&var_f8);
            }
            
            core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h678d2e5b8582bfdc(&var_98);
            return rbx_1;
        }
        
        let mut rax_5: u64;
        let mut rdx_2: i64;
        rax_5 = uu_tail::uu_tail::hb4d0bd57fdc397ee(&var_98);
        core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h678d2e5b8582bfdc(&var_98);
        rax = rax_5;
    }
    
    rax
}
