
  int64_t uu_ls::PathData::new::ha3e1f49dfc1f89b1(int128_t* arg1, int128_t* arg2, uint64_t arg3, int128_t* arg4, int32_t arg5, int32_t arg6, char arg7)

{
    int32_t r13 = arg6;
    uint64_t var_120 = arg3;
    int128_t* var_148 = arg4;
    int32_t var_13c = arg5;
    int128_t var_e8;
    uint64_t rax;
    
    if (*arg4 != -0x8000000000000000)
    {
        int64_t var_128_1 = arg4[1];
        int128_t var_138_1 = *arg4;
        void* rcx_6 = jump_table_4346b0[r13] + &jump_table_4346b0;
        r13 = 0;
        
        switch (rcx_6)
        {
            case 0x526afb:
            {
                label_526b03:
                
                if (!arg7)
                    /* tailcall */
                    return sub_526b74();
                
                label_526b07:
                int32_t var_14c = r13;
                arg2[1];
                rax = 1;
                int32_t var_150 = rax;
                std::fs::metadata::h459aac21f85cb4df(&var_e8, *(arg2 + 8));
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&var_e8);
                /* tailcall */
                return sub_526b74();
            }
            case 0x526b5b:
            {
                /* tailcall */
                return sub_526b74();
            }
            case 0x526b63:
            {
                /* tailcall */
                return sub_526b74();
            }
            case sub_526b74:
            {
                /* tailcall */
                return sub_526b74(arg2, 0, arg1, 0, arg3);
            }
        }
    }
    else
    {
        uint64_t var_d8;
        
        if (!arg7)
        {
            int64_t rax_4;
            size_t rdx_2;
            rax_4 = std::path::Path::file_name::h79ecbb7850a9c7f3(*(arg2 + 8), arg2[1]);
            
            if (!rax_4)
                rax_4 = uu_ls::PathData::new::_$u7b$$u7b$closure$u7d$$u7d$::h0c5837aa9b0379e1(
                    *(arg2 + 8), arg2[1]);
            
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_e8, rax_4, rdx_2);
            uint64_t var_128_2 = var_d8;
            int128_t var_138_2 = var_e8;
            void* rcx_10 = jump_table_4346b0[r13] + &jump_table_4346b0;
            r13 = 1;
            
            switch (rcx_10)
            {
                case 0x526afb:
                {
                    goto label_526b03;
                }
                case 0x526b5b:
                {
                    /* tailcall */
                    return sub_526b74();
                }
                case 0x526b63:
                {
                    /* tailcall */
                    return sub_526b74();
                }
                case sub_526b74:
                {
                    /* tailcall */
                    return sub_526b74();
                }
            }
        }
        else
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&var_e8, arg2);
            uint64_t var_128 = var_d8;
            int128_t var_138 = var_e8;
            rax = 1;
            
            switch (r13)
            {
                case 0:
                {
                    /* tailcall */
                    return sub_526b74();
                }
                case 1:
                {
                    goto label_526b07;
                }
                case 2:
                {
                    /* tailcall */
                    return sub_526b74();
                }
                case 3:
                {
                    /* tailcall */
                    return sub_526b74();
                }
            }
        }
    }
}
