
  uint64_t fd::walk::WorkerState::scan::h5421ececa066738e(char* arg1, int128_t* arg2)

{
    int64_t var_128;
    int64_t rcx;
    void* rdx;
    fd::walk::WorkerState::build_walker::h528fba1b6fc20641(&var_128, arg2, rdx, rcx);
    int64_t rcx_1 = var_128;
    uint64_t result_1;
    uint64_t result = result_1;
    int128_t* r14;
    
    if (rcx_1 != 2)
    {
        uint64_t result_2 = result;
        
        if (!(0 + -(*(arg2 + 0xc8))) && !*(arg2 + 0x1c8))
        {
            int64_t* rsi = arg2[0x21];
            int64_t temp1_1 = *rsi;
            *rsi += 1;
            int64_t temp2_1;
            
            if (temp1_1 > -1)
            {
                int64_t* rdx_1 = *(arg2 + 0x218);
                temp2_1 = *rdx_1;
                *rdx_1 += 1;
            }
            
            if (temp1_1 <= -1 || temp2_1 <= -1)
                trap(6);
            
            ctrlc::init_and_set_handler::h1bb3233601cb3954(&var_128, rsi);
            core::result::Result$LT$T$C$E$GT$::unwrap::hacb05d1112c71bda(&var_128);
        }
        
        crossbeam_channel::channel::bounded::h59736cade95c7d49(&var_128, arg2[0x1a] * 2);
        int128_t* var_98_1 = arg2;
        int128_t var_118;
        int128_t var_a8_1 = var_118;
        var_128 = rcx_1;
        int128_t var_118_1 = var_118;
        int128_t var_108;
        int128_t var_108_1 = var_108;
        int128_t var_f8;
        int128_t var_f8_1 = var_f8;
        int128_t var_e8;
        int128_t var_e8_1 = var_e8;
        int128_t var_d8;
        int128_t var_d8_1 = var_d8;
        int128_t var_c8;
        int128_t var_c8_1 = var_c8;
        int128_t var_b8_1 = var_128;
        r14 = nullptr;
        result = std::thread::scoped::scope::hf42bb0e2e47ad158(&var_128);
        char rcx_2 = 5;
        
        if (!core::sync::atomic::atomic_load::h95058969b162ab98(*(arg2 + 0x218) + 0x10, 0))
            rcx_2 = result;
        
        arg1[1] = rcx_2;
    }
    else
    {
        *(arg1 + 8) = result;
        r14 = 1;
    }
    
    *arg1 = r14;
    return result;
}
