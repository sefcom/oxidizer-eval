
  fn uu_pr::mpr::h619b4b447614e91a(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void) -> *mut i64

{
    let mut r15: i64 = arg3;
    let mut var_278: i64 = arg3;
    let mut var_180: i64 = arg2;
    let var_178: i64 = (arg3 << 4) + arg2;
    let mut i: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf96e6303219a00ba(&var_180);
    let mut var_e8: i64;
    
    if i != 0
    {
        do
        {
            uu_pr::open::h24aeb0fb8cb9559f(&var_e8, *i, i[1]);
            let rax_3: i64 = var_e8;
            let var_e0: i64;
            let var_d8: *mut i64;
            
            if rax_3 != -0x7ffffffffffffffb
            {
                *arg1 = rax_3;
                arg1[1] = var_e0;
                arg1[2] = var_d8;
                let var_d0: i64;
                arg1[3] = var_d0;
                goto 'label_5c7629;
            }
            
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$::h8e650e61c5f2ff37(var_e0, var_d8);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf96e6303219a00ba(&var_180);
        } while i != 0;
        
        r15 = var_278;
    }
    
    let r15_2: i64 = (r15 << 4) + arg2;
    var_180 = arg2;
    let var_170_1: i64 = 0;
    let var_160_1: *mut i64 = &var_278;
    let mut var_1d8: i128;
    itertools::kmerge_impl::kmerge_by::hb8a7993f4fdaf3b4(&var_1d8, &var_180);
    itertools::groupbylazy::new::h42b2a1d7236db7b0(&var_e8, &var_1d8);
    let mut r14_1: i64 = *arg4.byte_offset(0x130);
    let mut var_298: i64 = 0;
    let mut var_290_1: i64 = 8;
    let mut var_288_1: i64 = 0;
    let mut var_270: *mut i64 = &var_e8;
    let mut rsi_4: *mut *mut i64 = &var_270;
    let var_1e0_1: i64 = -0x7ffffffffffffffe;
    'label_5c72e6:
    let mut rdx_1: i64 = _$LT$itertools..groupbylazy..Groups$LT$K$C$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h98c90782a6d1a4f2(&var_180, rsi_4);
    
    if r15_2 == var_1e0_1
    {
        let mut rax_9: i64;
        let mut rdx_7: i64;
        rax_9 = uu_pr::print_page::h6e73dbc2020375d5(var_290_1, var_288_1, arg4, r14_1);
        
        if rax_9 == 0
        {
            arg1[1] = 0;
            *arg1 = -0x7ffffffffffffffb;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&var_298);
        }
        else
        {
            _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&var_180, rdx_7, rdx_7);
            let zmm0_4: i128 = var_180;
            *arg1.byte_offset(0x10) = var_170_1;
            *arg1 = zmm0_4;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&var_298);
        }
    }
    else
    {
        let var_1c8_1: i128 = arg4;
        var_1d8 = r15_2;
        
        loop
        {
            let mut var_228: i128 = var_1d8;
            var_1d8 = -0x7fffffffffffffff;
            let mut var_128: i128;
            
            if var_228 == -0x7fffffffffffffff
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_pr..FileLine$GT$$GT$::h6e5d49c74ea73e74(&var_228);
                let var_138: i128;
                rdx_1 = itertools::groupbylazy::ChunkBy$LT$K$C$I$C$F$GT$::step::h70e3b0161418e13d(
                    &var_128, var_138, *var_138[8]);
                
                if var_128 != -0x7fffffffffffffff
                {
                    goto 'label_5c744e;
                }
                
                goto 'label_5c7538;
            }
            
            let var_148: i128;
            let var_f8: i128 = var_148;
            let var_158: i128;
            let var_108: i128 = var_158;
            let var_118: i128 = var_1c8_1;
            var_128 = var_228;
            
            if var_128 == -0x7fffffffffffffff
            {
                'label_5c7538:
                core::ptr::drop_in_place$LT$itertools..groupbylazy..Group$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h87de2da8d7ae081f(&var_1d8);
                rsi_4 = &var_270;
                goto 'label_5c72e6;
            }
            
            'label_5c744e:
            let mut var_268: i128 = var_128;
            
            if var_268 == -0x8000000000000000
            {
                _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&var_228, *var_268[8], rdx_1);
                let zmm0_2: i128 = var_228;
                *arg1.byte_offset(0x10) = var_1c8_1;
                *arg1 = zmm0_2;
                
                if var_268 != -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::he04cd6cf833c6dbe(&var_268);
                }
            }
            else
            {
                let mut rbx_2: i64 = *var_108[8];
                let mut rdx_4: i64;
                
                if r14_1 != rbx_2
                {
                    let mut rax_5: i64;
                    rax_5 = uu_pr::print_page::h6e73dbc2020375d5(var_290_1, var_288_1, arg4, r14_1);
                    
                    if rax_5 == 0
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&var_298);
                        var_298 = 0;
                        var_290_1 = 8;
                        var_288_1 = 0;
                        goto 'label_5c74f3;
                    }
                }
                else
                {
                    rbx_2 = r14_1;
                    'label_5c74f3:
                    let var_1f8_2: i128 = var_f8;
                    let var_208_2: i128 = var_108;
                    let var_218_2: i128 = var_118;
                    var_228 = var_268;
                    rdx_1 =
                        alloc::vec::Vec$LT$T$C$A$GT$::push::ha8dcf02c5afcbd08(&var_298, &var_228);
                    r14_1 = rbx_2;
                    continue;
                }
                
                _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&var_228, rdx_4, rdx_4);
                let zmm0_3: i128 = var_228;
                *arg1.byte_offset(0x10) = var_1c8_1;
                *arg1 = zmm0_3;
                
                if var_268 != -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::he04cd6cf833c6dbe(&var_268);
                }
                else
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb25dbb2025c82b2d(
                        *var_268[8]);
                }
            }
            
            core::ptr::drop_in_place$LT$itertools..groupbylazy..Group$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h87de2da8d7ae081f(&var_1d8);
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(
            &var_298);
    }
    
    core::ptr::drop_in_place$LT$itertools..groupbylazy..ChunkBy$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h48898fe4a1a5cca7(&var_e8);
    'label_5c7629:
    arg1
}
