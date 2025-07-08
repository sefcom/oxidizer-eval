
  uint64_t uu_od::inputdecoder::MemoryDecoder::read_uint::h33796a139b376ce0(int64_t* arg1, int64_t arg2, int64_t arg3, uint64_t arg4 @ rbx)

{
    int64_t var_50 = arg3;
    
    if (arg3 - 1 <= 7)
        switch (arg3)
        {
            case 1:
            {
                void* rcx_3 = *arg1;
                int64_t rax = *(rcx_3 + 0x10);
                
                if (rax > arg2)
                    return *(*(rcx_3 + 8) + arg2);
                
                core::panicking::panic_bounds_check::h25a5330941572dd1(arg2, rax);
                /* no return */
            }
            case 2:
            {
                uint32_t rbx_3 = arg1[3];
                void* rcx_9 = *arg1;
                int64_t rax_10;
                int64_t rdx_7;
                rax_10 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(arg2, arg2 + 2, *(rcx_9 + 8), *(rcx_9 + 0x10));
                int16_t rax_11;
                
                if (!rbx_3 || rbx_3 != 1)
                    rax_11 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::hab4b8969433a088d(rax_10, rdx_7);
                else
                    rax_11 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h083cd14a218276be(rax_10, rdx_7);
                
                return rax_11;
                break;
            }
            case 4:
            {
                uint32_t rbx = arg1[3];
                void* rcx_4 = *arg1;
                int64_t rax_4;
                int64_t rdx_2;
                rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(arg2, arg2 + 4, *(rcx_4 + 8), *(rcx_4 + 0x10));
                
                if (rbx && rbx == 1)
                    return _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::habec7fb2f414f2e9(rax_4, rdx_2);
                
                return _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::hc43338f212540fbc(rax_4, rdx_2);
                break;
            }
            case 8:
            {
                uint32_t rbx_1 = arg1[3];
                void* rcx_6 = *arg1;
                int64_t rax_7;
                int64_t rdx_4;
                rax_7 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(arg2, arg2 + 8, *(rcx_6 + 8), *(rcx_6 + 0x10));
                
                if (rbx_1 && rbx_1 == 1)
                    /* tailcall */
                    return _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::hd7b11af3bfea982f(rax_7, rdx_4, arg4);
                
                /* tailcall */
                return _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::h313bb306d5e0a55e(rax_7, rdx_4, arg4);
            }
        }
    
    int64_t* var_48 = &var_50;
    uint64_t (* var_40)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    char const (** const var_38)[0x5f] = &data_543550;
    int64_t var_30 = 1;
    int64_t var_18 = 0;
    int64_t** var_28 = &var_48;
    int64_t var_20 = 1;
    core::panicking::panic_fmt::he12d0d7468628bb4(&var_38);
    /* no return */
}
