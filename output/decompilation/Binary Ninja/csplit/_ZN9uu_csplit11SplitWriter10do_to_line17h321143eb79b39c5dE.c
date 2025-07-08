
  int64_t uu_csplit::SplitWriter::do_to_line::h321143eb79b39c5d(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4, int64_t arg5, int64_t* arg6)

{
    arg6[7] = 1;
    arg6[6] = 1;
    void var_a8;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&var_a8, arg3, 
        arg4);
    int64_t var_b0 = 1;
    
    while (true)
    {
        int64_t var_50;
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92638e6c16058415(&var_50, arg6);
        int64_t var_48;
        
        if (var_48 == -0x7fffffffffffffff)
            break;
        
        int64_t var_40;
        
        if (var_48 == -0x8000000000000000)
        {
            *arg1 = 0;
            arg1[1] = var_40;
        }
        else
        {
            int64_t rdx_1 = var_50;
            int64_t var_e0 = var_48;
            int64_t var_d8_1 = var_40;
            bool rcx_1 = rdx_1 + 1 != arg5;
            
            if (rdx_1 + 1 > arg5)
                rcx_1 = true;
            
            uint64_t var_38;
            
            if (rcx_1 != 1)
            {
                int64_t var_c8;
                int128_t var_88;
                
                if (rcx_1)
                {
                    uint64_t var_78_2 = var_38;
                    var_88 = var_e0;
                    uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::hf666c82950bc0262(
                        &var_c8, arg6, rdx_1, &var_88);
                    
                    if (var_c8 != -0x8000000000000000)
                    {
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&var_c8);
                        var_88 = &data_6deb50;
                        label_55efe6:
                        *var_88[8] = 1;
                        int64_t var_78_3 = 8;
                        int128_t var_70 = {0};
                        core::panicking::panic_fmt::he12d0d7468628bb4(&var_88);
                        /* no return */
                    }
                    
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&var_c8);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_b0);
                    var_b0 = 0xc;
                }
                else
                {
                    char rbp_1 = *(arg2[4] + 0x63);
                    
                    if (!rbp_1)
                    {
                        uint64_t var_78_1 = var_38;
                        var_88 = var_e0;
                        uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::hf666c82950bc0262(
                            &var_c8, arg6, rdx_1, &var_88);
                        
                        if (var_c8 != -0x8000000000000000)
                        {
                            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&var_c8);
                            var_88 = &data_6deb50;
                            goto label_55efe6;
                        }
                        
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&var_c8);
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_b0);
                    var_b0 = 0xc;
                    
                    if (rbp_1)
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_e0);
                }
                break;
            }
            
            void** rax_2 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(arg2, var_40, var_38);
            
            if (rax_2)
            {
                *arg1 = 0;
                arg1[1] = rax_2;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_e0);
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_e0);
                continue;
            }
        }
        return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_b0);
    }
    
    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(arg2);
    int64_t result;
    arg1[4] = result;
    int128_t zmm0_2 = var_b0;
    int128_t var_a0;
    *(arg1 + 0x10) = var_a0;
    *arg1 = zmm0_2;
    return result;
}
