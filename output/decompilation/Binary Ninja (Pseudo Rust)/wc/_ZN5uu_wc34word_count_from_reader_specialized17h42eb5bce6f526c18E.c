
  fn uu_wc::word_count_from_reader_specialized::h42eb5bce6f526c18(arg1: *mut i128) -> i64

{
    let mut s: i128;
    __builtin_memset(&s, 0, 0x28);
    let mut var_68: ();
    let rsi: i32;
    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::h59317c57c6f57ac1(
        &var_68, rsi);
    let var_38: i64 = 0;
    let var_30: i32 = 0;
    let var_2c: i8 = 0;
    let mut var_88: i64 = 0;
    
    loop
    {
        let mut var_80: i64;
        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h89bdfec0735647a2(&var_80, 
            &var_68);
        let rax_1: i64 = var_80;
        
        if rax_1 == 2
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$$RF$str$C$uu_wc..utf8..read..BufReadDecoderError$GT$$GT$$GT$::h5c5930e1896f3564(&var_80);
            let s_2: i128 = s;
            __builtin_memset(&arg1[1], 0, 0x18);
            *arg1 = s_2;
            *arg1.byte_offset(0x28) = 0;
            break;
        }
        
        let var_78: i64;
        let var_70: i64;
        
        if rax_1 == 0
        {
            uu_wc::process_chunk::h568cd2adea1b4e66(&s, var_78, var_70, &var_88);
        }
        else if var_78 == 0
        {
            if var_70 != 0
            {
                let s_1: i128 = s;
                __builtin_memset(&arg1[1], 0, 0x18);
                *arg1 = s_1;
                *arg1.byte_offset(0x28) = var_70;
                break;
            }
        }
        else
        {
            s += var_70;
        }
    }
    
    core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hcb0d0ffcfcbb6cb6(&var_68)
}
