
  fn just::attribute_set::AttributeSet::ensure_valid_attributes::h6f0be17f12135348(arg1: *mut u64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: *mut i128, arg6: i64, arg7: i64) -> *mut i64

{
    let rax: i64 = *arg2;
    let rcx: i64 = arg2[1];
    let mut rdi: i64 = rax;
    let mut rdx: i64;
    rdx = rax != 0;
    
    if rax != 0
    {
        rdi = arg2[2];
    }
    
    let mut var_e0: i64 = rdx;
    let var_d8: i64 = 0;
    let var_d0: i64 = rax;
    let var_c8: i64 = rcx;
    let var_c0: i64 = rdx;
    let var_b8: i64 = 0;
    let var_b0: i64 = rax;
    let var_a8: i64 = rcx;
    let var_a0: i64 = rdi;
    let mut i: *mut i64 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0a90991eb32c0f01(&var_e0);
    
    if i != 0
    {
        let mut i_1: *mut i64 = i;
        
        do
        {
            let mut var_f9: i8 = just::attribute::Attribute::discriminant::habfb87751dacf735(*i_1);
            
            if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5a60ec6c7191de53(&var_f9, arg6, arg7) == 0
            {
                let mut rax_3: *mut c_void;
                let mut rcx_1: i64;
                let mut rdx_2: i64;
                let mut r8: i64;
                rax_3 = just::token::Token::lexeme::h66587cdf67f63270(arg5);
                let mut var_98: ();
                _$LT$just..attribute..Attribute$u20$as$u20$core..clone..Clone$GT$::clone::hf7be862012ab759c(&var_98, i_1, rdx_2, rcx_1, r8);
                let var_50_1: i64 = arg3;
                let var_48_1: i64 = arg4;
                let var_40_1: *mut c_void = rax_3;
                let var_38_1: i64 = rdx_2;
                return just::token::Token::error::h986494da066a4455(arg1, arg5, &var_98);
            }
            
            i = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0a90991eb32c0f01(&var_e0);
            i_1 = i;
        } while i != 0;
    }
    
    arg1[9] = 0x25;
    i
}
