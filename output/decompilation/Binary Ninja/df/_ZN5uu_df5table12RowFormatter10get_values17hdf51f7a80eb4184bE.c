
  int64_t uu_df::table::RowFormatter::get_values::hdf51f7a80eb4184b(int64_t* arg1, int64_t* arg2)

{
    int64_t var_e8 = 0;
    int64_t result = 8;
    int64_t var_d8 = 0;
    void* rax = arg2[1];
    int64_t rax_1 = *(rax + 0x10);
    
    if (rax_1)
    {
        void* rax_3 = *(rax + 8);
        int64_t* r13_1 = *arg2;
        char rax_11 = arg2[2];
        int64_t r14_1 = 0;
        
        do
        {
            int64_t* rcx_1 = &r13_1[4];
            int128_t var_100;
            int64_t var_f0;
            int128_t var_68;
            int64_t var_58_1;
            
            switch (*(rax_3 + r14_1))
            {
                case 0:
                {
                    if (!(rax_11 & 1))
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_68, &r13_1[0xa]);
                    else
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_100, "total%", 5);
                        var_58_1 = var_f0;
                        var_68 = var_100;
                    }
                    break;
                }
                case 1:
                {
                    uu_df::table::RowFormatter::scaled_bytes::h1421e1083b656cc7(&var_68, rax, 
                        r13_1[0x16]);
                    break;
                }
                case 2:
                {
                    uu_df::table::RowFormatter::scaled_bytes::h1421e1083b656cc7(&var_68, rax, 
                        r13_1[0x17]);
                    break;
                }
                case 3:
                {
                    uu_df::table::RowFormatter::scaled_bytes::h1421e1083b656cc7(&var_68, rax, 
                        r13_1[0x18]);
                    break;
                }
                case 4:
                {
                    uu_df::table::RowFormatter::percentage::h1b6e4d875b5dc07f(&var_68, *r13_1, 
                        r13_1[1]);
                    break;
                }
                case 5:
                {
                    if (!(rax_11 & 1))
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_68, &r13_1[0x10]);
                    else if (!_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h71ef4b7cfeebb3c7(*(rax + 8), *(rax + 0x10)))
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_100, "total%", 5);
                        var_58_1 = var_f0;
                        var_68 = var_100;
                    }
                    else
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_68, &r13_1[0x10]);
                    break;
                }
                case 6:
                {
                    uu_df::table::RowFormatter::scaled_inodes::h53c80a3954ed717b(&var_68, rax, 
                        *rcx_1, rcx_1[1]);
                    break;
                }
                case 7:
                {
                    rcx_1 = &r13_1[6];
                    uu_df::table::RowFormatter::scaled_inodes::h53c80a3954ed717b(&var_68, rax, 
                        *rcx_1, rcx_1[1]);
                    break;
                }
                case 8:
                {
                    rcx_1 = &r13_1[8];
                    uu_df::table::RowFormatter::scaled_inodes::h53c80a3954ed717b(&var_68, rax, 
                        *rcx_1, rcx_1[1]);
                    break;
                }
                case 9:
                {
                    uu_df::table::RowFormatter::percentage::h1b6e4d875b5dc07f(&var_68, r13_1[2], 
                        r13_1[3]);
                    break;
                }
                case 0xa:
                {
                    int64_t rbx_1 = r13_1[0x13];
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_100, "-total%", 1);
                    void* rsi_1 = &r13_1[0x13];
                    int128_t var_48;
                    
                    if (-(rbx_1) == -0x8000000000000000)
                        rsi_1 = &var_48;
                    
                    int64_t var_38_1 = var_f0;
                    var_48 = var_100;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_68, rsi_1);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h73027cd2db783008(
                        &var_48);
                    break;
                }
                case 0xb:
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_68, &r13_1[0xd]);
                    break;
                }
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::h4b8ce3b04144c5a5(&var_e8, &var_68);
            r14_1 += 1;
        } while (rax_1 != r14_1);
    }
    
    arg1[2] = var_d8;
    *arg1 = var_e8;
    arg1[1] = result;
    return result;
}
