
  int128_t* uu_ln::exec::h2656b7f7ed388dfd(void* arg1, int64_t arg2, void* arg3)

{
    void var_50;
    int128_t* result;
    char* var_48;
    uint64_t var_40;
    
    if (*(arg3 + 0x18) != -0x8000000000000000)
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_50, *(arg3 + 0x20), 
            *(arg3 + 0x28));
        result = uu_ln::link_files_in_dir::h0d7f4d99648ce3c4(arg1, arg2, var_48, var_40, arg3);
    }
    else
    {
        if (*(arg3 + 0x33))
        {
            int64_t r12_1;
            
            if (arg2 == 1)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbf396db49ef6ba51(&var_50, arg1);
                r12_1 = -0x7ffffffffffffffd;
                label_4b9942:
                int64_t var_38_1 = r12_1;
                return alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&var_50);
            }
            
            if (arg2 > 2)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbf396db49ef6ba51(&var_50, arg1 + 0x30);
                r12_1 = -0x7ffffffffffffffc;
                goto label_4b9942;
            }
            
            if (arg2)
                return uu_ln::link::h8c92ebae2dccde8f(*(arg1 + 8), *(arg1 + 0x10), *(arg1 + 0x20), 
                    *(arg1 + 0x28), arg3);
            
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: !files.is_empt…");
            /* no return */
        }
        
        if (arg2 != 1)
        {
            if (arg2 < 1)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            int64_t rax_2 = (arg2 - 1) * 3;
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_50, 
                *(arg1 + (rax_2 << 3) + 8), *(arg1 + (rax_2 << 3) + 0x10));
            char rax_3;
            
            if (arg2 <= 2)
                rax_3 = std::path::Path::is_dir::h9ac0db933706da51(var_48, var_40);
            
            if (arg2 <= 2 && !rax_3)
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&var_50);
                return uu_ln::link::h8c92ebae2dccde8f(*(arg1 + 8), *(arg1 + 0x10), *(arg1 + 0x20), 
                    *(arg1 + 0x28), arg3);
            }
            
            int64_t rax_4;
            int64_t rdx_7;
            rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hee0d4964d376204f(arg2 - 1, arg1, arg2);
            result =
                uu_ln::link_files_in_dir::h0d7f4d99648ce3c4(rax_4, rdx_7, var_48, var_40, arg3);
        }
        else
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_50, 
                ".src/uu/ln/src/ln.rsassertion fa…", 1);
            result = uu_ln::link_files_in_dir::h0d7f4d99648ce3c4(arg1, 1, var_48, var_40, arg3);
        }
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&var_50);
    return result;
}
