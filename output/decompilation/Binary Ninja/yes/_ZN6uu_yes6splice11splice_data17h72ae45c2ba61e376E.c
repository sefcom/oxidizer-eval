
  int64_t uu_yes::splice::splice_data::h72ae45c2ba61e376(int64_t arg1, int64_t arg2, int32_t* arg3)

{
    int64_t r15 = arg1;
    int32_t var_c8;
    nix::sys::stat::fstat::h5414de4d70a08ddb(&var_c8, *arg3);
    uint64_t rax_1;
    int32_t var_c4;
    int32_t var_a8;
    
    if (var_c8)
        rax_1 = var_c4 << 0x20;
    else
    {
        int32_t var_d8;
        int32_t var_d4;
        uint64_t var_d0;
        
        if (!(var_a8 & 0x1000))
        {
            uint64_t rax_3 = uucore::features::pipes::pipe::h14b45b9735c770a8();
            
            if (rax_3 == 0xffffffff)
                rax_1 = rax_3 & 0xffffffff00000000;
            else
            {
                int32_t fd = rax_3;
                uint32_t fd_1 = rax_3 >> 0x20;
                
                if (!arg2)
                {
                    while (true)
                        /* nop */
                }
                else
                {
                    while (true)
                    {
                        int64_t r15_1 = r15;
                        int64_t r14_1 = arg2;
                        int64_t temp1_1;
                        
                        do
                        {
                            var_c8 = r15_1;
                            int64_t var_c0_1 = r14_1;
                            nix::fcntl::vmsplice::hf0c74caef6c9626a(&var_d8, &fd_1, &var_c8, 1, 0);
                            int32_t rdi_6;
                            
                            if (var_d8)
                            {
                                rdi_6 = var_d4;
                                label_4a677a:
                                int64_t result =
                                    core::ops::function::FnOnce::call_once::h6e25e053844151e6(
                                    rdi_6);
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::hdc6e75f3ed259d90(
                                    fd_1);
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::hdc6e75f3ed259d90(
                                    fd);
                                return result;
                            }
                            
                            int32_t rax_4 =
                                uucore::features::pipes::splice_exact::hfc6bdd2da9251bd0(&fd, arg3, 
                                var_d0);
                            
                            if (rax_4 != 0x86)
                            {
                                rdi_6 = rax_4;
                                goto label_4a677a;
                            }
                            
                            if (r14_1 < var_d0)
                            {
                                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(
                                    var_d0, r14_1);
                                /* no return */
                            }
                            
                            r15_1 += var_d0;
                            temp1_1 = r14_1;
                            r14_1 -= var_d0;
                        } while (temp1_1 != var_d0);
                    }
                }
            }
        }
        else if (!arg2)
        {
            while (true)
                /* nop */
        }
        else
        {
            int64_t var_e0_2 = r15;
            
            while (true)
            {
                int64_t rbp_2 = arg2;
                int64_t temp0_1;
                
                do
                {
                    var_c8 = r15;
                    int64_t var_c0_2 = rbp_2;
                    nix::fcntl::vmsplice::hebd5ee864fb7652a(&var_d8, arg3, &var_c8, 1, 0);
                    
                    if (var_d8)
                        return core::ops::function::FnOnce::call_once::h6e25e053844151e6(var_d4);
                    
                    if (rbp_2 < var_d0)
                    {
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(var_d0, 
                            rbp_2);
                        /* no return */
                    }
                    
                    r15 += var_d0;
                    temp0_1 = rbp_2;
                    rbp_2 -= var_d0;
                } while (temp0_1 != var_d0);
                r15 = var_e0_2;
            }
        }
    }
    return rax_1 | 2;
}
