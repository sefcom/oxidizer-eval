
  int64_t just::search::Search::find::h1e33858e96fbd947(int128_t* arg1, int64_t arg2, int64_t arg3, char* arg4, uint64_t arg5, int64_t* arg6)

{
    int64_t rax_1 = *arg6 ^ 0x8000000000000000;
    int64_t r10 = 4;
    
    if (rax_1 < 4)
        r10 = rax_1;
    
    int128_t var_d8;
    uint64_t var_c8_1;
    uint64_t var_c0;
    int128_t var_c0_1;
    uint64_t var_b0_1;
    int128_t var_a8;
    uint64_t var_98;
    int128_t var_88;
    int64_t result;
    int128_t zmm0_1;
    
    switch (r10)
    {
        case 0:
        {
            /* tailcall */
            return just::search::Search::find_in_directory::h02746fb8a7674a3d(arg1, arg2, arg3, 
                arg4, arg5);
        }
        case 1:
        {
            arg6[2];
            arg6[3];
            void var_48;
            just::search::Search::clean::hd91959d13e0c6030(&var_48, arg4, arg5);
            char* var_40;
            uint64_t var_38;
            just::search::Search::justfile::h0dde78ec0504c748(&var_d8, arg2, arg3, var_40, var_38);
            int64_t rax_20 = var_d8;
            var_88 = var_d8;
            
            if (rax_20 != -0x7ffffffffffffffa)
            {
                arg1[2] = var_c0;
                arg1[1] = var_88;
                *(arg1 + 8) = rax_20;
                *arg1 = -0x8000000000000000;
            }
            else
            {
                var_a8 = var_88;
                just::search::Search::working_directory_from_justfile::hd51585d6fd438247(&var_d8, 
                    *var_a8[8], var_c0);
                int64_t rax_21 = var_d8;
                var_88 = var_d8;
                
                if (rax_21 != -0x7ffffffffffffffa)
                {
                    arg1[2] = var_c0;
                    arg1[1] = var_88;
                    *(arg1 + 8) = rax_21;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_a8);
                }
                else
                {
                    int128_t var_c0_3 = var_88;
                    int128_t zmm0_5 = var_a8;
                    var_d8 = zmm0_5;
                    arg1[2] = *var_c0_3[8];
                    *(arg1 + 0x28) = var_c0;
                    arg1[1] = var_c0;
                    *(arg1 + 0x18) = var_c0_3;
                    *arg1 = zmm0_5;
                }
            }
            
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_48);
            break;
        }
        case 2:
        {
            just::search::Search::find_global_justfile::hebd54203e27fdeac(&var_88);
            result = var_88;
            int128_t var_68 = var_88;
            int64_t var_70;
            
            if (result != -0x7ffffffffffffffa)
            {
                arg1[2] = var_70;
                arg1[1] = var_68;
                *(arg1 + 8) = result;
                *arg1 = -0x8000000000000000;
            }
            else
            {
                just::search::Search::project_root::hdf3a1681c569c3d2(&var_88, arg2, arg3, arg4, 
                    arg5);
                int64_t rax_6 = var_88;
                var_a8 = var_88;
                
                if (rax_6 != -0x7ffffffffffffffa)
                {
                    arg1[2] = var_70;
                    arg1[1] = var_a8;
                    *(arg1 + 8) = rax_6;
                    *arg1 = -0x8000000000000000;
                    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                        &var_68);
                }
                
                int128_t var_c0_2 = var_a8;
                int128_t zmm0_3 = var_68;
                var_d8 = zmm0_3;
                *arg1 = zmm0_3;
                arg1[2] = *var_c0_2[8];
                *(arg1 + 0x28) = var_70;
                arg1[1] = var_70;
                result = var_c0_2;
                *(arg1 + 0x18) = result;
            }
            break;
        }
        case 3:
        {
            arg6[2];
            arg6[3];
            just::search::Search::clean::hd91959d13e0c6030(&var_a8, arg4, arg5);
            just::search::Search::working_directory_from_justfile::hd51585d6fd438247(&var_d8, 
                *var_a8[8], var_98);
            int64_t rax_13 = var_d8;
            var_88 = var_d8;
            
            if (rax_13 == -0x7ffffffffffffffa)
            {
                var_b0_1 = var_c0;
                var_c0_1 = var_88;
                var_c8_1 = var_98;
                zmm0_1 = var_a8;
                var_d8 = zmm0_1;
                goto label_6882e4;
            }
            
            arg1[2] = var_c0;
            arg1[1] = var_88;
            *(arg1 + 8) = rax_13;
            *arg1 = -0x8000000000000000;
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_a8);
            break;
        }
        case 4:
        {
            arg6[1];
            arg6[2];
            just::search::Search::clean::hd91959d13e0c6030(&var_a8, arg4, arg5);
            arg6[4];
            arg6[5];
            just::search::Search::clean::hd91959d13e0c6030(&var_88, arg4, arg5);
            var_c8_1 = var_98;
            zmm0_1 = var_a8;
            var_d8 = zmm0_1;
            var_c0_1 = var_88;
            uint64_t var_78;
            var_b0_1 = var_78;
            label_6882e4:
            arg1[2] = *var_c0_1[8];
            *(arg1 + 0x28) = var_b0_1;
            arg1[1] = var_c8_1;
            result = var_c0_1;
            *(arg1 + 0x18) = result;
            *arg1 = zmm0_1;
            break;
        }
    }
    
    return result;
}
