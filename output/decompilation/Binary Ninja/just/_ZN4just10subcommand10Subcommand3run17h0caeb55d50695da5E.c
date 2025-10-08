
  int64_t just::subcommand::Subcommand::run::h0caeb55d50695da5(char* arg1, void* arg2, int64_t* arg3, int128_t* arg4, int64_t* arg5, int64_t arg6, int64_t arg7, int64_t* arg8)

{
    char* rax;
    uint64_t rdx;
    rax = std::path::Path::parent::hef287f60afa56900(*(arg4 + 8), arg4[1]);
    
    if (!rax)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    void var_798;
    _$LT$$RF$std..path..Path$u20$as$u20$lexiclean..Lexiclean$GT$::lexiclean::h6a5ff6ae87480de6(
        &var_798, rax, rdx);
    int64_t* rbp = arg5;
    int64_t var_8d8_1;
    
    if (*(rbp + 0x1e6) == 1)
    {
        var_8d8_1 = 0;
        
        if (!(0 + -(*(arg2 + 0x78))))
            var_8d8_1 = *(arg2 + 0x80);
    }
    
    int128_t var_860;
    int128_t var_850;
    int128_t var_840;
    int128_t var_830;
    int128_t var_820;
    int128_t var_810;
    int64_t var_800;
    char* rcx_9;
    int128_t zmm0_1;
    int128_t zmm1_1;
    int128_t zmm2_1;
    int128_t zmm3_1;
    
    if (*(rbp + 0x1e6) != 1 || *(arg2 + 0x108) >= -0x7ffffffffffffffe)
    {
        label_68cb60:
        just::justfile::Justfile::run::h44a153d0be889dd4(&var_860, rbp, arg2, arg4, arg8, arg6, 
            arg7);
    }
    else
    {
        int64_t rax_2 = *(arg2 + 0x88);
        void* r15_1 = &rbp[1];
        char rax_4 = *(arg2 + 0x1a7);
        
        while (true)
        {
            just::justfile::Justfile::run::h44a153d0be889dd4(&var_860, rbp, arg2, arg4, arg8, arg6, 
                arg7);
            
            if ((var_860 & 0x3e) != 0x34)
                break;
            
            int64_t var_698_1 = var_800;
            int128_t var_6a8_1 = var_810;
            int128_t var_6b8_1 = var_820;
            int128_t var_6c8_1 = var_830;
            int128_t var_6d8_1 = var_840;
            int128_t var_6e8_1 = var_850;
            int128_t var_6f8_1 = var_860;
            int64_t var_770;
            just::search::Search::search_parent_directory::h53a5a1157ef24091(&var_770, *(arg4 + 8), 
                arg4[1], var_8d8_1, rax_2);
            int64_t var_628_1 = var_800;
            int128_t var_668_1 = var_840;
            int128_t var_678_1 = var_850;
            int128_t var_688 = var_860;
            int128_t var_7d8;
            int128_t var_7d1;
            int128_t var_7c1;
            int128_t var_7b1;
            
            if (var_770 != -0x8000000000000000)
            {
                int128_t var_750;
                var_7b1 = var_750;
                int128_t var_760;
                var_7c1 = var_760;
                var_7d1 = var_770;
                core::ptr::drop_in_place$LT$just..subcommand..Subcommand..run..$u7b$$u7b$closure$u7d$$u7d$$GT$::h4501022010847662(&var_688);
            }
            else
            {
                char rbp_1 = var_688;
                void var_768;
                core::ptr::drop_in_place$LT$just..search_error..SearchError$GT$::h2183513fbbcaac96(
                    &var_768);
                *var_7b1[8] = var_830;
                var_7c1 = var_840;
                var_7d1 = var_850;
                var_7d8 = var_860;
                
                if (rbp_1 != 0x38)
                {
                    *(arg1 + 0x58) = var_810;
                    *(arg1 + 0x48) = var_820;
                    *(arg1 + 0x38) = var_830;
                    *(arg1 + 0x30) = var_830;
                    int128_t zmm0_3 = var_860;
                    *(arg1 + 0x21) = var_840;
                    *(arg1 + 0x11) = var_850;
                    *(arg1 + 1) = zmm0_3;
                    *arg1 = rbp_1;
                    goto label_68cc00;
                }
            }
            
            core::ptr::drop_in_place$LT$just..search..Search$GT$::h18f5d3903328307e(arg4);
            arg4[2] = var_7b1;
            arg4[1] = var_7c1;
            *arg4 = var_7d1;
            
            if (rax_4 >= 2)
            {
                char* rax_12;
                int64_t rdx_5;
                rax_12 = std::path::Path::parent::hef287f60afa56900(*(arg4 + 8), arg4[1]);
                
                if (!rax_12)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                int64_t var_790;
                int64_t var_788;
                int64_t rax_13;
                int64_t rdx_7;
                rax_13 = std::path::Path::strip_prefix::h70061c692fa4f661(var_790, var_788, rax_12);
                int64_t rax_14;
                int64_t rdx_9;
                rax_14 = core::result::Result$LT$T$C$E$GT$::unwrap::h773514536ee4f961(rax_13);
                std::path::Path::components::hd0346d362206f2e9(&var_688, rax_14, rdx_9);
                var_7b1 = var_830;
                var_7c1 = var_668_1;
                var_7d8 = var_688;
                void var_730;
                core::iter::traits::iterator::Iterator::collect::h5ff346cd2ef2f52a(&var_730, 
                    &var_7d8);
                int64_t rax_15;
                int64_t rdx_10;
                rax_15 = std::path::Path::file_name::h6d40d88bf3fb287a(*(arg4 + 8), arg4[1]);
                
                if (!rax_15)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                std::path::Path::join::h1eac0ae5e7efa361(&var_7d8, *var_7d1[1], *var_7d1[9], 
                    rax_15);
                int128_t var_740 = var_678_1;
                int128_t* var_780 = &var_740;
                uint64_t (* var_778_1)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                var_688 = &data_831090;
                *var_688[8] = 2;
                var_668_1 = 0;
                var_678_1 = &var_780;
                *var_678_1[8] = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_688);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_7d8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_730);
            }
            
            just::subcommand::Subcommand::compile::hd4ddb48c754af338(&var_688, arg2, arg3, 
                *(arg4 + 8), arg4[1]);
            int64_t r13_2 = var_688;
            int128_t var_8c8_1 = var_688;
            int64_t var_620;
            
            if (r13_2 == -0x8000000000000000)
            {
                rcx_9 = arg1;
                *(rcx_9 + 0x60) = var_620;
                *(rcx_9 + 0x50) = var_810;
                *(rcx_9 + 0x40) = var_820;
                zmm0_1 = var_8c8_1;
                zmm1_1 = var_678_1;
                zmm2_1 = var_668_1;
                zmm3_1 = var_830;
                goto label_68cbe9;
            }
            
            void var_618;
            void var_320;
            memcpy(&var_320, &var_618, 0x2f0);
            rbp = arg5;
            core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(rbp);
            *rbp = r13_2;
            *(r15_1 + 0x60) = var_620;
            *(r15_1 + 0x50) = var_810;
            *(r15_1 + 0x40) = var_820;
            *(r15_1 + 0x30) = var_830;
            *(r15_1 + 0x20) = var_668_1;
            *(r15_1 + 0x10) = var_678_1;
            *r15_1 = var_8c8_1;
            memcpy(&rbp[0xe], &var_320, 0x2f0);
            
            if (!*(rbp + 0x1e6))
                goto label_68cb60;
        }
    }
    
    char rax_20;
    
    if (*(arg2 + 0x196))
        rax_20 = var_860;
    
    if (!*(arg2 + 0x196) || (rax_20 & 0x3e) != 0x34)
    {
        rcx_9 = arg1;
        *(rcx_9 + 0x60) = var_800;
        *(rcx_9 + 0x50) = var_810;
        *(rcx_9 + 0x40) = var_820;
        zmm0_1 = var_860;
        zmm1_1 = var_850;
        zmm2_1 = var_840;
        zmm3_1 = var_830;
        label_68cbe9:
        *(rcx_9 + 0x30) = zmm3_1;
        *(rcx_9 + 0x20) = zmm2_1;
        *(rcx_9 + 0x10) = zmm1_1;
        *rcx_9 = zmm0_1;
    }
    else
    {
        *arg1 = 0x38;
        
        if (rax_20 != 0x38)
            core::ptr::drop_in_place$LT$just..error..Error$GT$::ha62e3e0ecfcf56b5(&var_860);
    }
    
    label_68cc00:
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_798);
    core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(arg5);
    return core::ptr::drop_in_place$LT$just..search..Search$GT$::h18f5d3903328307e(arg4);
}
