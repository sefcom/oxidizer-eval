
  int64_t rg::search_parallel::h6d9f66b100faf9a3(char* arg1, int32_t* arg2, char arg3)

{
    int32_t* var_8d8 = arg2;
    int64_t rax;
    int32_t rdx;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    char var_8dd = arg2[0x5a];
    void var_808;
    rg::flags::hiargs::HiArgs::buffer_writer::hca11ab9044d40209(&var_808, arg2);
    int32_t rax_2 = arg2[0xc0];
    int32_t var_8c0;
    int128_t var_690;
    int128_t var_68d;
    int64_t rax_3;
    
    if (rax_2 != 0x3b9aca00)
    {
        int32_t rcx_1 = arg2[0xc1];
        int128_t zmm1_1 = *(arg2 + 0x2d8);
        int128_t zmm2_1 = *(arg2 + 0x2e8);
        var_68d = *(arg2 + 0x2c8);
        int64_t rdx_1 = *(arg2 + 0x2f8);
        var_8c0 = 0;
        char var_8bc_1 = 0;
        int128_t var_8bb_1 = var_690;
        int128_t var_8ab_1 = var_68d;
        int128_t var_89b_1 = zmm1_1;
        *var_89b_1[0xb] = *zmm2_1[8];
        int64_t var_888_1 = rdx_1;
        int32_t var_880_1 = rax_2;
        int32_t var_87c_1 = rcx_1;
        rax_3 = 1;
    }
    else
        rax_3 = 0;
    
    int64_t var_8c8 = rax_3;
    char var_8df = 0;
    char var_8de = 0;
    void* var_360;
    rg::flags::hiargs::HiArgs::matcher::h70802ff5d1125361(&var_360, arg2);
    void* rcx_2 = var_360;
    char var_2fd;
    
    if (var_2fd != 2)
    {
        int128_t var_30d;
        int128_t var_825_1 = var_30d;
        int128_t var_318;
        int128_t var_830_1 = var_318;
        int128_t var_328;
        int128_t var_840_1 = var_328;
        int128_t var_338;
        int128_t var_850_1 = var_338;
        int128_t var_348;
        int128_t var_860_1 = var_348;
        int128_t var_358;
        int128_t var_870_1 = var_358;
        void* var_878 = rcx_2;
        char var_815_1 = var_2fd;
        int32_t var_2fc;
        int32_t var_814_1 = var_2fc;
        rg::flags::hiargs::HiArgs::searcher::h183c926e645b97ae(&var_360, arg2);
        void* r14_1 = var_360;
        int64_t r13_1 = var_358;
        
        if (r14_1 != 2)
        {
            void var_788;
            memcpy(&var_788, &*var_358[8], 0xf8);
            void* var_798 = r14_1;
            int64_t var_790_1 = r13_1;
            void var_7b8;
            termcolor::BufferWriter::buffer::h6c7892da0470d0b5(&var_7b8, &var_808);
            rg::flags::hiargs::HiArgs::printer::hcdd6b50cc9b3a11e(&var_360, arg2, arg3, &var_7b8);
            rg::flags::hiargs::HiArgs::search_worker::hf358c6f28cd28c0f(&var_690, arg2, &var_878, 
                &var_798, &var_360);
            void* r14_3 = var_690;
            int64_t r15_1 = *var_68d[5];
            
            if (r14_3 != 2)
            {
                memcpy(&*var_358[8], &*var_68d[0xd], 0x320);
                var_360 = r14_3;
                var_358 = r15_1;
                rg::flags::hiargs::HiArgs::walk_builder::h93d7dc6144a9675f(&var_690, arg2);
                void* r14_4 = var_690;
                int64_t r15_2 = *var_68d[5];
                
                if (r14_4 != 2)
                {
                    memcpy(&var_788, &*var_68d[0xd], 0xc8);
                    var_798 = r14_4;
                    int64_t var_790_2 = r15_2;
                    ignore::walk::WalkBuilder::build_parallel::h8650197b25876e16(&var_878, 
                        &var_798);
                    var_690 = &var_808;
                    *var_68d[5] = &var_8c8;
                    *var_68d[0xd] = &var_8df;
                    int128_t var_67d;
                    *var_67d[5] = &var_8de;
                    *var_67d[0xd] = &var_8dd;
                    int128_t var_66d;
                    *var_66d[5] = &var_360;
                    *var_66d[0xd] = &var_8d8;
                    ignore::walk::WalkParallel::run::hdf34baa356e910f5(&var_878, &var_690);
                    core::ptr::drop_in_place$LT$ignore..walk..WalkBuilder$GT$::h38295eb0d419261c(
                        &var_798);
                    
                    if (var_8d8[0x5a]
                            && !core::sync::atomic::atomic_load::h529993013ff7d57c(&var_8de, 4))
                        rg::eprint_nothing_searched::hf00b8c23f740cffe();
                    
                    if (var_8c8 & 1)
                    {
                        std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h022e5b604783a172(&var_690, 
                            &var_8c0);
                        int32_t* rax_7;
                        char rdx_7;
                        rax_7 =
                            core::result::Result$LT$T$C$E$GT$::unwrap::hbd16d7866b454152(&var_690);
                        int32_t rcx_5 = 0;
                        int64_t var_258;
                        
                        if (var_258 >= 1)
                            rcx_5 = var_258 - 1;
                        
                        var_798 = &var_360 + *(&data_4887b0 + (rcx_5 << 3));
                        var_690 =
                            rg::print_stats::h392dcabb3d8d88a4(arg3, &rax_7[2], rax, rdx, &var_798);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_690);
                        var_690 =
                            termcolor::BufferWriter::print::hca5ecc8128e985e1(&var_808, var_798);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_690);
                        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..StdinRaw$GT$$GT$$GT$::h667fd8cef91aec57(rax_7, rdx_7 & 1);
                    }
                    
                    arg1[1] = core::sync::atomic::atomic_load::h529993013ff7d57c(&var_8df, 4);
                    *arg1 = 0;
                }
                else
                {
                    *(arg1 + 8) = r15_2;
                    *arg1 = 1;
                }
                
                core::ptr::drop_in_place$LT$rg..search..SearchWorker$LT$termcolor..Buffer$GT$$GT$::hc50dd47afd20e3ee(&var_360);
            }
            else
            {
                *(arg1 + 8) = r15_1;
                *arg1 = 1;
            }
        }
        else
        {
            *(arg1 + 8) = r13_1;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$rg..search..PatternMatcher$GT$::h6514a31a5032fe4e(&var_878);
        }
    }
    else
    {
        *(arg1 + 8) = rcx_2;
        *arg1 = 1;
    }
    
    return core::ptr::drop_in_place$LT$termcolor..BufferWriter$GT$::haa2046c50cd86953(&var_808);
}
