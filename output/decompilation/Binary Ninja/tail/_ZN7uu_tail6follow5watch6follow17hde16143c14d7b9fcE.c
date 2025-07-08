
  int128_t* uu_tail::follow::watch::follow::hde16143c14d7b9fc(int32_t* arg1, char* arg2)

{
    size_t rbp;
    size_t var_8 = rbp;
    void* r15;
    void* var_10 = r15;
    char rax = uu_tail::follow::files::FileHandling::no_files_remaining::hf3496cc0e002c3dd(
        &arg1[0xe], arg2);
    char rax_1;
    
    if (rax)
        rax_1 = uu_tail::follow::files::FileHandling::only_stdin_remaining::h9831c931e4f5678d(
            &arg1[0xe]);
    
    int128_t* result;
    int128_t var_270;
    int64_t var_260;
    int128_t var_228;
    
    if (rax && !rax_1)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&var_270);
        int64_t var_218_2 = var_260;
        var_228 = var_270;
        int32_t var_210_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_228);
    }
    else
    {
        int32_t* r12 = arg1;
        int32_t rax_2 = r12[0x22];
        int32_t var_234 = rax_2;
        char rcx_1 = arg2[0x4c];
        char rdx_1 = arg2[0x4a];
        int64_t rdx_2 = *(arg2 + 0x30);
        int32_t rdx_3 = *(arg2 + 0x38);
        char const (** const var_230_1)[0xe7] = &data_5bc1b8;
        
        if (rcx_1 == 2)
            goto label_506f60;
        
        while (true)
        {
            if (rax_2
                && uu_tail::platform::unix::ProcessChecker::is_dead::he1a98e91c2c8dfd9(&var_234))
            {
                result = nullptr;
                goto label_507667;
            }
            
            label_506f60:
            
            if (!(*(r12 + 0x8e) & 1) || !r12[0x23])
                goto label_5071d5;
            
            char* result_9 = *(r12 + 0x28);
            int64_t rcx_2 = *(r12 + 0x30);
            char* result_8 = result_9;
            void* var_2c0_1 = &result_9[rcx_2 * 0x18];
            label_506fad:
            void* rax_4 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h214d277e2b68ee77(&result_8);
            int128_t* result_6;
            void* result_2;
            int128_t var_258;
            int128_t** var_218;
            int32_t var_210;
            int64_t var_208;
            char* result_7;
            
            if (!rax_4)
            {
                r12 = arg1;
                label_5071d5:
                
                if (*r12 != 3)
                {
                    std::sync::mpmc::Receiver$LT$T$GT$::recv_timeout::h1f975a6ba50f2813(&var_270, 
                        r12, rdx_2, rdx_3);
                    int64_t rax_10 = var_270;
                    result_8 = nullptr;
                    int128_t* result_1 = 8;
                    int128_t** var_2b8_1 = nullptr;
                    char r14_1;
                    void* var_298;
                    int128_t* result_5;
                    void* r13;
                    int128_t var_250;
                    void* var_240;
                    int128_t* var_170;
                    
                    if (rax_10 - 1 > 6)
                    {
                        label_507575:
                        void* var_1f8_1 = var_240;
                        int128_t var_208_1 = var_250;
                        var_218 = var_260;
                        var_228 = var_270;
                        var_170 = &var_228;
                        uint64_t (* var_168_1)(int64_t* arg1, void* arg2) = _$LT$notify..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hd94546b42760b6fd;
                        result_6 = &data_5bc180;
                        int64_t var_2a0_1 = 1;
                        int64_t var_288_1 = 0;
                        int128_t** var_298_1 = &var_170;
                        int64_t var_290_1 = 1;
                        int128_t var_138;
                        core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_138, 
                            &result_6);
                        var_290_1 = 1;
                        result_6 = var_138;
                        int64_t var_128;
                        int64_t var_298_2 = var_128;
                        result = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&result_6);
                        rbp = 1;
                        core::ptr::drop_in_place$LT$notify..error..Error$GT$::h254f5de2e736f707(
                            &var_228);
                        r14_1 = 1;
                        result_7 = nullptr;
                        rbp = 1;
                    }
                    else
                        switch (rax_10)
                        {
                            case 1:
                            {
                                if (std::io::error::Error::kind::hb2ff5fa058639b3d(*var_270[8]))
                                    goto label_507575;
                                
                                var_298 = var_240;
                                result_6 = var_250;
                                
                                if (var_240)
                                {
                                    int64_t rbx = *(result_2 + 8);
                                    r15 = *(result_2 + 0x10);
                                    
                                    if (uu_tail::follow::files::FileHandling::contains_key::hb9b0dd7b277f1857(&arg1[0xe], rbx, r15))
                                    {
                                        if (*r12 == 3)
                                        {
                                            core::option::unwrap_failed::h0e11329e76906eaa();
                                            /* no return */
                                        }
                                        
                                        (*(*(r12 + 0x18) + 0x20))(&var_228, *(r12 + 0x10), rbx, 
                                            r15);
                                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$notify..error..Error$GT$$GT$::h1955e5315261984f(&var_228);
                                    }
                                }
                                
                                rbp = 1;
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&result_6);
                                rbp = 1;
                                result_7 = nullptr;
                                goto label_5073b0;
                            }
                            case 2:
                            case 3:
                            case 4:
                            {
                                goto label_507575;
                            }
                            case 5:
                            {
                                result_6 = &data_5bbeb0;
                                int64_t (* var_2a0_2)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                var_228 = &data_5bc160;
                                *var_228[8] = 2;
                                var_208 = 0;
                                int128_t** var_218_3 = &result_6;
                                var_210 = 1;
                                r13 = 1;
                                result_7 = 1;
                                rbp = 1;
                                int128_t var_150;
                                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(
                                    &var_150, &var_228);
                                int32_t var_210_2 = 1;
                                var_228 = var_150;
                                int64_t var_140;
                                int64_t var_218_4 = var_140;
                                r13 = 1;
                                result_7 = 1;
                                rbp = 1;
                                result_5 =
                                    alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_228);
                                label_5077fc:
                                result = result_5;
                                r13 = 1;
                                r14_1 = 0;
                                result_7 = 1;
                                rbp = 1;
                                break;
                            }
                            case 6:
                            {
                                var_218 = var_258;
                                var_208 = *var_250[8];
                                var_228 = var_270;
                                
                                if (!var_218)
                                    goto label_507377;
                                
                                void* rax_20 = *var_228[8];
                                
                                if (!uu_tail::follow::files::FileHandling::contains_key::hb9b0dd7b277f1857(&arg1[0xe], *(rax_20 + 8), *(rax_20 + 0x10)))
                                    goto label_507377;
                                
                                uu_tail::follow::watch::Observer::handle_event::hf377c643c1a778ce(
                                    &result_6, r12, &var_228, arg2);
                                result_7 = result_6;
                                result = result_2;
                                
                                if (result_7 == -0x8000000000000000)
                                {
                                    r13 = 1;
                                    result_7 = 1;
                                    core::ptr::drop_in_place$LT$notify..event..Event$GT$::hc14176a2572b9d6e(&var_228);
                                    r13 = 1;
                                    r14_1 = 0;
                                    result_7 = 1;
                                }
                                else
                                {
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&result_8);
                                    result_8 = result_7;
                                    result_1 = result;
                                    var_2b8_1 = var_298;
                                    r12 = arg1;
                                    label_507377:
                                    result_7 = 1;
                                    core::ptr::drop_in_place$LT$notify..event..Event$GT$::hc14176a2572b9d6e(&var_228);
                                    result_7 = 1;
                                    label_5073b0:
                                    
                                    if (rcx_1 != 2 && *(r12 + 0x8d))
                                    {
                                        uu_tail::follow::files::FileHandling::keys::h4394a3d4fbf32fd4(&var_228, &arg1[0xe]);
                                        int64_t var_e8_1 = var_208;
                                        int128_t var_f8_1 = var_218;
                                        int128_t var_108 = var_228;
                                        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he64bcd77bd860359(&var_228, &var_108);
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&result_8);
                                        var_2b8_1 = var_218;
                                        result_8 = var_228;
                                    }
                                    
                                    result_6 = result_1;
                                    result_2 = result_1 + var_2b8_1 * 0x18;
                                    label_507445:
                                    void* rax_25 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h214d277e2b68ee77(&result_6);
                                    
                                    if (!rax_25)
                                    {
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&result_8);
                                        r12 = arg1;
                                        
                                        if (~var_270 & 6)
                                            core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::hced92ed8b1b7bc68(&var_270);
                                        
                                        rax_2 = r12[0x22];
                                        
                                        if (rcx_1 == 2)
                                            goto label_506f60;
                                        
                                        continue;
                                    }
                                    else
                                    {
                                        uu_tail::follow::files::FileHandling::tail_file::h8ac57e4964e40afa(&var_228, &arg1[0xe], *(rax_25 + 8), *(rax_25 + 0x10), 
                                            rdx_1);
                                        result = var_228;
                                        
                                        if (!result)
                                            goto label_507445;
                                        
                                        r13 = 1;
                                        r14_1 = 0;
                                    }
                                }
                                break;
                            }
                            case 7:
                            {
                                result_7 = 1;
                                rbp = 1;
                                
                                if (!*var_270[8])
                                    goto label_5073b0;
                                
                                var_170 = 1;
                                result_6 = &var_170;
                                int64_t (* var_2a0_3)(char* arg1, int64_t arg2) = _$LT$std..sync..mpsc..RecvTimeoutError$u20$as$u20$core..fmt..Display$GT$::fmt::h0f095b628b6fcfe0;
                                var_228 = &data_5bc190;
                                *var_228[8] = 1;
                                var_208 = 0;
                                int128_t** var_218_5 = &result_6;
                                var_210 = 1;
                                r13 = 1;
                                result_7 = 1;
                                rbp = 1;
                                int128_t var_120;
                                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(
                                    &var_120, &var_228);
                                int32_t var_210_3 = 1;
                                var_228 = var_120;
                                int64_t var_110;
                                int64_t var_218_6 = var_110;
                                r13 = 1;
                                result_7 = 1;
                                rbp = 1;
                                result_5 =
                                    alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_228);
                                goto label_5077fc;
                            }
                        }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&result_8);
                    
                    if (~var_270 & 6)
                    {
                        if (!r14_1)
                            core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::hced92ed8b1b7bc68(&var_270);
                        
                        if (result_7)
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&*var_258[8]);
                    }
                    
                    break;
                }
                
                var_230_1 = &data_5bc1d0;
            }
            else
            {
                result_7 = *(rax_4 + 8);
                rbp = *(rax_4 + 0x10);
                std::fs::metadata::h5a76b0b01e9dc15d(&var_228, result_7);
                
                if (var_228 == 2)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&var_228);
                    goto label_506fad;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&var_228);
                r15 = uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(&arg1[0xe], 
                    result_7, rbp);
                std::fs::metadata::h5a76b0b01e9dc15d(&var_228, result_7);
                void var_e0;
                core::result::Result$LT$T$C$E$GT$::unwrap::h4cbb2e8f2fd89391(&var_e0, &var_228);
                int32_t var_a8;
                int32_t rax_7 = var_a8 & 0xf000;
                
                if (rax_7 != 0x1000 && rax_7 != 0x8000 && rax_7 != 0x2000)
                    goto label_506fad;
                
                if (*(r15 + 0xc8))
                    goto label_506fad;
                
                int64_t rax_8;
                int64_t rdx_7;
                rax_8 = uucore::util_name::h60d842bf27b05e82();
                var_270 = rax_8;
                *var_270[8] = rdx_7;
                result_6 = &var_270;
                int64_t (* var_2a0)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_228 = &data_5bbe20;
                *var_228[8] = 2;
                var_208 = 0;
                int128_t** var_218_1 = &result_6;
                var_210 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_228);
                var_270 = 0;
                var_270 = *(r15 + 0xb8);
                var_258 = 1;
                result_6 = &var_270;
                result_2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_228 = &data_5bbf58;
                *var_228[8] = 2;
                var_208 = 0;
                var_218 = &result_6;
                var_210 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_228);
                uu_tail::follow::files::FileHandling::update_metadata::h4aaaeb16ccacaf37(
                    &arg1[0xe], result_7, rbp, &var_e0);
                int128_t* result_3;
                void* rdx_10;
                result_3 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(
                    &arg1[0xe], result_7, rbp);
                result = result_3;
                
                if (result_3)
                    break;
                
                uu_tail::follow::files::FileHandling::tail_file::h8ac57e4964e40afa(&var_228, 
                    &arg1[0xe], result_7, rbp, rdx_1);
                result = var_228;
                
                if (result)
                    break;
                
                if (*arg1 != 3)
                {
                    int128_t* result_4;
                    result_4 =
                        uu_tail::follow::watch::WatcherRx::watch_with_parent::h1fadf41504d6de8e(
                        *(arg1 + 0x10), *(arg1 + 0x18), result_7, rbp);
                    result = result_4;
                    
                    if (!result_4)
                        goto label_506fad;
                    
                    break;
                }
            }
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
    }
    label_507667:
    core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::h60ddef1d36aee139(arg1);
    return result;
}
