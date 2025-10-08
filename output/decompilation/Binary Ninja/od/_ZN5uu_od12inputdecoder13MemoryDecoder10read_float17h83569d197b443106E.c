
  int64_t uu_od::inputdecoder::MemoryDecoder::read_float::h83569d197b443106(void* arg1, char arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_50 = arg4;
    
    if (arg4 == 2)
    {
        int64_t rax_5;
        int64_t rdx_6;
        rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(arg3, arg3 + 2, *(arg1 + 8), *(arg1 + 0x10));
        int32_t rax_6;
        
        if (!arg2 || arg2 != 1)
            rax_6 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h373d52a990770211(rax_5, rdx_6);
        else
            rax_6 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h6f160655192c4847(rax_5, rdx_6);
        
        char rax_7;
        int32_t zmm0_2[0x4];
        rax_7 = std_detect::detect::cache::test::h42d452cfc9d2956f();
        
        if (!rax_7)
            /* tailcall */
            return half::binary16::arch::f16_to_f64_fallback::h3fc5d8a950fdbd03(rax_6);
        
        half::binary16::arch::x86::f16_to_f32_x86_f16c::hfa00155f589602d7(rax_6, zmm0_2);
        return rax_7;
    }
    
    if (arg4 == 4)
    {
        int64_t rax_3;
        int64_t rdx_4;
        rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(arg3, arg3 + 4, *(arg1 + 8), *(arg1 + 0x10));
        uu_od::byteorder_io::ByteOrder::read_f32::h11afc518b6af4755(arg2, rax_3, rdx_4);
        return rax_3;
    }
    
    if (arg4 == 8)
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(arg3, arg3 + 8, *(arg1 + 8), *(arg1 + 0x10));
        /* tailcall */
        return uu_od::byteorder_io::ByteOrder::read_f64::hdb659793fd52688b(arg2, rax_1, rdx_1);
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
