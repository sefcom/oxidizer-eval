
  fn uu_chroot::handle_missing_groups::h3a01081f3f4106e6(arg1: *mut i32, arg2: i64)

{
    if (arg2 & 1) == 0
    {
        *arg1 = 0xe;
        return;
    }
    
    let r14_1: u32 = arg2 >> 0x20;
    let mut var_28: i64;
    let rdi: *mut i64 = &var_28;
    let mut r14_2: *mut gid_t;
    let var_20: *mut gid_t;
    let var_18: u64;
    
    if (arg2 & 0x100) != 0
    {
        uu_chroot::supplemental_gids::hf985b44dc073fbb6(rdi, r14_1);
        r14_2 = var_20;
        let rax_2: i64 = uu_chroot::set_supplemental_gids::h6e10f73cbbb1a6e6(r14_2, var_18);
        
        if rax_2 == 0
        {
            *arg1 = 0xe;
        }
        else
        {
            *arg1.byte_offset(8) = rax_2;
            *arg1 = 0xc;
        }
    }
    else
    {
        uu_chroot::supplemental_gids::hf985b44dc073fbb6(rdi, r14_1);
        
        if var_18 == 0
        {
            *arg1 = 7;
            arg1[1] = r14_1;
            r14_2 = var_20;
        }
        else
        {
            r14_2 = var_20;
            let rax_1: i64 = uu_chroot::set_supplemental_gids::h6e10f73cbbb1a6e6(r14_2, var_18);
            
            if rax_1 == 0
            {
                *arg1 = 0xe;
            }
            else
            {
                *arg1 = 0xc;
                *arg1.byte_offset(8) = rax_1;
            }
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::hd86db2e6974637b8(var_28, r14_2);
}
