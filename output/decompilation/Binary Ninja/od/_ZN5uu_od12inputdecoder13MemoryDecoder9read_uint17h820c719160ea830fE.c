
  uint64_t uu_od::inputdecoder::MemoryDecoder::read_uint::h820c719160ea830f(void* arg1, char arg2, int64_t arg3, int64_t arg4, uint64_t arg5 @ rbx)

{
    int64_t var_50 = arg4;
    
    if (arg4 - 1 <= 7)
        switch (arg4)
        {
            case 1:
            {
                int64_t rsi = *(arg1 + 0x10);
                
                if (arg3 < rsi)
                    return *(*(arg1 + 8) + arg3);
                
                core::panicking::panic_bounds_check::h025cadc56a971af7(arg3, rsi);
                /* no return */
            }
            case 2:
            {
                int64_t rax_7;
                int64_t rdx_4;
                rax_7 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(arg3, arg3 + 2, *(arg1 + 8), *(arg1 + 0x10));
                
                if (arg2 && arg2 == 1)
                    return _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h6f160655192c4847(rax_7, rdx_4);
                
                return _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h373d52a990770211(rax_7, rdx_4);
                break;
            }
            case 4:
            {
                int64_t rax_12;
                int64_t rdx_6;
                rax_12 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(arg3, arg3 + 4, *(arg1 + 8), *(arg1 + 0x10));
                
                if (arg2 && arg2 == 1)
                    return _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::heb7f0e5942a13c7e(rax_12, rdx_6);
                
                return _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::ha761c22cf500ee99(rax_12, rdx_6);
                break;
            }
            case 8:
            {
                int64_t rax_3;
                int64_t rdx_1;
                rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(arg3, arg3 + 8, *(arg1 + 8), *(arg1 + 0x10));
                
                if (arg2 && arg2 == 1)
                    /* tailcall */
                    return _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::h4e06a29913649185(rax_3, rdx_1, arg5);
                
                /* tailcall */
                return _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::hcc551e0560558125(rax_3, rdx_1, arg5);
            }
        }
    
    int64_t* var_48 = &var_50;
    uint64_t (* var_40)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    char const (** const var_38)[0x14] = &data_5022e0;
    int64_t var_30 = 1;
    int64_t var_18 = 0;
    int64_t** var_28 = &var_48;
    int64_t var_20 = 1;
    core::panicking::panic_fmt::h96f341d36638c225(&var_38);
    /* no return */
}
