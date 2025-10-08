
  int64_t* just::attribute_set::AttributeSet::ensure_valid_attributes::h6f0be17f12135348(uint64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int128_t* arg5, int64_t arg6, int64_t arg7)

{
    int64_t rax = *arg2;
    int64_t rcx = arg2[1];
    int64_t rdi = rax;
    int64_t rdx;
    rdx = rax;
    
    if (rax)
        rdi = arg2[2];
    
    int64_t var_e0 = rdx;
    int64_t var_d8 = 0;
    int64_t var_d0 = rax;
    int64_t var_c8 = rcx;
    int64_t var_c0 = rdx;
    int64_t var_b8 = 0;
    int64_t var_b0 = rax;
    int64_t var_a8 = rcx;
    int64_t var_a0 = rdi;
    int64_t* i = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0a90991eb32c0f01(&var_e0);
    
    if (i)
    {
        int64_t* i_1 = i;
        
        do
        {
            char var_f9 = just::attribute::Attribute::discriminant::habfb87751dacf735(*i_1);
            
            if (!_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5a60ec6c7191de53(&var_f9, arg6, arg7))
            {
                void* rax_3;
                int64_t rcx_1;
                int64_t rdx_2;
                int64_t r8;
                rax_3 = just::token::Token::lexeme::h66587cdf67f63270(arg5);
                void var_98;
                _$LT$just..attribute..Attribute$u20$as$u20$core..clone..Clone$GT$::clone::hf7be862012ab759c(&var_98, i_1, rdx_2, rcx_1, r8);
                int64_t var_50_1 = arg3;
                int64_t var_48_1 = arg4;
                void* var_40_1 = rax_3;
                int64_t var_38_1 = rdx_2;
                return just::token::Token::error::h986494da066a4455(arg1, arg5, &var_98);
            }
            
            i = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0a90991eb32c0f01(&var_e0);
            i_1 = i;
        } while (i);
    }
    
    arg1[9] = 0x25;
    return i;
}
