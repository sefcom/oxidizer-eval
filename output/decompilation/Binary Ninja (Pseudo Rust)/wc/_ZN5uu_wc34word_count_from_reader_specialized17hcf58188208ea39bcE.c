
  fn uu_wc::word_count_from_reader_specialized::hcf58188208ea39bc(arg1: *mut i128) -> i64

{
    let mut s: i128;
    __builtin_memset(&s, 0, 0x28);
    let mut var_70: ();
    let rsi: i32;
    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::h59317c57c6f57ac1(
        &var_70, rsi);
    let var_40: i64 = 0;
    let var_38: i32 = 0;
    let var_34: i8 = 0;
    let mut var_b9: i8 = 0;
    let mut var_90: i64 = 0;
    
    loop
    {
        let mut var_88: i64;
        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h89bdfec0735647a2(&var_88, 
            &var_70);
        let rax_1: i64 = var_88;
        
        if rax_1 == 2
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$$RF$str$C$uu_wc..utf8..read..BufReadDecoderError$GT$$GT$$GT$::h5c5930e1896f3564(&var_88);
            let s_2: i128 = s;
            __builtin_memset(&arg1[1], 0, 0x18);
            *arg1 = s_2;
            *arg1.byte_offset(0x28) = 0;
            break;
        }
        
        let var_80: i64;
        let var_78: i64;
        
        if rax_1 == 0
        {
            uu_wc::process_chunk::h5a18b758b2ccb002(&s, var_80, var_78, &var_90, &var_b9);
        }
        else if var_80 == 0
        {
            if var_78 != 0
            {
                let s_1: i128 = s;
                __builtin_memset(&arg1[1], 0, 0x18);
                *arg1 = s_1;
                *arg1.byte_offset(0x28) = var_78;
                break;
            }
        }
        else
        {
            s += var_78;
        }
    }
    
    core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hcb0d0ffcfcbb6cb6(&var_70)
}
