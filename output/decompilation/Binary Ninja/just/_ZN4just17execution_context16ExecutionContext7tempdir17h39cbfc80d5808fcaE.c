
  void* just::execution_context::ExecutionContext::tempdir::h39cbfc80d5808fca(char* arg1, int64_t* arg2, void* arg3)

{
    int64_t var_98 = 6;
    int64_t var_a8 = 1;
    int64_t var_a0 = 0;
    int16_t var_90 = 0;
    int32_t var_c0 = 0;
    char const* const var_b8 = "just-cmdcmd.exepowershellpowersh…";
    int64_t var_b0 = 5;
    void* rcx = *arg2;
    int128_t var_108;
    char var_f8;
    int128_t var_88;
    void* rcx_2;
    
    if (!(0 + -(*(rcx + 0xf0))))
    {
        rcx_2 = rcx + 0xf0;
        label_6675e2:
        void* rax_1 = arg2[3];
        std::path::Path::join::h509d33a3bbf89c2c(&var_88, *(rax_1 + 0x20), *(rax_1 + 0x28), rcx_2);
        tempfile::Builder::tempdir_in::h93ae886201734d83(&var_108, &var_c0, &var_88);
        
        if (var_f8 == 2)
            return just::execution_context::ExecutionContext::tempdir::_$u7b$$u7b$closure$u7d$$u7d$::h73d903d964048742(arg1, arg3, var_108);
    }
    else
    {
        void* rcx_1 = arg2[2];
        
        if (*(rcx_1 + 0x168) != -0x8000000000000000)
        {
            rcx_2 = rcx_1 + 0x168;
            goto label_6675e2;
        }
        
        int64_t var_d8;
        dirs::runtime_dir::h5ee1631cece24aad(&var_d8);
        
        if (var_d8 != -0x8000000000000000)
        {
            int128_t var_f0;
            int64_t var_d0;
            uint64_t var_c8;
            std::path::Path::join::h1eac0ae5e7efa361(&var_f0, var_d0, var_c8, 
                "just\x1b[1mCYAN'{{'[");
            int64_t rax_2 = std::fs::create_dir_all::hed07f7fced9e770a(&var_f0);
            uint64_t var_e0;
            
            if (rax_2)
            {
                just::execution_context::ExecutionContext::tempdir::_$u7b$$u7b$closure$u7d$$u7d$::h7728784de9bd9dc5(&var_88, *var_f0[8], var_e0, rax_2);
                char rax_3 = var_88;
                int64_t var_28;
                *(arg1 + 0x60) = var_28;
                int128_t var_37;
                *(arg1 + 0x51) = var_37;
                int128_t var_47;
                *(arg1 + 0x41) = var_47;
                int128_t var_57;
                *(arg1 + 0x31) = var_57;
                int128_t var_67;
                *(arg1 + 0x21) = var_67;
                int64_t var_78;
                *(arg1 + 0x11) = *var_78[1];
                *(arg1 + 1) = var_88;
                *arg1 = rax_3;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_f0);
                return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                    &var_d8);
            }
            
            uint64_t var_78_1 = var_e0;
            var_88 = var_f0;
            tempfile::Builder::tempdir_in::h93ae886201734d83(&var_108, &var_c0, &var_88);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_d8);
            
            if (var_f8 == 2)
                return just::execution_context::ExecutionContext::tempdir::_$u7b$$u7b$closure$u7d$$u7d$::h73d903d964048742(arg1, arg3, var_108);
        }
        else
        {
            tempfile::Builder::tempdir::h15970eab596e1a6d(&var_108, &var_c0);
            
            if (var_f8 == 2)
                return just::execution_context::ExecutionContext::tempdir::_$u7b$$u7b$closure$u7d$$u7d$::h73d903d964048742(arg1, arg3, var_108);
        }
    }
    void* result = var_f8;
    *(arg1 + 0x18) = result;
    *(arg1 + 8) = var_108;
    *arg1 = 0x38;
    return result;
}
