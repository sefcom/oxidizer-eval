
  int64_t* uu_pr::mpr::h619b4b447614e91a(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    int64_t r15 = arg3;
    int64_t var_278 = arg3;
    int64_t var_180 = arg2;
    int64_t var_178 = (arg3 << 4) + arg2;
    int64_t* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf96e6303219a00ba(&var_180);
    int64_t var_e8;
    
    if (i)
    {
        do
        {
            uu_pr::open::h24aeb0fb8cb9559f(&var_e8, *i, i[1]);
            int64_t rax_3 = var_e8;
            int64_t var_e0;
            int64_t* var_d8;
            
            if (rax_3 != -0x7ffffffffffffffb)
            {
                *arg1 = rax_3;
                arg1[1] = var_e0;
                arg1[2] = var_d8;
                int64_t var_d0;
                arg1[3] = var_d0;
                goto label_5c7629;
            }
            
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$::h8e650e61c5f2ff37(var_e0, var_d8);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf96e6303219a00ba(&var_180);
        } while (i);
        
        r15 = var_278;
    }
    
    int64_t r15_2 = (r15 << 4) + arg2;
    var_180 = arg2;
    int64_t var_170_1 = 0;
    int64_t* var_160_1 = &var_278;
    int128_t var_1d8;
    itertools::kmerge_impl::kmerge_by::hb8a7993f4fdaf3b4(&var_1d8, &var_180);
    itertools::groupbylazy::new::h42b2a1d7236db7b0(&var_e8, &var_1d8);
    int64_t r14_1 = *(arg4 + 0x130);
    int64_t var_298 = 0;
    int64_t var_290_1 = 8;
    int64_t var_288_1 = 0;
    int64_t* var_270 = &var_e8;
    int64_t** rsi_4 = &var_270;
    int64_t var_1e0_1 = -0x7ffffffffffffffe;
    label_5c72e6:
    int64_t rdx_1 = _$LT$itertools..groupbylazy..Groups$LT$K$C$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h98c90782a6d1a4f2(&var_180, rsi_4);
    
    if (r15_2 == var_1e0_1)
    {
        int64_t rax_9;
        int64_t rdx_7;
        rax_9 = uu_pr::print_page::h6e73dbc2020375d5(var_290_1, var_288_1, arg4, r14_1);
        
        if (!rax_9)
        {
            arg1[1] = 0;
            *arg1 = -0x7ffffffffffffffb;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&var_298);
        }
        else
        {
            _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&var_180, rdx_7, rdx_7);
            int128_t zmm0_4 = var_180;
            *(arg1 + 0x10) = var_170_1;
            *arg1 = zmm0_4;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&var_298);
        }
    }
    else
    {
        int128_t var_1c8_1 = arg4;
        var_1d8 = r15_2;
        
        while (true)
        {
            int128_t var_228 = var_1d8;
            var_1d8 = -0x7fffffffffffffff;
            int128_t var_128;
            
            if (var_228 == -0x7fffffffffffffff)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_pr..FileLine$GT$$GT$::h6e5d49c74ea73e74(&var_228);
                int128_t var_138;
                rdx_1 = itertools::groupbylazy::ChunkBy$LT$K$C$I$C$F$GT$::step::h70e3b0161418e13d(
                    &var_128, var_138, *var_138[8]);
                
                if (var_128 != -0x7fffffffffffffff)
                    goto label_5c744e;
                
                goto label_5c7538;
            }
            
            int128_t var_148;
            int128_t var_f8 = var_148;
            int128_t var_158;
            int128_t var_108 = var_158;
            int128_t var_118 = var_1c8_1;
            var_128 = var_228;
            
            if (var_128 == -0x7fffffffffffffff)
            {
                label_5c7538:
                core::ptr::drop_in_place$LT$itertools..groupbylazy..Group$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h87de2da8d7ae081f(&var_1d8);
                rsi_4 = &var_270;
                goto label_5c72e6;
            }
            
            label_5c744e:
            int128_t var_268 = var_128;
            
            if (var_268 == -0x8000000000000000)
            {
                _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&var_228, *var_268[8], rdx_1);
                int128_t zmm0_2 = var_228;
                *(arg1 + 0x10) = var_1c8_1;
                *arg1 = zmm0_2;
                
                if (var_268 != -0x8000000000000000)
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::he04cd6cf833c6dbe(&var_268);
            }
            else
            {
                int64_t rbx_2 = *var_108[8];
                int64_t rdx_4;
                
                if (r14_1 != rbx_2)
                {
                    int64_t rax_5;
                    rax_5 = uu_pr::print_page::h6e73dbc2020375d5(var_290_1, var_288_1, arg4, r14_1);
                    
                    if (!rax_5)
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&var_298);
                        var_298 = 0;
                        var_290_1 = 8;
                        var_288_1 = 0;
                        goto label_5c74f3;
                    }
                }
                else
                {
                    rbx_2 = r14_1;
                    label_5c74f3:
                    int128_t var_1f8_2 = var_f8;
                    int128_t var_208_2 = var_108;
                    int128_t var_218_2 = var_118;
                    var_228 = var_268;
                    rdx_1 =
                        alloc::vec::Vec$LT$T$C$A$GT$::push::ha8dcf02c5afcbd08(&var_298, &var_228);
                    r14_1 = rbx_2;
                    continue;
                }
                
                _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&var_228, rdx_4, rdx_4);
                int128_t zmm0_3 = var_228;
                *(arg1 + 0x10) = var_1c8_1;
                *arg1 = zmm0_3;
                
                if (var_268 != -0x8000000000000000)
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::he04cd6cf833c6dbe(&var_268);
                else
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb25dbb2025c82b2d(
                        *var_268[8]);
            }
            
            core::ptr::drop_in_place$LT$itertools..groupbylazy..Group$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h87de2da8d7ae081f(&var_1d8);
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(
            &var_298);
    }
    
    core::ptr::drop_in_place$LT$itertools..groupbylazy..ChunkBy$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h48898fe4a1a5cca7(&var_e8);
    label_5c7629:
    return arg1;
}
