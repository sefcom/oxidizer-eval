
  fn alacritty::scheduler::Scheduler::update::h065fdd9cd98f1674(arg1: *mut i32) -> *mut c_void

{
    let mut rax: i64;
    let mut rdx: i32;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    let mut r14: *mut c_void = &arg1[8];
    
    if *arg1.byte_offset(0x38) != 0
    {
        let mut r15_1: i64 = rax;
        let mut rbp_1: i32 = rdx;
        let var_3a8_1: *mut c_void = r14;
        
        loop
        {
            let rax_1: *mut c_void =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h584517b93fcf50df(r14);
            
            if rax_1 == 0
            {
                core::option::expect_failed::h3f620cfb8545dc61("Out of bounds accessindex out of…");
                /* no return */
            }
            
            let temp0_1: i64 = *rax_1.byte_offset(0xc0);
            
            if temp0_1 != r15_1
            {
                if temp0_1 > r15_1
                {
                    break;
                }
            }
            else if *rax_1.byte_offset(0xc8) > rbp_1
            {
                break;
            }
            
            let mut var_1e8: i32;
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h1e3b0af02de6cd46(
                &var_1e8, r14);
            
            if var_1e8 == 2
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_1e8);
                
                if *arg1.byte_offset(0x38) == 0
                {
                    break;
                }
            }
            else
            {
                let mut var_398: i64;
                memcpy(&var_398, &var_1e8, 0xf0);
                let var_2c0: i32;
                let mut var_2a8: i64;
                let mut var_f8: ();
                
                if var_2c0 != 0x3b9aca00
                {
                    let r12_1: i64 = var_398;
                    let mut var_388: ();
                    _$LT$alacritty..event..EventType$u20$as$u20$core..clone..Clone$GT$::clone::hc479ebfb767007fe(&var_f8, &var_388);
                    var_2a8 = r12_1;
                    let var_390: i64;
                    let var_2a0_1: i64 = var_390;
                    let mut var_298: ();
                    memcpy(&var_298, &var_f8, 0xb0);
                    let var_2b0: i32;
                    let var_3b8_1: i32 = var_2b0;
                    let var_2c8: i64;
                    let var_2b8: i8;
                    alacritty::scheduler::Scheduler::schedule::hb60357d8e26bddb3(arg1, &var_2a8, 
                        var_2c8, var_2c0, 1, var_2b8);
                    r14 = var_3a8_1;
                    rbp_1 = rdx;
                }
                
                memcpy(&var_2a8, &var_398, 0xc0);
                winit::event_loop::EventLoopProxy$LT$T$GT$::send_event::ha003452b73db1a9a(&var_f8, 
                    arg1);
                r15_1 = rax;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$winit..event_loop..EventLoopClosed$LT$alacritty..event..Event$GT$$GT$$GT$::ha34e38cbba7ecdb0(&var_f8);
                
                if *arg1.byte_offset(0x38) == 0
                {
                    break;
                }
            }
        }
    }
    
    let mut result: *mut c_void =
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h584517b93fcf50df(r14);
    
    if result != 0
    {
        let result_1: *mut c_void = result;
        result = *result.byte_offset(0xc0);
        *result_1.byte_offset(0xc8);
    }
    
    result
}
