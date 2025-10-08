
  uint64_t uu_tail::tail_stdin::h9b2bb4973e46bb0a(int64_t* arg1, char* arg2, int64_t** arg3, void* arg4)

{
    int64_t var_48;
    uu_tail::paths::Input::resolve::h84f3e048eaef79fb(&var_48, arg3);
    int64_t rbx = var_48;
    uint64_t rbx_2;
    int128_t var_c0;
    int64_t var_b0;
    int128_t var_88;
    
    if (-(rbx) != -0x8000000000000000)
    {
        same_file::Handle::stdin::h12b97f800844609d(&var_c0);
        char var_ac;
        int64_t r14_2;
        
        if (var_ac != 2)
        {
            int64_t var_78_1 = var_b0;
            var_88 = var_c0;
            int64_t rax_7;
            int64_t rdx_2;
            rax_7 =
                _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::stream_position::hea3f1471eccd6c38(
                same_file::Handle::as_file_mut::hcd780b03a6979da7(&var_88));
            int64_t var_58 = rax_7;
            int64_t var_50_1 = rdx_2;
            r14_2 = 0;
            
            if (!(rax_7 & 1))
                r14_2 = rdx_2;
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hdbd92671f07abc68(&var_58);
            core::ptr::drop_in_place$LT$same_file..Handle$GT$::hfc3648d48d8d9f0a(&var_88);
            
            if (var_ac == 2)
                core::ptr::drop_in_place$LT$core..result..Result$LT$same_file..Handle$C$std..io..error..Error$GT$$GT$::h399f1d3fde9c021a(&var_c0);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$same_file..Handle$C$std..io..error..Error$GT$$GT$::h399f1d3fde9c021a(&var_c0);
            r14_2 = 0;
        }
        
        char* var_40;
        uint64_t var_38;
        uint64_t rax_8;
        int64_t rdx_4;
        rax_8 =
            uu_tail::tail_file::h810e2a2864f554f6(arg1, arg2, arg3, var_40, var_38, arg4, r14_2);
        
        if (!rax_8)
        {
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(rbx, var_40);
            return 0;
        }
        
        rbx_2 = rax_8;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(rbx, var_40);
    }
    else
    {
        int64_t rbx_1 = arg3[1];
        uint64_t r14 = arg3[2];
        uu_tail::paths::HeaderPrinter::print_input::hb7a0117faf5241cb(arg2, rbx_1);
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hdcf64a34c78d9fac(&var_c0, 
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        uint64_t rax_2;
        int64_t rdx_1;
        rax_2 = uu_tail::unbounded_tail::hcfcdcf7b136f8669(&var_c0, arg1);
        
        if (!rax_2)
        {
            int128_t var_a0;
            int128_t var_68_1 = var_a0;
            int64_t var_78;
            var_78 = var_b0;
            var_88 = var_c0;
            uint64_t rax_9 = uu_tail::follow::watch::Observer::add_stdin::h786ed50fcd53f701(arg4, 
                rbx_1, r14, alloc::boxed::Box$LT$T$GT$::new::h45ee24b486da6bbe(&var_88));
            
            if (rax_9)
                return rax_9;
            
            return 0;
        }
        
        rbx_2 = rax_2;
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h8c3263317abf16b8(&var_c0);
    }
    return rbx_2;
}
