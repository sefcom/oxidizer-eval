
  fn uu_wc::word_count_from_reader_specialized::h025918a8241eeb08(arg1: *mut i128, arg2: i64, arg3: i32) -> i64

{
    let mut s: i128;
    __builtin_memset(&s, 0, 0x28);
    let mut rax: *mut i32;
    let mut rdx: i8;
    rax = _$LT$std..io..stdio..StdinLock$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hb512afc42aa1d06a(arg2, arg3);
    let mut var_88: *mut i32 = rax;
    let var_78: i64 = 0;
    let var_70: i32 = 0;
    let var_6c: i8 = 0;
    let mut var_89: i8 = 0;
    
    loop
    {
        let mut var_40: i64;
        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::hb80609d2cbf610fc(&var_40, 
            &var_88);
        let rax_1: i64 = var_40;
        
        if rax_1 == 2
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$$RF$str$C$uu_wc..utf8..read..BufReadDecoderError$GT$$GT$$GT$::h5c5930e1896f3564(&var_40);
            let s_2: i128 = s;
            __builtin_memset(&arg1[1], 0, 0x18);
            *arg1 = s_2;
            *arg1.byte_offset(0x28) = 0;
            break;
        }
        
        let var_38: i64;
        let var_30: i64;
        
        if rax_1 == 0
        {
            uu_wc::process_chunk::hbe9030a1f45cb8a9(&s, var_38, var_30, &var_89);
        }
        else if var_38 == 0
        {
            if var_30 != 0
            {
                let s_1: i128 = s;
                __builtin_memset(&arg1[1], 0, 0x18);
                *arg1 = s_1;
                *arg1.byte_offset(0x28) = var_30;
                break;
            }
        }
        else
        {
            s += var_30;
        }
    }
    
    core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..stdio..StdinLock$GT$$GT$::he866ed42fb199a6f(var_88, rdx & 1)
}
