
  fn uu_tail::unbounded_tail::h4476cde5dd10c477(arg1: *mut i64, arg2: *mut i64) -> u64

{
    let mut r15: i64;
    let var_10: i64 = r15;
    let var_1030: i64 = 0;
    let var_2030: i64 = 0;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_2048: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_2088: i64;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h263c6123d9aad573(&var_2088, 
        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_2048));
    let mut var_2060: i8;
    let result_1: u64;
    let mut result_6: u64;
    let mut rdx_3: i64;
    let mut result: u64;
    
    match *arg2
    {
        0 =>
        {
            let var_2018_1: i8 = arg2[2];
            let var_2020_1: i64 = arg2[1];
            var_2048 = nullptr;
            let var_2040_1: i64 = 8;
            let mut s: i128;
            __builtin_memset(&s, 0, 0x18);
            let mut result_2: u64;
            let mut rdx_1: i64;
            result_2 = uu_tail::chunks::LinesChunkBuffer::fill::h58244c51965137fa(&var_2048, arg1);
            result = result_2;
            let mut result_3: u64;
            
            if result_2 == 0
            {
                result_3 = uu_tail::chunks::LinesChunkBuffer::print::h3123f31996031d80(&var_2048, 
                    &var_2088);
                result = result_3;
            }
            
            if result_2 == 0 && result_3 == 0
            {
                core::ptr::drop_in_place$LT$uu_tail..chunks..LinesChunkBuffer$GT$::hc40f2f12a1bc8633(&var_2048);
                'label_4a7ca9:
                
                if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::ha1f2842950199d30(&var_2088) == 0
                {
                    result = 0;
                }
                else
                {
                    result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    result = result_6;
                }
            }
            else
            {
                core::ptr::drop_in_place$LT$uu_tail..chunks..LinesChunkBuffer$GT$::hc40f2f12a1bc8633(&var_2048);
            }
        }
        1 =>
        {
            r15 = arg2[1];
            
            if r15 == 1
            {
                goto 'label_4a7b9b;
            }
            
            r15 -= 1;
            let rbp_1: i8 = arg2[2];
            memset(&var_2048, 0, 0x2000);
            let zmm0_1: i128 = {0};
            let var_38_1: i8 = rbp_1;
            
            loop
            {
                uu_tail::chunks::LinesChunk::fill::h8372a98993d49080(&var_2060, &var_2048, arg1);
                result = result_1;
                
                if (var_2060 & 1) != 0
                {
                    goto 'label_4a7cca;
                }
                
                if result != 1
                {
                    break;
                }
                
                if r15 <= *zmm0_1[8]
                {
                    break;
                }
                
                r15 -= *zmm0_1[8];
            }
            
            if zmm0_1 == 0
            {
                goto 'label_4a7ca9;
            }
            
            let mut result_7: u64;
            result_7 = uu_tail::chunks::LinesChunk::print_bytes::h75a21001e86c00f1(&var_2048, 
                &var_2088, 
                uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::h2268f5cb3457a111(
                    &var_2048, r15));
            result = result_7;
            
            if result_7 == 0
            {
                if (_$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h572661dd5870f13d(arg1, &var_2088) & 1) == 0
                {
                    goto 'label_4a7ca9;
                }
                
                result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                result = result_6;
            }
        }
        2 =>
        {
            'label_4a7b9b:
            
            if (_$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h572661dd5870f13d(arg1, &var_2088) & 1) == 0
            {
                goto 'label_4a7ca9;
            }
            
            result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            result = result_6;
        }
        3 =>
        {
            goto 'label_4a7ca9;
        }
        4 =>
        {
            match arg2[1]
            {
                0 =>
                {
                    let var_2028_1: i64 = arg2[2];
                    let var_2020_2: i64 = 0;
                    var_2048 = nullptr;
                    let var_2040_2: i64 = 8;
                    let var_2038_1: i128 = {0};
                    let mut result_4: u64;
                    let mut rdx_2: i64;
                    result_4 =
                        uu_tail::chunks::BytesChunkBuffer::fill::h6193d56f4c03047f(&var_2048, arg1);
                    result = result_4;
                    let mut result_5: u64;
                    
                    if result_4 == 0
                    {
                        result_5 = uu_tail::chunks::BytesChunkBuffer::print::h021bb420f35b3c38(
                            &var_2048, &var_2088);
                        result = result_5;
                    }
                    
                    if result_4 == 0 && result_5 == 0
                    {
                        core::ptr::drop_in_place$LT$uu_tail..chunks..BytesChunkBuffer$GT$::hdc77aa670acf7026(&var_2048);
                        goto 'label_4a7ca9;
                    }
                    
                    core::ptr::drop_in_place$LT$uu_tail..chunks..BytesChunkBuffer$GT$::hdc77aa670acf7026(&var_2048);
                }
                1 =>
                {
                    let r12_1: i64 = arg2[2];
                    
                    if r12_1 == 1
                    {
                        goto 'label_4a7c81;
                    }
                    
                    let mut r12_2: i64 = r12_1 - 1;
                    memset(&var_2048, 0, 0x2008);
                    
                    loop
                    {
                        uu_tail::chunks::BytesChunk::fill::h59bd7f494a242c6c(&var_2060, &var_2048, 
                            arg1);
                        result = result_1;
                        
                        if (var_2060 & 1) != 0
                        {
                            goto 'label_4a7cca;
                        }
                        
                        if (result & 1) == 0
                        {
                            result = 0;
                            goto 'label_4a7cca;
                        }
                        
                        let var_2050: i64;
                        let c_1: bool = var_2050 < r12_2;
                        let rax_17: i8 = (var_2050 != r12_2 && !c_1) - 0;
                        
                        if rax_17 != 0xff
                        {
                            if rax_17 != 0
                            {
                                let mut rax_19: i64;
                                let mut rdx_8: u64;
                                rax_19 =
                                    uu_tail::chunks::BytesChunk::get_buffer_with::he0dbe54d462564f8(
                                    &var_2048, r12_2);
                                let var_2078: i64;
                                
                                if rdx_8 >= var_2088 - var_2078
                                {
                                    if std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hcacd9b423553587d(&var_2088, rax_19, rdx_8) != 0
                                    {
                                        result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                        break;
                                    }
                                }
                                else
                                {
                                    let var_2080: i64;
                                    memcpy(var_2080 + var_2078, rax_19, rdx_8);
                                    let var_2078_1: i64 = rdx_8 + var_2078;
                                }
                            }
                            
                            if (_$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h572661dd5870f13d(arg1, &var_2088) & 1) == 0
                            {
                                goto 'label_4a7ca9;
                            }
                            
                            result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            break;
                        }
                        
                        r12_2 -= var_2050;
                    }
                    
                    result = result_6;
                }
                2 =>
                {
                    'label_4a7c81:
                    
                    if (_$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h572661dd5870f13d(arg1, &var_2088) & 1) == 0
                    {
                        goto 'label_4a7ca9;
                    }
                    
                    result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    result = result_6;
                }
                3 =>
                {
                    goto 'label_4a7ca9;
                }
            }
        }
    }
    
    'label_4a7cca:
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h9abdbdfff854d5b5(&var_2088);
    result
}
