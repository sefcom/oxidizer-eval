
  void* alacritty::scheduler::Scheduler::update::h065fdd9cd98f1674(int32_t* arg1)

{
    int64_t rax;
    int32_t rdx;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    void* r14 = &arg1[8];
    
    if (*(arg1 + 0x38))
    {
        int64_t r15_1 = rax;
        int32_t rbp_1 = rdx;
        void* var_3a8_1 = r14;
        
        while (true)
        {
            void* rax_1 =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h584517b93fcf50df(r14);
            
            if (!rax_1)
            {
                core::option::expect_failed::h3f620cfb8545dc61("Out of bounds accessindex out of…");
                /* no return */
            }
            
            int64_t temp0_1 = *(rax_1 + 0xc0);
            
            if (temp0_1 != r15_1)
            {
                if (temp0_1 > r15_1)
                    break;
            }
            else if (*(rax_1 + 0xc8) > rbp_1)
                break;
            
            int32_t var_1e8;
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h1e3b0af02de6cd46(
                &var_1e8, r14);
            
            if (var_1e8 == 2)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_1e8);
                
                if (!*(arg1 + 0x38))
                    break;
            }
            else
            {
                int64_t var_398;
                memcpy(&var_398, &var_1e8, 0xf0);
                int32_t var_2c0;
                int64_t var_2a8;
                void var_f8;
                
                if (var_2c0 != 0x3b9aca00)
                {
                    int64_t r12_1 = var_398;
                    void var_388;
                    _$LT$alacritty..event..EventType$u20$as$u20$core..clone..Clone$GT$::clone::hc479ebfb767007fe(&var_f8, &var_388);
                    var_2a8 = r12_1;
                    int64_t var_390;
                    int64_t var_2a0_1 = var_390;
                    void var_298;
                    memcpy(&var_298, &var_f8, 0xb0);
                    int32_t var_2b0;
                    int32_t var_3b8_1 = var_2b0;
                    int64_t var_2c8;
                    char var_2b8;
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
                
                if (!*(arg1 + 0x38))
                    break;
            }
        }
    }
    
    void* result =
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h584517b93fcf50df(r14);
    
    if (result)
    {
        void* result_1 = result;
        result = *(result + 0xc0);
        *(result_1 + 0xc8);
    }
    
    return result;
}
