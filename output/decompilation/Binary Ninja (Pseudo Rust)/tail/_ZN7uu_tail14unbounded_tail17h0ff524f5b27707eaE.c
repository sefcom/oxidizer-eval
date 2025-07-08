
  fn uu_tail::unbounded_tail::h0ff524f5b27707ea(arg1: *mut i64, arg2: *mut i64) -> *mut i128

{
    let mut r15: i64;
    let var_10: i64 = r15;
    let var_1030: i64 = 0;
    let var_2030: i64 = 0;
    std::io::stdio::stdout::h077da66234850927();
    let mut var_2050: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_2090: i64;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::haf7bea51889604aa(&var_2090, 
        0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_2050));
    let mut var_2068: i64;
    let result_1: *mut i128;
    let mut var_2048: i64;
    let mut result_6: *mut i128;
    let mut rdx_4: i64;
    let mut result: *mut i128;
    
    match *arg2
    {
        0 =>
        {
            let var_2018_1: i8 = arg2[2];
            let var_2020_1: i64 = arg2[1];
            var_2048 = 0;
            let var_2040_1: i64 = 8;
            let mut s: i128;
            __builtin_memset(&s, 0, 0x18);
            let mut result_2: *mut i128;
            let mut rdx_1: i64;
            result_2 = uu_tail::chunks::LinesChunkBuffer::fill::hcbed3c945377b024(&var_2048, arg1);
            result = result_2;
            let mut result_3: *mut i128;
            
            if result_2 == 0
            {
                result_3 = uu_tail::chunks::LinesChunkBuffer::print::hefbd00f13cbf9cbb(&var_2048, 
                    &var_2090);
                result = result_3;
            }
            
            if result_2 != 0 || result_3 != 0
            {
                core::ptr::drop_in_place$LT$uu_tail..chunks..LinesChunkBuffer$GT$::h4f8eeb493df43bec(&var_2048);
                'label_5010ba:
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h13404fe74d804a04(&var_2090);
                return result;
            }
            
            core::ptr::drop_in_place$LT$uu_tail..chunks..LinesChunkBuffer$GT$::h4f8eeb493df43bec(
                &var_2048);
            'label_5011c5:
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h13404fe74d804a04(&var_2090);
            nullptr
        }
        1 =>
        {
            r15 = arg2[1];
            
            if r15 == 1
            {
                goto 'label_501098;
            }
            
            r15 -= 1;
            let rbp_1: i8 = arg2[2];
            memset(&var_2048, 0, 0x2010);
            let var_38_1: i8 = rbp_1;
            
            loop
            {
                uu_tail::chunks::LinesChunk::fill::hef4f17e44b226b86(&var_2068, &var_2048, arg1);
                result = result_1;
                
                if var_2068 != 0
                {
                    goto 'label_5010ba;
                }
                
                if result != 1
                {
                    break;
                }
                
                let var_40: i64;
                
                if r15 <= var_40
                {
                    break;
                }
                
                r15 -= var_40;
            }
            
            let var_48: i64;
            
            if var_48 == 0
            {
                goto 'label_5011c5;
            }
            
            let mut result_7: *mut i128;
            result_7 = uu_tail::chunks::LinesChunk::print_bytes::h511958a4f1ddf5e5(&var_2048, 
                &var_2090, 
                uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::hf7157a0eade16c76(
                    &var_2048, r15));
            result = result_7;
            
            if result_7 != 0
            {
                goto 'label_5010ba;
            }
            
            let mut rax_13: i64;
            let mut rdx_7: i64;
            rax_13 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hd923691b4bd8cae6(arg1, &var_2090);
            
            if rax_13 == 0
            {
                goto 'label_5011c5;
            }
            
            result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            result = result_6;
            goto 'label_5010ba;
        }
        2 =>
        {
            'label_501098:
            let mut rax_9: i64;
            let mut rdx_3: i64;
            rax_9 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hd923691b4bd8cae6(arg1, &var_2090);
            
            if rax_9 == 0
            {
                goto 'label_5011c5;
            }
            
            result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            result = result_6;
            goto 'label_5010ba;
        }
        3 =>
        {
            goto 'label_5011c5;
        }
        4 =>
        {
            match arg2[1]
            {
                0 =>
                {
                    let var_2028_1: i64 = arg2[2];
                    let var_2020_2: i64 = 0;
                    var_2048 = 0;
                    let var_2040_2: i64 = 8;
                    let var_2038_1: i128 = {0};
                    let mut result_4: *mut i128;
                    let mut rdx_2: i64;
                    result_4 =
                        uu_tail::chunks::BytesChunkBuffer::fill::h90a0fcd0980c89b8(&var_2048, arg1);
                    result = result_4;
                    let mut result_5: *mut i128;
                    
                    if result_4 == 0
                    {
                        result_5 = uu_tail::chunks::BytesChunkBuffer::print::had08519fe61c1e10(
                            &var_2048, &var_2090);
                        result = result_5;
                    }
                    
                    if result_4 != 0 || result_5 != 0
                    {
                        core::ptr::drop_in_place$LT$uu_tail..chunks..BytesChunkBuffer$GT$::h83b3f06568852970(&var_2048);
                        goto 'label_5010ba;
                    }
                    
                    core::ptr::drop_in_place$LT$uu_tail..chunks..BytesChunkBuffer$GT$::h83b3f06568852970(&var_2048);
                    goto 'label_5011c5;
                }
                1 =>
                {
                    let r12_1: i64 = arg2[2];
                    
                    if r12_1 == 1
                    {
                        goto 'label_501194;
                    }
                    
                    let mut r12_2: i64 = r12_1 - 1;
                    memset(&var_2048, 0, 0x2008);
                    
                    loop
                    {
                        uu_tail::chunks::BytesChunk::fill::h4a717c5d739984d3(&var_2068, &var_2048, 
                            arg1);
                        result = result_1;
                        
                        if var_2068 != 0
                        {
                            goto 'label_5010ba;
                        }
                        
                        if result != 1
                        {
                            result = nullptr;
                            goto 'label_5010ba;
                        }
                        
                        let var_2058: i64;
                        let mut rax_16: bool = r12_2 != var_2058;
                        
                        if r12_2 > var_2058
                        {
                            rax_16 = true;
                        }
                        
                        if rax_16 != 0xff
                        {
                            if rax_16 != 0
                            {
                                let mut rax_18: i64;
                                let mut rdx_11: u64;
                                rax_18 =
                                    uu_tail::chunks::BytesChunk::get_buffer_with::h6c35c4ec60c3e618(
                                    &var_2048, r12_2);
                                let var_2080: i64;
                                
                                if rdx_11 >= var_2090 - var_2080
                                {
                                    if std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h9fe1bfb3f224b462(&var_2090, rax_18, rdx_11) != 0
                                    {
                                        result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                        break;
                                    }
                                }
                                else
                                {
                                    let var_2088: i64;
                                    memcpy(var_2088 + var_2080, rax_18, rdx_11);
                                    let var_2080_1: i64 = rdx_11 + var_2080;
                                }
                            }
                            
                            let mut rax_21: i64;
                            let mut rdx_12: i64;
                            rax_21 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hd923691b4bd8cae6(arg1, &var_2090);
                            
                            if rax_21 == 0
                            {
                                goto 'label_5011c5;
                            }
                            
                            result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            break;
                        }
                        
                        r12_2 -= var_2058;
                    }
                    
                    result = result_6;
                    goto 'label_5010ba;
                }
                2 =>
                {
                    'label_501194:
                    let mut rax_14: i64;
                    let mut rdx_8: i64;
                    rax_14 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hd923691b4bd8cae6(arg1, &var_2090);
                    
                    if rax_14 == 0
                    {
                        goto 'label_5011c5;
                    }
                    
                    result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    result = result_6;
                    goto 'label_5010ba;
                }
                3 =>
                {
                    goto 'label_5011c5;
                }
            }
        }
    }
}
