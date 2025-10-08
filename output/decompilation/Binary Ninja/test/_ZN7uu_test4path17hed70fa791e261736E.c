
  uint64_t uu_test::path::hed70fa791e261736(int64_t arg1, int64_t arg2, char arg3)

{
    int32_t var_170;
    int32_t* rdi = &var_170;
    uint64_t rbx;
    
    if (arg3 != 8)
    {
        std::fs::metadata::ha4b6f518b61475e4(rdi, arg1);
        
        if (var_170 != 2)
        {
            label_459893:
            void var_c0;
            memcpy(&var_c0, &var_170, 0xb0);
            int32_t var_88;
            rbx = var_88;
            void var_228;
            int32_t var_84;
            int32_t var_80;
            int64_t var_70;
            
            switch (arg3)
            {
                case 0:
                {
                    rbx = (rbx & 0xf000) == 0x6000;
                    break;
                }
                case 1:
                {
                    rbx = (rbx & 0xf000) == 0x2000;
                    break;
                }
                case 2:
                {
                    rbx = (rbx & 0xf000) == 0x4000;
                    break;
                }
                case 3:
                {
                    rbx = 1;
                    break;
                }
                case 4:
                {
                    std::fs::Metadata::accessed::he9d0f32bdb438e2a(&var_228, &var_c0);
                    uint64_t rax_6;
                    int32_t rdx_1;
                    rax_6 = core::result::Result$LT$T$C$E$GT$::unwrap::h5c83cd2d2c8d394d(&var_228);
                    std::fs::Metadata::modified::he3c19aa683c05d81(&var_228, &var_c0);
                    int64_t rax_7;
                    int32_t rdx_2;
                    rax_7 = core::result::Result$LT$T$C$E$GT$::unwrap::h5c83cd2d2c8d394d(&var_228);
                    
                    if (rax_6 != rax_7)
                        rbx = rax_6 < rax_7;
                    else
                        rbx = rdx_1 < rdx_2;
                    break;
                }
                case 5:
                {
                    rbx = (rbx & 0xf000) == 0x8000;
                    break;
                }
                case 6:
                {
                    rbx = rbx >> 0xa & 1;
                    break;
                }
                case 7:
                {
                    rbx = var_80 == uucore::features::process::getegid::h2ca565c9eb3bafb7();
                    break;
                }
                case 8:
                {
                    rbx = (rbx & 0xf000) == 0xa000;
                    break;
                }
                case 9:
                {
                    rbx = rbx >> 9 & 1;
                    break;
                }
                case 0xa:
                {
                    rbx = var_84 == uucore::features::process::geteuid::hd0ed7b4820ed9632();
                    break;
                }
                case 0xb:
                {
                    rbx = (rbx & 0xf000) == 0x1000;
                    break;
                }
                case 0xc:
                {
                    memcpy(&var_228, &var_170, 0xb0);
                    char var_178_2 = 4;
                    rbx =
                        uu_test::path::_$u7b$$u7b$closure$u7d$$u7d$::h328ee32d39cbf90f(&var_228, 4);
                    break;
                }
                case 0xd:
                {
                    rbx = (rbx & 0xf000) == 0xc000;
                    break;
                }
                case 0xe:
                {
                    rbx = var_70;
                    break;
                }
                case 0xf:
                {
                    rbx = rbx >> 0xb & 1;
                    break;
                }
                case 0x10:
                {
                    memcpy(&var_228, &var_170, 0xb0);
                    char var_178_1 = 2;
                    rbx =
                        uu_test::path::_$u7b$$u7b$closure$u7d$$u7d$::h328ee32d39cbf90f(&var_228, 2);
                    break;
                }
                case 0x11:
                {
                    memcpy(&var_228, &var_170, 0xb0);
                    char var_178_3 = 1;
                    rbx =
                        uu_test::path::_$u7b$$u7b$closure$u7d$$u7d$::h328ee32d39cbf90f(&var_228, 1);
                    break;
                }
            }
        }
        else
            rbx = 0;
    }
    else
    {
        std::fs::symlink_metadata::hb030765a873b8766(rdi, arg1);
        
        if (var_170 != 2)
            goto label_459893;
        
        rbx = 0;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hfff2aadfed0d5cf3(&var_170);
    return rbx;
}
