
  fn uu_test::path::hed70fa791e261736(arg1: i64, arg2: i64, arg3: i8) -> u64

{
    let mut var_170: i32;
    let rdi: *mut i32 = &var_170;
    let mut rbx: u64;
    
    if arg3 != 8
    {
        std::fs::metadata::ha4b6f518b61475e4(rdi, arg1);
        
        if var_170 != 2
        {
            'label_459893:
            let mut var_c0: ();
            memcpy(&var_c0, &var_170, 0xb0);
            let var_88: i32;
            rbx = var_88;
            let mut var_228: ();
            let var_84: i32;
            let var_80: i32;
            let var_70: i64;
            
            match arg3
            {
                0 =>
                {
                    rbx = (rbx & 0xf000) == 0x6000;
                }
                1 =>
                {
                    rbx = (rbx & 0xf000) == 0x2000;
                }
                2 =>
                {
                    rbx = (rbx & 0xf000) == 0x4000;
                }
                3 =>
                {
                    rbx = 1;
                }
                4 =>
                {
                    std::fs::Metadata::accessed::he9d0f32bdb438e2a(&var_228, &var_c0);
                    let mut rax_6: u64;
                    let mut rdx_1: i32;
                    rax_6 = core::result::Result$LT$T$C$E$GT$::unwrap::h5c83cd2d2c8d394d(&var_228);
                    std::fs::Metadata::modified::he3c19aa683c05d81(&var_228, &var_c0);
                    let mut rax_7: i64;
                    let mut rdx_2: i32;
                    rax_7 = core::result::Result$LT$T$C$E$GT$::unwrap::h5c83cd2d2c8d394d(&var_228);
                    
                    if rax_6 != rax_7
                    {
                        rbx = rax_6 < rax_7;
                    }
                    else
                    {
                        rbx = rdx_1 < rdx_2;
                    }
                }
                5 =>
                {
                    rbx = (rbx & 0xf000) == 0x8000;
                }
                6 =>
                {
                    rbx = rbx >> 0xa & 1;
                }
                7 =>
                {
                    rbx = var_80 == uucore::features::process::getegid::h2ca565c9eb3bafb7();
                }
                8 =>
                {
                    rbx = (rbx & 0xf000) == 0xa000;
                }
                9 =>
                {
                    rbx = rbx >> 9 & 1;
                }
                0xa =>
                {
                    rbx = var_84 == uucore::features::process::geteuid::hd0ed7b4820ed9632();
                }
                0xb =>
                {
                    rbx = (rbx & 0xf000) == 0x1000;
                }
                0xc =>
                {
                    memcpy(&var_228, &var_170, 0xb0);
                    let var_178_2: i8 = 4;
                    rbx =
                        uu_test::path::_$u7b$$u7b$closure$u7d$$u7d$::h328ee32d39cbf90f(&var_228, 4);
                }
                0xd =>
                {
                    rbx = (rbx & 0xf000) == 0xc000;
                }
                0xe =>
                {
                    rbx = var_70 != 0;
                }
                0xf =>
                {
                    rbx = rbx >> 0xb & 1;
                }
                0x10 =>
                {
                    memcpy(&var_228, &var_170, 0xb0);
                    let var_178_1: i8 = 2;
                    rbx =
                        uu_test::path::_$u7b$$u7b$closure$u7d$$u7d$::h328ee32d39cbf90f(&var_228, 2);
                }
                0x11 =>
                {
                    memcpy(&var_228, &var_170, 0xb0);
                    let var_178_3: i8 = 1;
                    rbx =
                        uu_test::path::_$u7b$$u7b$closure$u7d$$u7d$::h328ee32d39cbf90f(&var_228, 1);
                }
            }
        }
        else
        {
            rbx = 0;
        }
    }
    else
    {
        std::fs::symlink_metadata::hb030765a873b8766(rdi, arg1);
        
        if var_170 != 2
        {
            goto 'label_459893;
        }
        
        rbx = 0;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hfff2aadfed0d5cf3(&var_170);
    rbx
}
