
  int64_t uu_od::inputdecoder::MemoryDecoder::read_float::hb631d528abcb6236(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_50 = arg3;
    int64_t result;
    
    if (arg3 == 2)
    {
        uint32_t rbx_2 = arg1[3];
        void* rcx_5 = *arg1;
        int64_t rax_4;
        int64_t rdx_6;
        rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(arg2, arg2 + 2, *(rcx_5 + 8), *(rcx_5 + 0x10));
        int32_t rax_5;
        
        if (!rbx_2 || rbx_2 != 1)
            rax_5 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::hab4b8969433a088d(rax_4, rdx_6);
        else
            rax_5 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h083cd14a218276be(rax_4, rdx_6);
        
        if (!std_detect::detect::cache::test::h15354216764ae092())
            /* tailcall */
            return half::binary16::arch::f16_to_f64_fallback::h99c57f7b07aa0fd1(rax_5);
        
        int32_t zmm0_1;
        zmm0_1 = half::binary16::arch::x86::f16_to_f32_x86_f16c::hae4e4afa5bc8fbe3(rax_5);
    }
    else
    {
        if (arg3 != 4)
        {
            if (arg3 == 8)
            {
                void* rcx = *arg1;
                char rbx = arg1[3];
                int64_t rax_1;
                int64_t rdx_1;
                rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(arg2, arg2 + 8, *(rcx + 8), *(rcx + 0x10));
                /* tailcall */
                return uu_od::byteorder_io::ByteOrder::read_f64::hf4139851335640ab(rbx, rax_1, 
                    rdx_1);
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
        
        void* rcx_3 = *arg1;
        char rbx_1 = arg1[3];
        int64_t rdx_4;
        result = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(arg2, arg2 + 4, *(rcx_3 + 8), *(rcx_3 + 0x10));
        uu_od::byteorder_io::ByteOrder::read_f32::hdad6667c13a77c60(rbx_1, result, rdx_4);
    }
    
    return result;
}
