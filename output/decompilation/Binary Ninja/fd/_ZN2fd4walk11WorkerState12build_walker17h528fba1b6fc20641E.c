
  int64_t fd::walk::WorkerState::build_walker::h528fba1b6fc20641(int64_t* arg1, int128_t* arg2, void* arg3, int64_t arg4)

{
    if (!arg4)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    int64_t var_1a8;
    fd::walk::WorkerState::build_overrides::h07e07fdbe9066c9a(&var_1a8, *(arg2 + 0x58), arg2[6], 
        arg3);
    int64_t rcx_1 = var_1a8;
    int64_t result;
    
    if (-(rcx_1) == -0x8000000000000000)
    {
        arg1[1] = result;
        *arg1 = 2;
        return result;
    }
    
    int128_t var_158;
    int128_t var_1c0_1 = var_158;
    int128_t var_198;
    uint64_t var_200_1 = var_198;
    int64_t result_1 = result;
    ignore::walk::WalkBuilder::new::h2757c17276ab6607(&var_1a8, arg3);
    char var_110_1 = *(arg2 + 0x1da);
    char rbx_1 = *(arg2 + 0x1db);
    char var_10f_1 = rbx_1;
    char rax_1;
    
    if (*(arg2 + 0x1dc) != 1)
        rax_1 = 0;
    else
    {
        rax_1 = 1;
        
        if (!rbx_1)
            rax_1 = *(arg2 + 0x1dd);
    }
    
    char var_10e_1 = rax_1;
    char rax_2 = *(arg2 + 0x1dd);
    char var_10c_1 = rax_2;
    char var_10d_1 = rax_2;
    char var_10b_1 = rax_2;
    char var_109_1 = *(arg2 + 0x1de);
    int64_t var_148;
    int64_t var_298_1 = var_148;
    int128_t var_2a8_1 = var_1c0_1;
    int128_t var_168;
    int128_t var_2b8_1 = var_168;
    int128_t var_178;
    int128_t var_2c8_1 = var_178;
    int128_t var_188;
    int128_t var_2d8_1 = var_188;
    int128_t var_2f8 = rcx_1;
    int128_t* rax_5 = ignore::walk::WalkBuilder::overrides::hf6b417a23fef1b56(&var_1a8, &var_2f8);
    rax_5[0xd] = arg2[0x1e];
    *(rax_5 + 0xd1) = *(arg2 + 0x1e1);
    *rax_5 = *arg2;
    
    if (rbx_1)
        ignore::dir::IgnoreBuilder::add_custom_ignore_filename::h9e6eb0f85cf3b87e(&var_158);
    
    int128_t var_358;
    int64_t var_330;
    uint64_t var_320;
    int128_t var_310;
    int64_t var_300;
    void** const var_268;
    
    if (*(arg2 + 0x1df))
    {
        int64_t var_228;
        etcetera::base_strategy::choose_base_strategy::hc1946d42805bd380(&var_228);
        
        if (var_228 != -0x8000000000000000)
        {
            int64_t var_218;
            int64_t var_348_1 = var_218;
            var_358 = var_228;
            _$LT$etcetera..base_strategy..xdg..Xdg$u20$as$u20$etcetera..base_strategy..BaseStrategy$GT$::config_dir::hc680a7b4b761bd51(&var_2f8, &var_358);
            int64_t r13_1 = *var_2f8[8];
            std::path::Path::join::h2e36849a222ee21c(&var_330, r13_1, var_200_1, 
                "fdignorefailed to spawn thread/r…");
            int64_t var_328;
            int64_t var_280;
            std::path::Path::join::h2e36849a222ee21c(&var_280, var_328, var_320, 
                "ignorefailed to spawn thread/rus…");
            core::mem::drop::h3eb21fab0c0d11e6(var_330, var_328);
            core::mem::drop::h3eb21fab0c0d11e6(var_2f8, r13_1);
            int64_t var_278;
            uint64_t var_270;
            
            if (!std::path::Path::is_file::h6e28d87ff76ffc41(var_278, var_270))
                core::mem::drop::h3eb21fab0c0d11e6(var_280, var_278);
            else
            {
                uint64_t rdx_7 = ignore::walk::WalkBuilder::add_ignore::h72842306988f4d4b(&var_330, 
                    &var_1a8, &var_280);
                int64_t rbx_2 = var_330;
                int64_t rax_8 = rbx_2;
                
                if (rbx_2 != 9)
                {
                    rax_8 = rbx_2;
                    
                    if (rbx_2)
                    {
                        var_2c8_1 = var_300;
                        int128_t var_2d8_2 = var_310;
                        int128_t var_2e8_2 = var_320;
                        var_2f8 = var_330;
                        int128_t* var_238 = &var_2f8;
                        uint64_t (* var_230_1)(int64_t* arg1, int64_t* arg2) = _$LT$ignore..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he8ab982f851e8e54;
                        var_268 = &data_802648;
                        int64_t var_260_1 = 2;
                        int64_t var_248_1 = 0;
                        int128_t** var_258_1 = &var_238;
                        int64_t var_250_1 = 1;
                        void var_d0;
                        core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_d0, 0, 
                            rdx_7, &var_268);
                        fd::error::print_error::h653511955bf98e50(&var_d0);
                        core::ptr::drop_in_place$LT$ignore..Error$GT$::hba255aab589c455f(&var_2f8);
                        rax_8 = var_330;
                    }
                }
                
                if (rax_8 != 9 && (!rbx_2 || rbx_2 == 9))
                    core::ptr::drop_in_place$LT$ignore..Error$GT$::hba255aab589c455f(&var_330);
            }
            
            core::ptr::drop_in_place$LT$fd..hyperlink..PathUrl$GT$::h2d976cf0ed371e6c(var_358, 
                *var_358[8]);
        }
    }
    
    int64_t rax_10 = *(arg2 + 0x78);
    
    if (rax_10)
    {
        void* rbp_2 = arg2[7];
        int64_t i_2 = rax_10 * 0x18;
        int64_t i;
        
        do
        {
            uint64_t rdx_9 =
                ignore::walk::WalkBuilder::add_ignore::h661fe35ca4bb8eb0(&var_330, &var_1a8, rbp_2);
            int64_t rbx_3 = var_330;
            int64_t rax_12 = rbx_3;
            
            if (rbx_3 != 9)
            {
                rax_12 = rbx_3;
                
                if (rbx_3)
                {
                    var_2c8_1 = var_300;
                    int128_t var_2d8_3 = var_310;
                    int128_t var_2e8_3 = var_320;
                    var_2f8 = var_330;
                    var_358 = &var_2f8;
                    *var_358[8] = _$LT$ignore..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he8ab982f851e8e54;
                    var_268 = &data_802668;
                    int64_t var_260_2 = 2;
                    int64_t var_248_2 = 0;
                    int128_t* var_258_2 = &var_358;
                    int64_t var_250_2 = 1;
                    void var_48;
                    core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_48, 0, 
                        rdx_9, &var_268);
                    fd::error::print_error::h653511955bf98e50(&var_48);
                    core::ptr::drop_in_place$LT$ignore..Error$GT$::hba255aab589c455f(&var_2f8);
                    rax_12 = var_330;
                }
            }
            
            if (rax_12 != 9 && (!rbx_3 || rbx_3 == 9))
                core::ptr::drop_in_place$LT$ignore..Error$GT$::hba255aab589c455f(&var_330);
            
            rbp_2 += 0x18;
            i = i_2;
            i_2 -= 0x18;
        } while (i != 0x18);
    }
    
    void* i_1 = arg4 * 0x18 + -0xffffffffffffffe8;
    void* r15_1 = arg3 + 0x18;
    
    while (i_1)
    {
        i_1 -= 0x18;
        ignore::walk::WalkBuilder::add::ha4515dcd5f254dba(&var_1a8, r15_1);
        r15_1 += 0x18;
    }
    
    int64_t var_f8_1 = arg2[0x1a];
    int128_t var_b8;
    ignore::walk::WalkBuilder::build_parallel::hfc1000ec665f112a(&var_b8, &var_1a8);
    int128_t var_58;
    *(arg1 + 0x60) = var_58;
    int128_t var_68;
    *(arg1 + 0x50) = var_68;
    int128_t var_78;
    *(arg1 + 0x40) = var_78;
    int128_t zmm0_7 = var_b8;
    int128_t var_88;
    *(arg1 + 0x30) = var_88;
    int128_t var_98;
    *(arg1 + 0x20) = var_98;
    int128_t var_a8;
    *(arg1 + 0x10) = var_a8;
    *arg1 = zmm0_7;
    return core::ptr::drop_in_place$LT$ignore..walk..WalkBuilder$GT$::he1d9bb4ee46bd15e(&var_1a8);
}
