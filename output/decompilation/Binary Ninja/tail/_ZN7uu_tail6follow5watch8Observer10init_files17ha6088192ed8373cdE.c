
  int128_t* uu_tail::follow::watch::Observer::init_files::ha6088192ed8373cd(int32_t* arg1, int64_t arg2, int64_t arg3)

{
    int32_t* r14;
    int32_t* var_18 = r14;
    
    if (*arg1 != 3)
    {
        int64_t var_58 = arg2;
        int64_t var_50_1 = arg3 * 0x30 + arg2;
        
        while (true)
        {
            void* rax_7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h37bf687fdcd4f7ca(&var_58);
            
            if (!rax_7)
                break;
            
            if (*(rax_7 + 0x18) != -0x8000000000000000)
            {
                int128_t var_98;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&var_98, rax_7 + 0x18);
                size_t var_88;
                size_t var_a8_1 = var_88;
                int128_t var_b8 = var_98;
                
                if (std::path::Path::is_absolute::h3431a23d91045560(*var_b8[8], var_88))
                    goto label_505b4e;
                
                std::env::current_dir::h8e5fbaefdf378c8c(&var_98);
                int64_t rax_10 = var_98;
                int64_t rsi_3 = *var_98[8];
                int128_t* result;
                int32_t* rdx_3;
                
                if (rax_10 == -0x8000000000000000)
                {
                    int128_t* result_3;
                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    result = result_3;
                }
                else
                {
                    size_t rdx_1 = var_88;
                    int64_t var_70 = rax_10;
                    int64_t var_68_1 = rsi_3;
                    size_t var_60_1 = rdx_1;
                    var_88 = var_a8_1;
                    var_98 = var_b8;
                    int128_t var_48;
                    std::path::Path::join::h568adc6ac393441e(&var_48, rsi_3, rdx_1, &var_98);
                    var_b8 = var_48;
                    size_t var_38;
                    var_a8_1 = var_38;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_70);
                    label_505b4e:
                    char rax_13 = _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_tailable::hfd31d73cfedfa97d(*var_b8[8], var_a8_1);
                    int64_t rdx_2 = *var_b8[8];
                    
                    if (!rax_13)
                    {
                        if (_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_orphan::h65c9528458cf452d(rdx_2, var_a8_1))
                        {
                            var_88 = var_a8_1;
                            var_98 = var_b8;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&arg1[8], 
                                &var_98);
                            continue;
                        }
                        else
                        {
                            char* rax_15;
                            int64_t rdx_4;
                            rax_15 =
                                std::path::Path::parent::h65c9a340a6266f2d(*var_b8[8], var_a8_1);
                            
                            if (!rax_15)
                            {
                                core::option::unwrap_failed::h0e11329e76906eaa();
                                /* no return */
                            }
                            
                            int128_t* result_2 =
                                uu_tail::follow::watch::WatcherRx::watch::h12bff18e757f3bf5(
                                *(arg1 + 0x10), *(arg1 + 0x18), rax_15, rdx_4);
                            result = result_2;
                            
                            if (!result_2)
                            {
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_b8);
                                continue;
                            }
                        }
                    }
                    else
                    {
                        int128_t* result_1;
                        result_1 =
                            uu_tail::follow::watch::WatcherRx::watch_with_parent::h1fadf41504d6de8e(
                            *(arg1 + 0x10), *(arg1 + 0x18), rdx_2, var_a8_1);
                        result = result_1;
                        
                        if (!result_1)
                        {
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(
                                &var_b8);
                            continue;
                        }
                    }
                }
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_b8);
                return result;
            }
        }
    }
    
    return nullptr;
}
