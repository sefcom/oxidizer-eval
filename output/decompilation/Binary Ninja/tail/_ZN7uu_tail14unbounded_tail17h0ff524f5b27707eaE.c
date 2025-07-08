
  int128_t* uu_tail::unbounded_tail::h0ff524f5b27707ea(int64_t* arg1, int64_t* arg2)

{
    int64_t r15;
    int64_t var_10 = r15;
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_2050 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t var_2090;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::haf7bea51889604aa(&var_2090, 
        0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_2050));
    int64_t var_2068;
    int128_t* result_1;
    int64_t var_2048;
    int128_t* result_6;
    int64_t rdx_4;
    int128_t* result;
    
    switch (*arg2)
    {
        case 0:
        {
            char var_2018_1 = arg2[2];
            int64_t var_2020_1 = arg2[1];
            var_2048 = 0;
            int64_t var_2040_1 = 8;
            int128_t s;
            __builtin_memset(&s, 0, 0x18);
            int128_t* result_2;
            int64_t rdx_1;
            result_2 = uu_tail::chunks::LinesChunkBuffer::fill::hcbed3c945377b024(&var_2048, arg1);
            result = result_2;
            int128_t* result_3;
            
            if (!result_2)
            {
                result_3 = uu_tail::chunks::LinesChunkBuffer::print::hefbd00f13cbf9cbb(&var_2048, 
                    &var_2090);
                result = result_3;
            }
            
            if (result_2 || result_3)
            {
                core::ptr::drop_in_place$LT$uu_tail..chunks..LinesChunkBuffer$GT$::h4f8eeb493df43bec(&var_2048);
                label_5010ba:
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h13404fe74d804a04(&var_2090);
                return result;
            }
            
            core::ptr::drop_in_place$LT$uu_tail..chunks..LinesChunkBuffer$GT$::h4f8eeb493df43bec(
                &var_2048);
            label_5011c5:
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h13404fe74d804a04(&var_2090);
            return nullptr;
            break;
        }
        case 1:
        {
            r15 = arg2[1];
            
            if (r15 == 1)
                goto label_501098;
            
            r15 -= 1;
            char rbp_1 = arg2[2];
            memset(&var_2048, 0, 0x2010);
            char var_38_1 = rbp_1;
            
            while (true)
            {
                uu_tail::chunks::LinesChunk::fill::hef4f17e44b226b86(&var_2068, &var_2048, arg1);
                result = result_1;
                
                if (var_2068)
                    goto label_5010ba;
                
                if (result != 1)
                    break;
                
                int64_t var_40;
                
                if (r15 <= var_40)
                    break;
                
                r15 -= var_40;
            }
            
            int64_t var_48;
            
            if (!var_48)
                goto label_5011c5;
            
            int128_t* result_7;
            result_7 = uu_tail::chunks::LinesChunk::print_bytes::h511958a4f1ddf5e5(&var_2048, 
                &var_2090, 
                uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::hf7157a0eade16c76(
                    &var_2048, r15));
            result = result_7;
            
            if (result_7)
                goto label_5010ba;
            
            int64_t rax_13;
            int64_t rdx_7;
            rax_13 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hd923691b4bd8cae6(arg1, &var_2090);
            
            if (!rax_13)
                goto label_5011c5;
            
            result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            result = result_6;
            goto label_5010ba;
        }
        case 2:
        {
            label_501098:
            int64_t rax_9;
            int64_t rdx_3;
            rax_9 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hd923691b4bd8cae6(arg1, &var_2090);
            
            if (!rax_9)
                goto label_5011c5;
            
            result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            result = result_6;
            goto label_5010ba;
        }
        case 3:
        {
            goto label_5011c5;
        }
        case 4:
        {
            switch (arg2[1])
            {
                case 0:
                {
                    int64_t var_2028_1 = arg2[2];
                    int64_t var_2020_2 = 0;
                    var_2048 = 0;
                    int64_t var_2040_2 = 8;
                    int128_t var_2038_1 = {0};
                    int128_t* result_4;
                    int64_t rdx_2;
                    result_4 =
                        uu_tail::chunks::BytesChunkBuffer::fill::h90a0fcd0980c89b8(&var_2048, arg1);
                    result = result_4;
                    int128_t* result_5;
                    
                    if (!result_4)
                    {
                        result_5 = uu_tail::chunks::BytesChunkBuffer::print::had08519fe61c1e10(
                            &var_2048, &var_2090);
                        result = result_5;
                    }
                    
                    if (result_4 || result_5)
                    {
                        core::ptr::drop_in_place$LT$uu_tail..chunks..BytesChunkBuffer$GT$::h83b3f06568852970(&var_2048);
                        goto label_5010ba;
                    }
                    
                    core::ptr::drop_in_place$LT$uu_tail..chunks..BytesChunkBuffer$GT$::h83b3f06568852970(&var_2048);
                    goto label_5011c5;
                }
                case 1:
                {
                    int64_t r12_1 = arg2[2];
                    
                    if (r12_1 == 1)
                        goto label_501194;
                    
                    int64_t r12_2 = r12_1 - 1;
                    memset(&var_2048, 0, 0x2008);
                    
                    while (true)
                    {
                        uu_tail::chunks::BytesChunk::fill::h4a717c5d739984d3(&var_2068, &var_2048, 
                            arg1);
                        result = result_1;
                        
                        if (var_2068)
                            goto label_5010ba;
                        
                        if (result != 1)
                        {
                            result = nullptr;
                            goto label_5010ba;
                        }
                        
                        int64_t var_2058;
                        bool rax_16 = r12_2 != var_2058;
                        
                        if (r12_2 > var_2058)
                            rax_16 = true;
                        
                        if (rax_16 != 0xff)
                        {
                            if (rax_16)
                            {
                                int64_t rax_18;
                                uint64_t rdx_11;
                                rax_18 =
                                    uu_tail::chunks::BytesChunk::get_buffer_with::h6c35c4ec60c3e618(
                                    &var_2048, r12_2);
                                int64_t var_2080;
                                
                                if (rdx_11 >= var_2090 - var_2080)
                                {
                                    if (std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h9fe1bfb3f224b462(&var_2090, rax_18, rdx_11))
                                    {
                                        result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                        break;
                                    }
                                }
                                else
                                {
                                    int64_t var_2088;
                                    memcpy(var_2088 + var_2080, rax_18, rdx_11);
                                    int64_t var_2080_1 = rdx_11 + var_2080;
                                }
                            }
                            
                            int64_t rax_21;
                            int64_t rdx_12;
                            rax_21 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hd923691b4bd8cae6(arg1, &var_2090);
                            
                            if (!rax_21)
                                goto label_5011c5;
                            
                            result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            break;
                        }
                        
                        r12_2 -= var_2058;
                    }
                    
                    result = result_6;
                    goto label_5010ba;
                }
                case 2:
                {
                    label_501194:
                    int64_t rax_14;
                    int64_t rdx_8;
                    rax_14 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hd923691b4bd8cae6(arg1, &var_2090);
                    
                    if (!rax_14)
                        goto label_5011c5;
                    
                    result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    result = result_6;
                    goto label_5010ba;
                }
                case 3:
                {
                    goto label_5011c5;
                }
            }
            break;
        }
    }
}
