
  int64_t bat::preprocessor::strip_ansi::h73d81d147ad28998(int128_t* arg1, char* arg2, int64_t arg3)

{
    int64_t rax;
    int64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h2ab28548f23fa4ab(arg3, 1, 1);
    int64_t var_b8 = rax;
    int64_t var_b0 = rdx;
    int64_t result = 0;
    char* var_98 = arg2;
    int64_t var_90 = arg3;
    char* var_88 = arg2;
    void* var_80 = &arg2[arg3];
    int64_t var_78 = 0;
    int32_t var_68 = 0x110001;
    int64_t var_58;
    int64_t var_50;
    
    while (true)
    {
        int64_t var_60;
        _$LT$bat..vscreen..EscapeSequenceOffsetsIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h292aaa547b62c7bf(&var_60, &var_98);
        int64_t rax_2 = var_60;
        
        if (rax_2)
        {
            if (rax_2 == 5)
            {
                arg1[1] = result;
                *arg1 = var_b8;
                return result;
            }
        }
        else
        {
            void* rax_3;
            void* rdx_2;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(var_58, var_50, arg2, arg3);
            
            if (!rax_3)
                break;
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_b8, rax_3, rdx_2 + rax_3);
        }
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, var_58, var_50);
    /* no return */
}
