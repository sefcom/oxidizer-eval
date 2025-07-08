
  fn uu_od::inputdecoder::MemoryDecoder::read_float::hb631d528abcb6236(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_50: i64 = arg3;
    let mut result: i64;
    
    if arg3 == 2
    {
        let rbx_2: u32 = arg1[3];
        let rcx_5: *mut c_void = *arg1;
        let mut rax_4: i64;
        let mut rdx_6: i64;
        rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(arg2, arg2 + 2, *rcx_5.byte_offset(8), *rcx_5.byte_offset(0x10));
        let mut rax_5: i32;
        
        if rbx_2 == 0 || rbx_2 != 1
        {
            rax_5 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::hab4b8969433a088d(rax_4, rdx_6);
        }
        else
        {
            rax_5 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h083cd14a218276be(rax_4, rdx_6);
        }
        
        if std_detect::detect::cache::test::h15354216764ae092() == 0
        {
            /* tailcall */
            return half::binary16::arch::f16_to_f64_fallback::h99c57f7b07aa0fd1(rax_5);
        }
        
        let mut zmm0_1: i32;
        zmm0_1 = half::binary16::arch::x86::f16_to_f32_x86_f16c::hae4e4afa5bc8fbe3(rax_5);
    }
    else
    {
        if arg3 != 4
        {
            if arg3 == 8
            {
                let rcx: *mut c_void = *arg1;
                let rbx: i8 = arg1[3];
                let mut rax_1: i64;
                let mut rdx_1: i64;
                rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(arg2, arg2 + 8, *rcx.byte_offset(8), *rcx.byte_offset(0x10));
                /* tailcall */
                return uu_od::byteorder_io::ByteOrder::read_f64::hf4139851335640ab(rbx, rax_1, 
                    rdx_1);
            }
            
            let mut var_48: *mut i64 = &var_50;
            let var_40: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            let mut var_38: *mut *mut [i8; 0x5f] = &data_543550;
            let var_30: i64 = 1;
            let var_18: i64 = 0;
            let var_28: *mut *mut i64 = &var_48;
            let var_20: i64 = 1;
            core::panicking::panic_fmt::he12d0d7468628bb4(&var_38);
            /* no return */
        }
        
        let rcx_3: *mut c_void = *arg1;
        let rbx_1: i8 = arg1[3];
        let mut rdx_4: i64;
        result = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(arg2, arg2 + 4, *rcx_3.byte_offset(8), *rcx_3.byte_offset(0x10));
        uu_od::byteorder_io::ByteOrder::read_f32::hdad6667c13a77c60(rbx_1, result, rdx_4);
    }
    
    result
}
