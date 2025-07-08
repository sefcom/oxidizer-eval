
  fn uu_yes::splice::splice_data::h72ae45c2ba61e376(arg1: i64, arg2: i64, arg3: *mut i32) -> i64

{
    let mut r15: i64 = arg1;
    let mut var_c8: i32;
    nix::sys::stat::fstat::h5414de4d70a08ddb(&var_c8, *arg3);
    let mut rax_1: u64;
    let var_c4: i32;
    let var_a8: i32;
    
    if var_c8 != 0
    {
        rax_1 = var_c4 << 0x20;
    }
    else
    {
        let mut var_d8: i32;
        let var_d4: i32;
        let var_d0: u64;
        
        if (var_a8 & 0x1000) == 0
        {
            let rax_3: u64 = uucore::features::pipes::pipe::h14b45b9735c770a8();
            
            if rax_3 == 0xffffffff
            {
                rax_1 = rax_3 & 0xffffffff00000000;
            }
            else
            {
                let mut fd: i32 = rax_3;
                let mut fd_1: u32 = rax_3 >> 0x20;
                
                if arg2 == 0
                {
                    loop
                    {
                        /* nop */
                    }
                }
                else
                {
                    loop
                    {
                        let mut r15_1: i64 = r15;
                        let mut r14_1: i64 = arg2;
                        let mut temp1_1: i64;
                        
                        do
                        {
                            var_c8 = r15_1;
                            let var_c0_1: i64 = r14_1;
                            nix::fcntl::vmsplice::hf0c74caef6c9626a(&var_d8, &fd_1, &var_c8, 1, 0);
                            let mut rdi_6: i32;
                            
                            if var_d8 != 0
                            {
                                rdi_6 = var_d4;
                                'label_4a677a:
                                let result: i64 =
                                    core::ops::function::FnOnce::call_once::h6e25e053844151e6(
                                    rdi_6);
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::hdc6e75f3ed259d90(
                                    fd_1);
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::hdc6e75f3ed259d90(
                                    fd);
                                return result;
                            }
                            
                            let rax_4: i32 =
                                uucore::features::pipes::splice_exact::hfc6bdd2da9251bd0(&fd, arg3, 
                                var_d0);
                            
                            if rax_4 != 0x86
                            {
                                rdi_6 = rax_4;
                                goto 'label_4a677a;
                            }
                            
                            if r14_1 < var_d0
                            {
                                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(
                                    var_d0, r14_1);
                                /* no return */
                            }
                            
                            r15_1 += var_d0;
                            temp1_1 = r14_1;
                            r14_1 -= var_d0;
                        } while temp1_1 != var_d0;
                    }
                }
            }
        }
        else if arg2 == 0
        {
            loop
            {
                /* nop */
            }
        }
        else
        {
            let var_e0_2: i64 = r15;
            
            loop
            {
                let mut rbp_2: i64 = arg2;
                let mut temp0_1: i64;
                
                do
                {
                    var_c8 = r15;
                    let var_c0_2: i64 = rbp_2;
                    nix::fcntl::vmsplice::hebd5ee864fb7652a(&var_d8, arg3, &var_c8, 1, 0);
                    
                    if var_d8 != 0
                    {
                        return core::ops::function::FnOnce::call_once::h6e25e053844151e6(var_d4);
                    }
                    
                    if rbp_2 < var_d0
                    {
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(var_d0, 
                            rbp_2);
                        /* no return */
                    }
                    
                    r15 += var_d0;
                    temp0_1 = rbp_2;
                    rbp_2 -= var_d0;
                } while temp0_1 != var_d0;
                r15 = var_e0_2;
            }
        }
    }
    rax_1 | 2
}
