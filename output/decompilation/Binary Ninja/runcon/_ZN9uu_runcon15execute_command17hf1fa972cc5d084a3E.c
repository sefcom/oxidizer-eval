
  uint64_t uu_runcon::execute_command::hf1fa972cc5d084a3(char* arg1, uint64_t arg2, int64_t arg3, int64_t arg4)

{
    int32_t var_170;
    uu_runcon::os_str_to_c_string::h048fb3727ae8a25a(&var_170, arg1, arg2);
    int32_t rax = var_170;
    int32_t var_16c;
    int128_t var_168;
    int128_t var_158;
    int128_t var_148;
    int128_t var_138;
    int32_t var_128;
    
    if (rax != 0x11)
    {
        int128_t var_f0_1 = var_138;
        int128_t var_100_1 = var_148;
        int128_t var_110_1 = var_158;
        var_128 = rax;
        int32_t var_124_1 = var_16c;
        int128_t var_120_1 = var_168;
        int32_t var_e0_1 = 1;
        return alloc::boxed::Box$LT$T$GT$::new::h9d7116f1e2e735a5(&var_128);
    }
    
    char* file = var_168;
    int64_t rbx_1 = *var_168[8];
    core::iter::traits::iterator::Iterator::collect::h5d210673f8f24f41(&var_170, arg3);
    int32_t rax_3 = var_170;
    uint64_t result;
    int128_t var_120;
    int128_t var_110;
    int128_t var_100;
    int128_t var_f0;
    
    if (rax_3 != 0x11)
    {
        *var_f0[8] = *var_138[8];
        var_100 = var_148;
        var_110 = var_158;
        int128_t var_b8_1 = var_16c;
        int32_t var_124;
        var_124 = var_168;
        var_120 = var_168;
        var_128 = rax_3;
        int32_t var_e0_2 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h9d7116f1e2e735a5(&var_128);
    }
    else
    {
        int128_t var_d8 = var_168;
        int64_t rdi_2 = -1;
        
        if (arg4 < -2)
            rdi_2 = arg4 + 2;
        
        int64_t rax_5;
        int64_t rdx_2;
        rax_5 =
            alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::hed9964fe064c2e72(rdi_2, 8, 8);
        var_170 = rax_5;
        var_168 = rdx_2;
        *var_168[8] = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hc452364fbd761f0e(&var_170, file);
        void* rsi_3 = *var_d8[8];
        alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::hdc1408df1d37ee13(&var_170, rsi_3, 
            (var_158 << 4) + rsi_3);
        alloc::vec::Vec$LT$T$C$A$GT$::push::hc452364fbd761f0e(&var_170, 0);
        execvp(file, var_168);
        int64_t r13_4 = *__errno_location() << 0x20 | 2;
        char rax_7 = std::io::error::Error::kind::h135fe00c4e7365f3(r13_4);
        int128_t var_78;
        uu_runcon::errors::Error::from_io1::h2e5a1b363c345453(&var_78, 
            "Executing commandCString::new() …", 0x11, arg1, arg2, r13_4);
        int64_t var_38;
        *var_f0[8] = var_38;
        int128_t var_48;
        var_100 = var_48;
        int128_t var_58;
        var_110 = var_58;
        int128_t var_68;
        var_120 = var_68;
        var_128 = var_78;
        int32_t var_e0 = 0 + 0x7e;
        result = alloc::boxed::Box$LT$T$GT$::new::h9d7116f1e2e735a5(&var_128);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$BP$const$u20$i8$GT$$GT$::hc4556757e5bae3cf(
            var_170, var_168);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..ffi..c_str..CString$GT$$GT$::h05fd21f4674cee22(&var_d8);
    }
    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h9db586c62cff4b59(file, rbx_1);
    return result;
}
