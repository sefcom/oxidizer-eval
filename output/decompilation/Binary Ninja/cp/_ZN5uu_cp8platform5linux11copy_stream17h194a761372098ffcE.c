
  int64_t uu_cp::platform::linux::copy_stream::h194a761372098ffc(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t var_e8 = arg1;
    int64_t var_e0 = arg2;
    int64_t var_d8 = arg3;
    int64_t var_d0 = arg4;
    int32_t var_c8;
    std::fs::File::open::hcf22eb549d8d01fb(&var_c8, &var_e8);
    
    if (var_c8 != 1)
    {
        int32_t fd_4;
        int32_t fd_2 = fd_4;
        int32_t fd = fd_2;
        int32_t rax_3 = ~uucore::features::mode::get_umask::h22fe72fd4e3f2e99() & 0x192;
        var_c8 = 0;
        int16_t var_bc_1 = 0;
        int32_t var_c0_1 = 0;
        var_bc_1 = 1;
        *var_c0_1[1] = 1;
        int32_t var_c4 = rax_3;
        int32_t var_f8;
        std::fs::OpenOptions::open::h613d0f70adb4f6ca(&var_f8, &var_c8, &var_d8);
        
        if (var_f8 != 1)
        {
            int32_t fd_3;
            int32_t fd_1 = fd_3;
            uucore::features::buf_copy::linux::copy_stream::hb97e3869c80a2c8f(&var_c8, &fd, &fd_1);
            int64_t rdi_3 = var_c8;
            
            if (!rdi_3)
            {
                if (!arg5)
                {
                    label_49b9a9:
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_1);
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
                    return 0;
                }
                
                std::fs::File::metadata::h5e84e533705f8c98(&var_c8, &fd);
                int32_t var_90;
                
                if (var_c8 != 2
                        && !std::fs::File::set_permissions::h44e1848d00d414e9(&fd_1, var_90))
                    goto label_49b9a9;
            }
            else
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h3fae8bb6fba1fa61(rdi_3, var_c0_1);
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_1);
            fd_2 = fd;
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_2);
    }
    
    return 1;
}
