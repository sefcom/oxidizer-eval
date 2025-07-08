
  fn uu_wc::word_count_from_reader_specialized::ha1e711597c722da7(arg1: *mut i128, arg2: i64, arg3: i32) -> i64

{
    let mut s: i128;
    __builtin_memset(&s, 0, 0x28);
    let mut rax: *mut i32;
    let mut rdx: i8;
    rax = _$LT$std..io..stdio..StdinLock$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hb512afc42aa1d06a(arg2, arg3);
    let mut var_98: *mut i32 = rax;
    let var_88: i64 = 0;
    let var_80: i32 = 0;
    let var_7c: i8 = 0;
    let mut var_99: i8 = 0;
    let mut var_50: i64 = 0;
    
    loop
    {
        let mut var_48: i64;
        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::hb80609d2cbf610fc(&var_48, 
            &var_98);
        let rax_1: i64 = var_48;
        
        if rax_1 == 2
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$$RF$str$C$uu_wc..utf8..read..BufReadDecoderError$GT$$GT$$GT$::h5c5930e1896f3564(&var_48);
            let s_2: i128 = s;
            __builtin_memset(&arg1[1], 0, 0x18);
            *arg1 = s_2;
            *arg1.byte_offset(0x28) = 0;
            break;
        }
        
        let var_40: i64;
        let var_38: i64;
        
        if rax_1 == 0
        {
            uu_wc::process_chunk::h9cb4cf76d2be1553(&s, var_40, var_38, &var_50, &var_99);
        }
        else if var_40 == 0
        {
            if var_38 != 0
            {
                let s_1: i128 = s;
                __builtin_memset(&arg1[1], 0, 0x18);
                *arg1 = s_1;
                *arg1.byte_offset(0x28) = var_38;
                break;
            }
        }
        else
        {
            s += var_38;
        }
    }
    
    core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..stdio..StdinLock$GT$$GT$::he866ed42fb199a6f(var_98, rdx & 1)
}
