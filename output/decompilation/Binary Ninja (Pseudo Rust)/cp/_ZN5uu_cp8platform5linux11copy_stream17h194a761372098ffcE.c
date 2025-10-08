
  fn uu_cp::platform::linux::copy_stream::h194a761372098ffc(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i8) -> i64

{
    let mut var_e8: i64 = arg1;
    let var_e0: i64 = arg2;
    let mut var_d8: i64 = arg3;
    let var_d0: i64 = arg4;
    let mut var_c8: i32;
    std::fs::File::open::hcf22eb549d8d01fb(&var_c8, &var_e8);
    
    if var_c8 != 1
    {
        let fd_4: i32;
        let mut fd_2: i32 = fd_4;
        let mut fd: i32 = fd_2;
        let rax_3: i32 = !uucore::features::mode::get_umask::h22fe72fd4e3f2e99() & 0x192;
        var_c8 = 0;
        let mut var_bc_1: i16 = 0;
        let mut var_c0_1: i32 = 0;
        var_bc_1 = 1;
        *var_c0_1[1] = 1;
        let var_c4: i32 = rax_3;
        let mut var_f8: i32;
        std::fs::OpenOptions::open::h613d0f70adb4f6ca(&var_f8, &var_c8, &var_d8);
        
        if var_f8 != 1
        {
            let fd_3: i32;
            let mut fd_1: i32 = fd_3;
            uucore::features::buf_copy::linux::copy_stream::hb97e3869c80a2c8f(&var_c8, &fd, &fd_1);
            let rdi_3: i64 = var_c8;
            
            if rdi_3 == 0
            {
                if arg5 == 0
                {
                    'label_49b9a9:
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_1);
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
                    return 0;
                }
                
                std::fs::File::metadata::h5e84e533705f8c98(&var_c8, &fd);
                let var_90: i32;
                
                if var_c8 != 2
                    && std::fs::File::set_permissions::h44e1848d00d414e9(&fd_1, var_90) == 0
                {
                    goto 'label_49b9a9;
                }
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h3fae8bb6fba1fa61(rdi_3, var_c0_1);
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_1);
            fd_2 = fd;
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_2);
    }
    
    1
}
