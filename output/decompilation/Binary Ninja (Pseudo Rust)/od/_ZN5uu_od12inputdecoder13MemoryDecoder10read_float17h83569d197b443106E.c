
  fn uu_od::inputdecoder::MemoryDecoder::read_float::h83569d197b443106(arg1: *mut c_void, arg2: i8, arg3: i64, arg4: i64) -> i64

{
    let mut var_50: i64 = arg4;
    
    if arg4 == 2
    {
        let mut rax_5: i64;
        let mut rdx_6: i64;
        rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(arg3, arg3 + 2, *arg1.byte_offset(8), *arg1.byte_offset(0x10));
        let mut rax_6: i32;
        
        if arg2 == 0 || arg2 != 1
        {
            rax_6 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h373d52a990770211(rax_5, rdx_6);
        }
        else
        {
            rax_6 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h6f160655192c4847(rax_5, rdx_6);
        }
        
        let mut rax_7: i8;
        let mut zmm0_2: [i32; 0x4];
        rax_7 = std_detect::detect::cache::test::h42d452cfc9d2956f();
        
        if rax_7 == 0
        {
            /* tailcall */
            return half::binary16::arch::f16_to_f64_fallback::h3fc5d8a950fdbd03(rax_6);
        }
        
        half::binary16::arch::x86::f16_to_f32_x86_f16c::hfa00155f589602d7(rax_6, zmm0_2);
        return rax_7;
    }
    
    if arg4 == 4
    {
        let mut rax_3: i64;
        let mut rdx_4: i64;
        rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(arg3, arg3 + 4, *arg1.byte_offset(8), *arg1.byte_offset(0x10));
        uu_od::byteorder_io::ByteOrder::read_f32::h11afc518b6af4755(arg2, rax_3, rdx_4);
        return rax_3;
    }
    
    if arg4 == 8
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(arg3, arg3 + 8, *arg1.byte_offset(8), *arg1.byte_offset(0x10));
        /* tailcall */
        return uu_od::byteorder_io::ByteOrder::read_f64::hdb659793fd52688b(arg2, rax_1, rdx_1);
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
