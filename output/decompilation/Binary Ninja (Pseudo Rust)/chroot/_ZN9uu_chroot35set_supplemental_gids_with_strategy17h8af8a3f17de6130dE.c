
  fn uu_chroot::set_supplemental_gids_with_strategy::h8af8a3f17de6130d(arg1: *mut i32, arg2: i64, arg3: *mut c_void) -> i64

{
    if arg3 == 0
    {
        /* tailcall */
        return uu_chroot::handle_missing_groups::h3a01081f3f4106e6(arg1, arg2);
    }
    
    let mut var_70: i64 = 0;
    let var_68: *mut gid_t = 4;
    let var_60: u64 = 0;
    let rax: i64 = *arg3.byte_offset(0x10);
    let mut rax_5: i32;
    let mut rax_3: i64;
    
    if rax == 0
    {
        rax_3 = uu_chroot::set_supplemental_gids::h6e10f73cbbb1a6e6(4, 0);
        
        if rax_3 == 0
        {
            rax_5 = 0xe;
        }
        else
        {
            *arg1.byte_offset(8) = rax_3;
            rax_5 = 0xc;
        }
    }
    else
    {
        let r12_1: i64 = *arg3.byte_offset(8);
        let mut i: i64 = 0;
        
        do
        {
            let mut var_58: i32;
            uu_chroot::name_to_gid::hce66daf4744ca6c7(&var_58, *(r12_1 + i + 8), 
                *(r12_1 + i + 0x10));
            let rax_2: i32 = var_58;
            let var_54: i32;
            
            if rax_2 != 0xe
            {
                let var_40: i128;
                *arg1.byte_offset(0x18) = var_40;
                let var_50: i128;
                *arg1.byte_offset(8) = var_50;
                *arg1 = rax_2;
                arg1[1] = var_54;
                goto 'label_467923;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hd7306e6e4a779136(&var_70, var_54);
            i += 0x18;
        } while rax * 0x18 != i;
        
        rax_3 = uu_chroot::set_supplemental_gids::h6e10f73cbbb1a6e6(var_68, var_60);
        
        if rax_3 != 0
        {
            *arg1.byte_offset(8) = rax_3;
            rax_5 = 0xc;
        }
        else
        {
            rax_5 = 0xe;
        }
    }
    *arg1 = rax_5;
    'label_467923:
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::hd86db2e6974637b8(var_70, var_68)
}
