
  int64_t uu_csplit::SplitWriter::do_to_line::h30903185dcfc6234(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4, int64_t arg5, int64_t* arg6)

{
    arg6[0xb] = 1;
    arg6[0xa] = 1;
    void var_a0;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h726fb365ecba84af(&var_a0, arg3, arg4);
    int64_t var_a8 = 1;
    
    while (true)
    {
        int64_t var_80;
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9e28d1a528fdaefb(&var_80, arg6);
        int64_t var_78;
        
        if (var_78 == -0x7fffffffffffffff)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$GT$::hd170b8d8dcb5eaff(&var_80);
            break;
        }
        
        int64_t var_70;
        uint64_t var_68;
        
        if (var_78 == -0x8000000000000000)
        {
            *arg1 = 0xc;
            arg1[1] = var_70;
            arg1[2] = var_68;
        }
        else
        {
            int64_t rdx_1 = var_80;
            int64_t var_c0 = var_78;
            int64_t var_b8_1 = var_70;
            bool c_1 = arg5 < rdx_1 + 1;
            int64_t rcx_1;
            rcx_1 = arg5 != rdx_1 + 1 && !c_1;
            uint64_t var_b0_1 = var_68;
            rcx_1 = rcx_1 - 0;
            
            if (rcx_1 != 1)
            {
                char const (** const var_60)[0xcc];
                
                if (rcx_1)
                {
                    uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h0772b428f360f01c(
                        &var_60, arg6, rdx_1, &var_c0);
                    char const (** const rbx_2)[0xcc] = var_60;
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hac6e165de92e876f(&var_60);
                    
                    if (rbx_2 != -0x8000000000000000)
                    {
                        label_516a96:
                        var_60 = &data_641bf0;
                        int64_t var_58 = 1;
                        int64_t var_50 = 8;
                        int128_t var_48 = {0};
                        core::panicking::panic_fmt::h96f341d36638c225(&var_60);
                        /* no return */
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h75a87585a3eed1de(&var_a8);
                    var_a8 = 0xd;
                }
                else
                {
                    char rbp_1 = *(arg2[4] + 0x63);
                    char const (** const rbx_1)[0xcc];
                    
                    if (!rbp_1)
                    {
                        uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h0772b428f360f01c(
                            &var_60, arg6, rdx_1, &var_c0);
                        rbx_1 = var_60;
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hac6e165de92e876f(&var_60);
                    }
                    
                    if (!rbp_1 && rbx_1 != -0x8000000000000000)
                        goto label_516a96;
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h75a87585a3eed1de(&var_a8);
                    var_a8 = 0xd;
                    
                    if (rbp_1)
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(
                            &var_c0);
                }
                break;
            }
            
            void** rax_2 = uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, var_70, var_68);
            
            if (rax_2)
            {
                *arg1 = 0;
                arg1[1] = rax_2;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_c0);
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_c0);
                continue;
            }
        }
        return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h75a87585a3eed1de(&var_a8);
    }
    
    uu_csplit::SplitWriter::finish_split::h02c3d655ecbf09e8(arg2);
    int64_t result;
    arg1[4] = result;
    int128_t zmm0_2 = var_a8;
    int128_t var_98;
    *(arg1 + 0x10) = var_98;
    *arg1 = zmm0_2;
    return result;
}
