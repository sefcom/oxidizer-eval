
  uint64_t uu_cut::cut_fields_newline_char_delim::h70d6109e474d67d6(int64_t arg1, void** arg2, void* arg3, int128_t* arg4, int64_t arg5, char arg6, int64_t arg7, int64_t arg8)

{
    int128_t* r12 = arg4;
    char var_68;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h435dadcf49ddd50a(&var_68, 
        arg1);
    char var_38 = arg6;
    void var_80;
    core::iter::traits::iterator::Iterator::collect::h5e3bf8182d4c8696(&var_80, &var_68);
    uint64_t result;
    
    if (!arg5)
    {
        label_469491:
        var_68 = arg6;
        
        if (!std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6c830cee343393ea(arg2, arg3, &var_68, 1))
            result = 0;
        else
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    }
    else
    {
        char r13_1 = 0;
        uint64_t result_1;
        
        while (true)
        {
            var_68 = *r12;
            char var_58_1 = 0;
            char rax_5;
            int64_t rdx;
            rax_5 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h72e3f57276e63282(&var_68);
            int64_t var_70;
            
            if (rax_5 & 1 && rdx - 1 < var_70)
            {
                int64_t i;
                
                if (r13_1 & 1)
                    i = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6c830cee343393ea(arg2, arg3, arg7, arg8);
                
                if (!(r13_1 & 1) || !i)
                {
                    int64_t var_78;
                    void* rax_8 = var_78 + (rdx - 1) * 0x18;
                    void* rax_12;
                    
                    for (i = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6c830cee343393ea(arg2, arg3, *(rax_8 + 8), *(rax_8 + 0x10)); !i; i = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6c830cee343393ea(arg2, arg3, 
                        *(rax_12 + 8), *(rax_12 + 0x10)))
                    {
                        char rax_9;
                        int64_t rdx_3;
                        rax_9 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h72e3f57276e63282(&var_68);
                        r13_1 = 1;
                        
                        if (!(rax_9 & 1))
                            goto label_469380;
                        
                        if (rdx_3 - 1 >= var_70)
                            goto label_469380;
                        
                        if (std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6c830cee343393ea(arg2, arg3, arg7, arg8))
                            break;
                        
                        rax_12 = var_78 + (rdx_3 - 1) * 0x18;
                    }
                }
                
                result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                break;
            }
            
            label_469380:
            r12 = &r12[1];
            
            if (r12 == &r12[arg5])
                goto label_469491;
        }
        
        result = result_1;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$::h0974e020fc7d8766(&var_80);
    return result;
}
