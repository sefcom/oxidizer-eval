
  fn uu_od::prn_char::format_ascii_dump::h58e8947baefac050(arg1: *mut i128, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut var_48: i64 = 0;
    let var_40: i64 = 1;
    let result: i64 = 0;
    alloc::string::String::push::h0ede46164189e411(&var_48, 0x3e);
    
    if arg3 != 0
    {
        let mut r13_1: i64 = 0;
        
        do
        {
            let rax_1: u32 = *arg2.byte_offset(r13_1);
            
            if rax_1 - 0x20 >= 0x5f
            {
                alloc::string::String::push::h0ede46164189e411(&var_48, 0x2e);
            }
            else
            {
                let rax_2: u64 = rax_1 << 4;
                let rsi: i64 = *(rax_2 + &uu_od::prn_char::C_CHARS::hf9c44c07aa090c89);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6f45b21ab07ea0a9(&var_48, rsi, *(rax_2 + 0x503010) + rsi);
            }
            
            r13_1 += 1;
        } while arg3 != r13_1;
    }
    
    alloc::string::String::push::h0ede46164189e411(&var_48, 0x3c);
    arg1[1] = result;
    *arg1 = var_48;
    result
}
