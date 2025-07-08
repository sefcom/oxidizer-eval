
  fn uu_od::inputdecoder::MemoryDecoder::read_uint::h33796a139b376ce0(arg1: *mut i64, arg2: i64, arg3: i64, arg4: u64 @ rbx) -> u64

{
    let mut var_50: i64 = arg3;
    
    if arg3 - 1 <= 7
    {
        match arg3
        {
            1 =>
            {
                let rcx_3: *mut c_void = *arg1;
                let rax: i64 = *rcx_3.byte_offset(0x10);
                
                if rax > arg2
                {
                    return *(*rcx_3.byte_offset(8)).byte_offset(arg2);
                }
                
                core::panicking::panic_bounds_check::h25a5330941572dd1(arg2, rax);
                /* no return */
            }
            2 =>
            {
                let rbx_3: u32 = arg1[3];
                let rcx_9: *mut c_void = *arg1;
                let mut rax_10: i64;
                let mut rdx_7: i64;
                rax_10 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(arg2, arg2 + 2, *rcx_9.byte_offset(8), *rcx_9.byte_offset(0x10));
                let mut rax_11: i16;
                
                if rbx_3 == 0 || rbx_3 != 1
                {
                    rax_11 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::hab4b8969433a088d(rax_10, rdx_7);
                }
                else
                {
                    rax_11 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h083cd14a218276be(rax_10, rdx_7);
                }
                
                return rax_11;
            }
            4 =>
            {
                let rbx: u32 = arg1[3];
                let rcx_4: *mut c_void = *arg1;
                let mut rax_4: i64;
                let mut rdx_2: i64;
                rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(arg2, arg2 + 4, *rcx_4.byte_offset(8), *rcx_4.byte_offset(0x10));
                
                if rbx != 0 && rbx == 1
                {
                    return _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::habec7fb2f414f2e9(rax_4, rdx_2);
                }
                
                return _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::hc43338f212540fbc(rax_4, rdx_2);
            }
            8 =>
            {
                let rbx_1: u32 = arg1[3];
                let rcx_6: *mut c_void = *arg1;
                let mut rax_7: i64;
                let mut rdx_4: i64;
                rax_7 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(arg2, arg2 + 8, *rcx_6.byte_offset(8), *rcx_6.byte_offset(0x10));
                
                if rbx_1 != 0 && rbx_1 == 1
                {
                    /* tailcall */
                    return _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::hd7b11af3bfea982f(rax_7, rdx_4, arg4);
                }
                
                /* tailcall */
                return _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::h313bb306d5e0a55e(rax_7, rdx_4, arg4);
            }
        }
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
