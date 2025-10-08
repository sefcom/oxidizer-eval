
  fn uu_pr::mpr::hb7baf1477b554e9c(arg1: *mut i128, arg2: *mut i64, arg3: i64, arg4: *mut c_void) -> *mut i128

{
    let mut var_258: i64 = arg3;
    let mut var_e8: i64;
    let mut rax_2: i64;
    
    if arg3 == 0
    {
        rax_2 = 0;
    }
    else
    {
        let mut i: *mut i64 = arg2;
        
        do
        {
            uu_pr::open::hde771125822bcd7a(&var_e8, *i, i[1]);
            let rax_1: i64 = var_e8;
            let var_e0: i128;
            
            if rax_1 != -0x7ffffffffffffffb
            {
                *arg1 = rax_1;
                *arg1.byte_offset(8) = var_e0;
                let var_d0: i64;
                *arg1.byte_offset(0x18) = var_d0;
                goto 'label_536b82;
            }
            
            i = &i[2];
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hddd4d76a723283f5(var_e0, *var_e0[8]);
        } while i != &arg2[arg3 * 2];
        
        rax_2 = var_258;
    }
    
    let rax_4: *mut c_void = &arg2[rax_2 * 2];
    let mut var_140: *mut i64 = arg2;
    let var_130_1: i64 = 0;
    let var_120_1: *mut i64 = &var_258;
    let mut var_1f8: i128;
    itertools::kmerge_impl::kmerge_by::h67f459eb51eb618e(&var_1f8, &var_140);
    itertools::groupbylazy::new::hacaeed45d4e07cb0(&var_e8, &var_1f8);
    let mut r13_1: i64 = *arg4.byte_offset(0x130);
    let mut var_278: i64 = 0;
    let mut var_270_1: *mut c_void = 8;
    let mut var_268_1: i64 = 0;
    let mut var_250: *mut i64 = &var_e8;
    let mut rsi_4: *mut i64 = &var_250;
    let mut rbx_1: i64 = -0x7ffffffffffffffe;
    let var_200_1: i64 = -0x7ffffffffffffffe;
    'label_5368dc:
    let mut rdx_1: i64 = _$LT$itertools..groupbylazy..Groups$LT$K$C$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h06b0b434981690c9(&var_140, rsi_4);
    
    if rax_4 == rbx_1
    {
        let mut rax_9: i8;
        let mut rdx_8: i64;
        rax_9 = uu_pr::print_page::hc11615535955301d(var_270_1, var_268_1, arg4, r13_1);
        
        if (rax_9 & 1) == 0
        {
            *arg1.byte_offset(8) = 0;
            *arg1 = -0x7ffffffffffffffb;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdc8372bef9543cb5(&var_278);
        }
        else
        {
            _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::h216bf08d6106c8bb(&var_140, rdx_8, rdx_8);
            let zmm0_5: i128 = var_140;
            arg1[1] = var_130_1;
            *arg1 = zmm0_5;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdc8372bef9543cb5(&var_278);
        }
    }
    else
    {
        let var_1e8_1: i128 = arg4;
        var_1f8 = rax_4;
        
        loop
        {
            let mut var_248: i128 = var_1f8;
            var_1f8 = -0x7fffffffffffffff;
            let mut var_188: i128;
            
            if var_248 == -0x7fffffffffffffff
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_pr..FileLine$GT$$GT$::h51e0741277c7dedf(&var_248);
                let var_f8: i128;
                rdx_1 = itertools::groupbylazy::ChunkBy$LT$K$C$I$C$F$GT$::step::h4d4a123dac3f3ecf(
                    &var_188, var_f8, *var_f8[8]);
                
                if var_188 != -0x7fffffffffffffff
                {
                    goto 'label_536a22;
                }
                
                goto 'label_536ad8;
            }
            
            let var_108: i128;
            let var_158: i128 = var_108;
            let var_118: i128;
            let var_168: i128 = var_118;
            let var_178: i128 = var_1e8_1;
            var_188 = var_248;
            
            if var_188 == -0x7fffffffffffffff
            {
                'label_536ad8:
                core::ptr::drop_in_place$LT$itertools..groupbylazy..Group$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hcaa1782373e6839d(&var_1f8);
                rsi_4 = &var_250;
                rbx_1 = var_200_1;
                goto 'label_5368dc;
            }
            
            'label_536a22:
            var_248 = var_188;
            let var_218_2: i128 = var_158;
            let var_238_2: i128 = var_178;
            let mut var_1a8: i128;
            let var_198: i128;
            
            if var_248 == -0x8000000000000000
            {
                _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::h216bf08d6106c8bb(&var_1a8, *var_248[8], rdx_1);
                let zmm0_3: i128 = var_1a8;
                arg1[1] = var_198;
                *arg1 = zmm0_3;
            }
            else
            {
                let mut r12_1: i64 = *var_168[8];
                let mut rdx_4: i64;
                
                if r13_1 != r12_1
                {
                    let mut rax_5: i8;
                    rax_5 = uu_pr::print_page::hc11615535955301d(var_270_1, var_268_1, arg4, r13_1);
                    
                    if (rax_5 & 1) == 0
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdc8372bef9543cb5(&var_278);
                        var_278 = 0;
                        var_270_1 = 8;
                        var_268_1 = 0;
                        goto 'label_536ab8;
                    }
                }
                else
                {
                    r12_1 = r13_1;
                    'label_536ab8:
                    rdx_1 =
                        alloc::vec::Vec$LT$T$C$A$GT$::push::ha1202c8d23570234(&var_278, &var_188);
                    r13_1 = r12_1;
                    continue;
                }
                
                _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::h216bf08d6106c8bb(&var_1a8, rdx_4, rdx_4);
                let zmm0_4: i128 = var_1a8;
                arg1[1] = var_198;
                *arg1 = zmm0_4;
                
                if var_248 != -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hd8f32127ba2a6967(&var_248);
                }
                else
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb9c299ee05cc620b(
                        &*var_248[8]);
                }
            }
            core::ptr::drop_in_place$LT$itertools..groupbylazy..Group$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hcaa1782373e6839d(&var_1f8);
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdc8372bef9543cb5(
            &var_278);
    }
    
    core::ptr::drop_in_place$LT$itertools..groupbylazy..ChunkBy$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h7838593b517c6299(&var_e8);
    'label_536b82:
    arg1
}
