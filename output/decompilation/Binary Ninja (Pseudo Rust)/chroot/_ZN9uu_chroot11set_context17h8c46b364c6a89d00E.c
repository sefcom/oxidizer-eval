
  fn uu_chroot::set_context::h8c46b364c6a89d00(arg1: *mut c_void) -> u64

{
    let result: u64 = uu_chroot::enter_chroot::h98c30b2b91faf011(*arg1.byte_offset(8), 
        *arg1.byte_offset(0x10), *arg1.byte_offset(0x60));
    
    if result != 0
    {
        return result;
    }
    
    let rax: i64 = *arg1.byte_offset(0x30);
    let mut var_70: i32;
    let mut var_6c: i32;
    let mut var_68: i128;
    let mut var_48: i32;
    let var_44: gid_t;
    let mut var_34: i128;
    let mut rax_1: i32;
    let mut zmm0_1: i128;
    let mut zmm1_1: i128;
    
    if rax != -0x7ffffffffffffffd
    {
        let rax_2: i64 = rax ^ 0x8000000000000000;
        let mut rcx_1: i64 = 3;
        
        if rax_2 < 3
        {
            rcx_1 = rax_2;
        }
        
        let var_4c: i32;
        let mut var_40: i128;
        let mut rax_3: i32;
        let mut rax_6: i64;
        let mut rax_7: i32;
        let mut rbp_1: gid_t;
        let mut r14_1: u64;
        
        match rcx_1
        {
            0 =>
            {
                goto 'label_46797e;
            }
            1 =>
            {
                uu_chroot::name_to_uid::h4c06bc9aac5f3697(&var_48, *arg1.byte_offset(0x40), 
                    *arg1.byte_offset(0x48));
                rax_3 = var_48;
                r14_1 = var_44;
                
                if rax_3 != 0xe
                {
                    'label_467c3c:
                    let var_58_1: i128 = var_34;
                    let var_68_1: i128 = var_40;
                    var_70 = rax_3;
                    let var_6c_1: i32 = r14_1;
                    return alloc::boxed::Box$LT$T$GT$::new::h6d25de4dbe6fde20(&var_70);
                }
                
                let mut rdx_3: *mut c_void = nullptr;
                
                if *arg1.byte_offset(0x18) != -0x8000000000000000
                {
                    rdx_3 = arg1.byte_offset(0x18);
                }
                
                uu_chroot::set_supplemental_gids_with_strategy::h8af8a3f17de6130d(&var_48, 
                    (r14_1 << 0x20) + 1, rdx_3);
                rax_1 = var_48;
                
                if rax_1 != 0xe
                {
                    goto 'label_467c14;
                }
                
                let rbx_1: *mut c_void = arg1.byte_offset(0x38);
                let rax_5: i64 = uu_chroot::set_gid::h96b8c03f678d01e3(r14_1);
                
                if rax_5 != 0
                {
                    uu_chroot::set_context::_$u7b$$u7b$closure$u7d$$u7d$::h80dafbbd71a02e95(
                        &var_70, rbx_1, rax_5);
                    rax_1 = var_70;
                    var_48 = var_6c;
                    var_40 = var_68;
                    *var_34[0xc] = var_4c;
                }
                
                if rax_5 != 0 && rax_1 != 0xe
                {
                    'label_467c00:
                    let var_4c_1: i32 = *var_34[0xc];
                    zmm0_1 = var_48;
                    zmm1_1 = var_40;
                    goto 'label_467c22;
                }
                
                rax_6 = uu_chroot::set_uid::haa9800f67f007aa3(r14_1);
                
                if rax_6 != 0
                {
                    uu_chroot::set_context::_$u7b$$u7b$closure$u7d$$u7d$::h5b3caec019f0d248(
                        &var_70, rbx_1, rax_6);
                    goto 'label_467bd3;
                }
            }
            2 =>
            {
                uu_chroot::name_to_gid::hce66daf4744ca6c7(&var_48, *arg1.byte_offset(0x40), 
                    *arg1.byte_offset(0x48));
                rax_7 = var_48;
                rbp_1 = var_44;
                
                if rax_7 != 0xe
                {
                    'label_467c5b:
                    let var_58_2: i128 = var_34;
                    let var_68_2: i128 = var_40;
                    var_70 = rax_7;
                    let var_6c_2: gid_t = rbp_1;
                    return alloc::boxed::Box$LT$T$GT$::new::h6d25de4dbe6fde20(&var_70);
                }
                
                let mut rdx_6: *mut c_void = arg1.byte_offset(0x18);
                
                if *arg1.byte_offset(0x18) == -0x8000000000000000
                {
                    rdx_6 = nullptr;
                }
                
                uu_chroot::set_supplemental_gids_with_strategy::h8af8a3f17de6130d(&var_48, 0, 
                    rdx_6);
                rax_1 = var_48;
                
                if rax_1 != 0xe
                {
                    goto 'label_467c14;
                }
                
                let rax_8: i64 = uu_chroot::set_gid::h96b8c03f678d01e3(rbp_1);
                
                if rax_8 != 0
                {
                    uu_chroot::set_context::_$u7b$$u7b$closure$u7d$$u7d$::h80dafbbd71a02e95(
                        &var_70, arg1.byte_offset(0x38), rax_8);
                    'label_467bd3:
                    rax_1 = var_70;
                    var_48 = var_6c;
                    var_40 = var_68;
                    *var_34[0xc] = var_4c;
                    
                    if rax_1 != 0xe
                    {
                        goto 'label_467c00;
                    }
                }
            }
            3 =>
            {
                uu_chroot::name_to_uid::h4c06bc9aac5f3697(&var_48, *arg1.byte_offset(0x38), 
                    *arg1.byte_offset(0x40));
                rax_3 = var_48;
                r14_1 = var_44;
                
                if rax_3 != 0xe
                {
                    goto 'label_467c3c;
                }
                
                uu_chroot::name_to_gid::hce66daf4744ca6c7(&var_48, *arg1.byte_offset(0x50), 
                    *arg1.byte_offset(0x58));
                rax_7 = var_48;
                rbp_1 = var_44;
                
                if rax_7 != 0xe
                {
                    goto 'label_467c5b;
                }
                
                let mut rdx_10: *mut c_void = nullptr;
                
                if *arg1.byte_offset(0x18) != -0x8000000000000000
                {
                    rdx_10 = arg1.byte_offset(0x18);
                }
                
                uu_chroot::set_supplemental_gids_with_strategy::h8af8a3f17de6130d(&var_48, 
                    r14_1 << 0x20 | 0x101, rdx_10);
                rax_1 = var_48;
                
                if rax_1 != 0xe
                {
                    goto 'label_467c14;
                }
                
                let rax_10: i64 = uu_chroot::set_gid::h96b8c03f678d01e3(rbp_1);
                
                if rax_10 != 0
                {
                    uu_chroot::set_context::_$u7b$$u7b$closure$u7d$$u7d$::h80dafbbd71a02e95(
                        &var_70, arg1.byte_offset(0x48), rax_10);
                    rax_1 = var_70;
                    var_48 = var_6c;
                    var_40 = var_68;
                    *var_34[0xc] = var_4c;
                }
                
                if rax_10 != 0 && rax_1 != 0xe
                {
                    goto 'label_467c00;
                }
                
                rax_6 = uu_chroot::set_uid::haa9800f67f007aa3(r14_1);
                
                if rax_6 != 0
                {
                    uu_chroot::set_context::_$u7b$$u7b$closure$u7d$$u7d$::h5b3caec019f0d248(
                        &var_70, arg1.byte_offset(0x30), rax_6);
                    goto 'label_467bd3;
                }
            }
        }
    }
    else
    {
        'label_46797e:
        let mut rdx_1: *mut c_void = arg1.byte_offset(0x18);
        
        if *arg1.byte_offset(0x18) == -0x8000000000000000
        {
            rdx_1 = nullptr;
        }
        
        uu_chroot::set_supplemental_gids_with_strategy::h8af8a3f17de6130d(&var_48, 0, rdx_1);
        rax_1 = var_48;
        
        if rax_1 != 0xe
        {
            'label_467c14:
            let var_24: i32;
            let var_4c_2: i32 = var_24;
            zmm0_1 = var_44;
            zmm1_1 = var_34;
            'label_467c22:
            var_68 = zmm1_1;
            var_6c = zmm0_1;
            var_70 = rax_1;
            return alloc::boxed::Box$LT$T$GT$::new::h6d25de4dbe6fde20(&var_70);
        }
    }
    0
}
