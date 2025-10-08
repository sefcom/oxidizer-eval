
  fn uu_od::inputdecoder::MemoryDecoder::read_uint::h820c719160ea830f(arg1: *mut c_void, arg2: i8, arg3: i64, arg4: i64, arg5: u64 @ rbx) -> u64

{
    let mut var_50: i64 = arg4;
    
    if arg4 - 1 <= 7
    {
        match arg4
        {
            1 =>
            {
                let rsi: i64 = *arg1.byte_offset(0x10);
                
                if arg3 < rsi
                {
                    return *(*arg1.byte_offset(8)).byte_offset(arg3);
                }
                
                core::panicking::panic_bounds_check::h025cadc56a971af7(arg3, rsi);
                /* no return */
            }
            2 =>
            {
                let mut rax_7: i64;
                let mut rdx_4: i64;
                rax_7 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(arg3, arg3 + 2, *arg1.byte_offset(8), *arg1.byte_offset(0x10));
                
                if arg2 != 0 && arg2 == 1
                {
                    return _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h6f160655192c4847(rax_7, rdx_4);
                }
                
                return _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h373d52a990770211(rax_7, rdx_4);
            }
            4 =>
            {
                let mut rax_12: i64;
                let mut rdx_6: i64;
                rax_12 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(arg3, arg3 + 4, *arg1.byte_offset(8), *arg1.byte_offset(0x10));
                
                if arg2 != 0 && arg2 == 1
                {
                    return _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::heb7f0e5942a13c7e(rax_12, rdx_6);
                }
                
                return _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::ha761c22cf500ee99(rax_12, rdx_6);
            }
            8 =>
            {
                let mut rax_3: i64;
                let mut rdx_1: i64;
                rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(arg3, arg3 + 8, *arg1.byte_offset(8), *arg1.byte_offset(0x10));
                
                if arg2 != 0 && arg2 == 1
                {
                    /* tailcall */
                    return _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::h4e06a29913649185(rax_3, rdx_1, arg5);
                }
                
                /* tailcall */
                return _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::hcc551e0560558125(rax_3, rdx_1, arg5);
            }
        }
    }
    
    let mut var_48: *mut i64 = &var_50;
    let var_40: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    let mut var_38: *mut *mut [i8; 0x14] = &data_5022e0;
    let var_30: i64 = 1;
    let var_18: i64 = 0;
    let var_28: *mut *mut i64 = &var_48;
    let var_20: i64 = 1;
    core::panicking::panic_fmt::h96f341d36638c225(&var_38);
    /* no return */
}
