
  int64_t alacritty::renderer::text::atlas::Atlas::insert_inner::h1566285492361f39(int32_t* arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)

{
    int32_t rax = arg2[4];
    uint128_t var_48 = *(arg2 + 0xc);
    int32_t r13 = *arg2;
    int32_t rax_1 = arg2[3];
    int32_t r12 = *(arg3 + 0x2c);
    int32_t rbp = arg3[6];
    uint128_t zmm0 = *(arg3 + 0x2c);
    *alacritty::gl::storage::BindTexture::h1bc957198888829c.0(0xde1, r13);
    int64_t rdx = *arg3;
    int64_t rax_2 = 0x1908;
    char result = rdx;
    
    if (!rdx)
        rax_2 = 0x1907;
    
    int64_t var_80;
    void* r10;
    void* var_78;
    
    if (rdx || arg2[6] != 1)
    {
        var_80 = -0x8000000000000000;
        var_78 = &arg3[1];
        r10 = &arg3[2];
    }
    else
    {
        int64_t rbx_1 = arg3[3];
        int64_t rax_4;
        int64_t rdx_1;
        rdx_1 = HIGHQ(rbx_1 * -0x5555555555555555);
        rax_4 = LOWQ(rbx_1 * -0x5555555555555555);
        int64_t rax_5;
        void* rdx_2;
        rax_5 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(
            (rdx_1 * 2) & 0xfffffffffffffffc, 1, 1);
        int64_t var_c0 = rax_5;
        int64_t var_b0_1 = 0;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::h30b3f8b4dacb9967(&var_80, 
            arg3[2], rbx_1);
        void** const var_e0_1 = &data_c83bd8;
        int64_t var_d8_1 = 0;
        
        while (true)
        {
            char* rax_6;
            int64_t rdx_4;
            rax_6 = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h190b9675d345e3ac(&var_80);
            
            if (!rax_6)
                break;
            
            if (!rdx_4)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(var_d8_1, var_d8_1);
                /* no return */
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_c0, *rax_6);
            void** rax_12;
            
            if (rdx_4 == 1)
            {
                var_d8_1 = 1;
                rax_12 = &data_c83c08;
                label_86411d:
                var_e0_1 = rax_12;
                core::panicking::panic_bounds_check::h025cadc56a971af7(var_d8_1, var_d8_1);
                /* no return */
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_c0, rax_6[1]);
            
            if (rdx_4 < 3)
            {
                var_d8_1 = 2;
                rax_12 = &data_c83c38;
                goto label_86411d;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_c0, rax_6[2]);
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_c0, 0xff);
        }
        
        int64_t rax_7 = var_c0;
        var_80 = rax_7;
        var_78 = rdx_2;
        int64_t var_70_1 = var_b0_1;
        r10 = rdx_2 + 8;
        
        if (-(rax_7) != -0x8000000000000000)
            r10 = &var_78;
        
        rax_2 = 0x1908;
    }
    *alacritty::gl::storage::TexSubImage2D::h822f041644ccbaa4.0(0xde1, 0, rax_1, rax, r12, rbp, 
        rax_2, 0x1401, *r10);
    *alacritty::gl::storage::BindTexture::h1bc957198888829c.0(0xde1, 0);
    *arg4 = 0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$u8$GT$$C$base64..decode..DecodeError$GT$$GT$::h4be53208bd9d6391(&var_80);
    arg2[3] = rax_1 + r12;
    
    if (rbp > arg2[5])
        arg2[5] = rbp;
    
    uint128_t zmm0_1 = _mm_cvtepi32_ps(__shufps_xmmps_memps_immb(var_48, zmm0, 0x41));
    *arg1 = r13;
    arg1[7] = result;
    arg1[5] = _mm_shufflelo_epi16(*(arg3 + 0x34), 0xe8);
    arg1[6] = r12;
    *(arg1 + 0x1a) = rbp;
    uint128_t zmm1 = _mm_cvtepi32_ps(*(arg2 + 4));
    *(arg1 + 4) = _mm_div_ps(zmm0_1, _mm_shuffle_ps(zmm1, zmm1, 0x41));
    return result;
}
