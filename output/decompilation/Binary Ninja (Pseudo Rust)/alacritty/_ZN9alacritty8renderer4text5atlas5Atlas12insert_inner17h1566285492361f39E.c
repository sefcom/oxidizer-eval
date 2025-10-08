
  fn alacritty::renderer::text::atlas::Atlas::insert_inner::h1566285492361f39(arg1: *mut i32, arg2: *mut i32, arg3: *mut i64, arg4: *mut i32) -> i64

{
    let rax: i32 = arg2[4];
    let var_48: u128 = *arg2.byte_offset(0xc);
    let r13: i32 = *arg2;
    let rax_1: i32 = arg2[3];
    let r12: i32 = *arg3.byte_offset(0x2c);
    let rbp: i32 = arg3[6];
    let zmm0: u128 = *arg3.byte_offset(0x2c);
    *alacritty::gl::storage::BindTexture::h1bc957198888829c.0(0xde1, r13);
    let rdx: i64 = *arg3;
    let mut rax_2: i64 = 0x1908;
    let result: i8 = rdx;
    
    if rdx == 0
    {
        rax_2 = 0x1907;
    }
    
    let mut var_80: i64;
    let mut r10: *mut c_void;
    let mut var_78: *mut c_void;
    
    if rdx != 0 || arg2[6] != 1
    {
        var_80 = -0x8000000000000000;
        var_78 = &arg3[1];
        r10 = &arg3[2];
    }
    else
    {
        let rbx_1: i64 = arg3[3];
        let mut rax_4: i64;
        let mut rdx_1: i64;
        rdx_1 = HIGHQ(rbx_1 * -0x5555555555555555);
        rax_4 = LOWQ(rbx_1 * -0x5555555555555555);
        let mut rax_5: i64;
        let mut rdx_2: *mut c_void;
        rax_5 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(
            (rdx_1 * 2) & 0xfffffffffffffffc, 1, 1);
        let mut var_c0: i64 = rax_5;
        let var_b0_1: i64 = 0;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::h30b3f8b4dacb9967(&var_80, 
            arg3[2], rbx_1);
        let mut var_e0_1: *mut *mut c_void = &data_c83bd8;
        let mut var_d8_1: i64 = 0;
        
        loop
        {
            let mut rax_6: *mut i8;
            let mut rdx_4: i64;
            rax_6 = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h190b9675d345e3ac(&var_80);
            
            if rax_6 == 0
            {
                break;
            }
            
            if rdx_4 == 0
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(var_d8_1, var_d8_1);
                /* no return */
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_c0, *rax_6);
            let mut rax_12: *mut *mut c_void;
            
            if rdx_4 == 1
            {
                var_d8_1 = 1;
                rax_12 = &data_c83c08;
                'label_86411d:
                var_e0_1 = rax_12;
                core::panicking::panic_bounds_check::h025cadc56a971af7(var_d8_1, var_d8_1);
                /* no return */
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_c0, rax_6[1]);
            
            if rdx_4 < 3
            {
                var_d8_1 = 2;
                rax_12 = &data_c83c38;
                goto 'label_86411d;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_c0, rax_6[2]);
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_c0, 0xff);
        }
        
        let rax_7: i64 = var_c0;
        var_80 = rax_7;
        var_78 = rdx_2;
        let var_70_1: i64 = var_b0_1;
        r10 = rdx_2.byte_offset(8);
        
        if -(rax_7) != -0x8000000000000000
        {
            r10 = &var_78;
        }
        
        rax_2 = 0x1908;
    }
    *alacritty::gl::storage::TexSubImage2D::h822f041644ccbaa4.0(0xde1, 0, rax_1, rax, r12, rbp, 
        rax_2, 0x1401, *r10);
    *alacritty::gl::storage::BindTexture::h1bc957198888829c.0(0xde1, 0);
    *arg4 = 0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$u8$GT$$C$base64..decode..DecodeError$GT$$GT$::h4be53208bd9d6391(&var_80);
    arg2[3] = rax_1 + r12;
    
    if rbp > arg2[5]
    {
        arg2[5] = rbp;
    }
    
    let zmm0_1: u128 = _mm_cvtepi32_ps(__shufps_xmmps_memps_immb(var_48, zmm0, 0x41));
    *arg1 = r13;
    arg1[7] = result;
    arg1[5] = _mm_shufflelo_epi16(*arg3.byte_offset(0x34), 0xe8);
    arg1[6] = r12;
    *arg1.byte_offset(0x1a) = rbp;
    let zmm1: u128 = _mm_cvtepi32_ps(*arg2.byte_offset(4));
    *arg1.byte_offset(4) = _mm_div_ps(zmm0_1, _mm_shuffle_ps(zmm1, zmm1, 0x41));
    result
}
