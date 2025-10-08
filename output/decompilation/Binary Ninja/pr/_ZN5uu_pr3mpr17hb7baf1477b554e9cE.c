
  int128_t* uu_pr::mpr::hb7baf1477b554e9c(int128_t* arg1, int64_t* arg2, int64_t arg3, void* arg4)

{
    int64_t var_258 = arg3;
    int64_t var_e8;
    int64_t rax_2;
    
    if (!arg3)
        rax_2 = 0;
    else
    {
        int64_t* i = arg2;
        
        do
        {
            uu_pr::open::hde771125822bcd7a(&var_e8, *i, i[1]);
            int64_t rax_1 = var_e8;
            int128_t var_e0;
            
            if (rax_1 != -0x7ffffffffffffffb)
            {
                *arg1 = rax_1;
                *(arg1 + 8) = var_e0;
                int64_t var_d0;
                *(arg1 + 0x18) = var_d0;
                goto label_536b82;
            }
            
            i = &i[2];
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hddd4d76a723283f5(var_e0, *var_e0[8]);
        } while (i != &arg2[arg3 * 2]);
        
        rax_2 = var_258;
    }
    
    void* rax_4 = &arg2[rax_2 * 2];
    int64_t* var_140 = arg2;
    int64_t var_130_1 = 0;
    int64_t* var_120_1 = &var_258;
    int128_t var_1f8;
    itertools::kmerge_impl::kmerge_by::h67f459eb51eb618e(&var_1f8, &var_140);
    itertools::groupbylazy::new::hacaeed45d4e07cb0(&var_e8, &var_1f8);
    int64_t r13_1 = *(arg4 + 0x130);
    int64_t var_278 = 0;
    void* const var_270_1 = 8;
    int64_t var_268_1 = 0;
    int64_t* var_250 = &var_e8;
    int64_t* rsi_4 = &var_250;
    int64_t rbx_1 = -0x7ffffffffffffffe;
    int64_t var_200_1 = -0x7ffffffffffffffe;
    label_5368dc:
    int64_t rdx_1 = _$LT$itertools..groupbylazy..Groups$LT$K$C$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h06b0b434981690c9(&var_140, rsi_4);
    
    if (rax_4 == rbx_1)
    {
        char rax_9;
        int64_t rdx_8;
        rax_9 = uu_pr::print_page::hc11615535955301d(var_270_1, var_268_1, arg4, r13_1);
        
        if (!(rax_9 & 1))
        {
            *(arg1 + 8) = 0;
            *arg1 = -0x7ffffffffffffffb;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdc8372bef9543cb5(&var_278);
        }
        else
        {
            _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::h216bf08d6106c8bb(&var_140, rdx_8, rdx_8);
            int128_t zmm0_5 = var_140;
            arg1[1] = var_130_1;
            *arg1 = zmm0_5;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdc8372bef9543cb5(&var_278);
        }
    }
    else
    {
        int128_t var_1e8_1 = arg4;
        var_1f8 = rax_4;
        
        while (true)
        {
            int128_t var_248 = var_1f8;
            var_1f8 = -0x7fffffffffffffff;
            int128_t var_188;
            
            if (var_248 == -0x7fffffffffffffff)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_pr..FileLine$GT$$GT$::h51e0741277c7dedf(&var_248);
                int128_t var_f8;
                rdx_1 = itertools::groupbylazy::ChunkBy$LT$K$C$I$C$F$GT$::step::h4d4a123dac3f3ecf(
                    &var_188, var_f8, *var_f8[8]);
                
                if (var_188 != -0x7fffffffffffffff)
                    goto label_536a22;
                
                goto label_536ad8;
            }
            
            int128_t var_108;
            int128_t var_158 = var_108;
            int128_t var_118;
            int128_t var_168 = var_118;
            int128_t var_178 = var_1e8_1;
            var_188 = var_248;
            
            if (var_188 == -0x7fffffffffffffff)
            {
                label_536ad8:
                core::ptr::drop_in_place$LT$itertools..groupbylazy..Group$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hcaa1782373e6839d(&var_1f8);
                rsi_4 = &var_250;
                rbx_1 = var_200_1;
                goto label_5368dc;
            }
            
            label_536a22:
            var_248 = var_188;
            int128_t var_218_2 = var_158;
            int128_t var_238_2 = var_178;
            int128_t var_1a8;
            int128_t var_198;
            
            if (var_248 == -0x8000000000000000)
            {
                _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::h216bf08d6106c8bb(&var_1a8, *var_248[8], rdx_1);
                int128_t zmm0_3 = var_1a8;
                arg1[1] = var_198;
                *arg1 = zmm0_3;
            }
            else
            {
                int64_t r12_1 = *var_168[8];
                int64_t rdx_4;
                
                if (r13_1 != r12_1)
                {
                    char rax_5;
                    rax_5 = uu_pr::print_page::hc11615535955301d(var_270_1, var_268_1, arg4, r13_1);
                    
                    if (!(rax_5 & 1))
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdc8372bef9543cb5(&var_278);
                        var_278 = 0;
                        var_270_1 = 8;
                        var_268_1 = 0;
                        goto label_536ab8;
                    }
                }
                else
                {
                    r12_1 = r13_1;
                    label_536ab8:
                    rdx_1 =
                        alloc::vec::Vec$LT$T$C$A$GT$::push::ha1202c8d23570234(&var_278, &var_188);
                    r13_1 = r12_1;
                    continue;
                }
                
                _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::h216bf08d6106c8bb(&var_1a8, rdx_4, rdx_4);
                int128_t zmm0_4 = var_1a8;
                arg1[1] = var_198;
                *arg1 = zmm0_4;
                
                if (var_248 != -0x8000000000000000)
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hd8f32127ba2a6967(&var_248);
                else
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb9c299ee05cc620b(
                        &*var_248[8]);
            }
            core::ptr::drop_in_place$LT$itertools..groupbylazy..Group$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hcaa1782373e6839d(&var_1f8);
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdc8372bef9543cb5(
            &var_278);
    }
    
    core::ptr::drop_in_place$LT$itertools..groupbylazy..ChunkBy$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h7838593b517c6299(&var_e8);
    label_536b82:
    return arg1;
}
