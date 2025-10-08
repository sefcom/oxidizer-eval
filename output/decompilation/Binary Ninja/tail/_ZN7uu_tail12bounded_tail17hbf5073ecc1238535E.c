
  void* uu_tail::bounded_tail::hbf5073ecc1238535(int32_t* arg1, int64_t* arg2)

{
    void* result = jump_table_423228[*arg2] + &jump_table_423228;
    char rax_9;
    int64_t rdx_5;
    
    switch (result)
    {
        case 0x4a78df:
        {
            uu_tail::backwards_thru_file::h4e45f1efa57e466a(arg1, arg2[1], arg2[2]);
            label_4a79c6:
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            int64_t* var_20 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            int64_t* var_28 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_20);
            char rax_15;
            int64_t rdx_11;
            rax_15 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hfccde87f54fd76f8(arg1, &var_28);
            core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax_15, rdx_11);
            return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hdaabd612c12af6aa(
                var_28);
            break;
        }
        case 0x4a78f6:
        {
            result = jump_table_42323c[arg2[1]] + &jump_table_42323c;
            
            switch (result)
            {
                case 0x4a790a:
                {
                    char rax_5;
                    int64_t rdx_2;
                    rax_5 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(
                        arg1, 1, 0);
                    int64_t rax_6 =
                        core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax_5, rdx_2);
                    rax_9 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(
                        arg1, 1, -(core::cmp::Ord::min::h3d9976d042f7bcff(arg2[2], rax_6)));
                    core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax_9, rdx_5);
                    goto label_4a79c6;
                }
                case 0x4a7999:
                {
                    int64_t rdx_9 = arg2[2];
                    
                    if (rdx_9 <= 1)
                        goto label_4a79c6;
                    
                    rax_9 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(
                        arg1, 0, rdx_9 - 1);
                    core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax_9, rdx_5);
                    goto label_4a79c6;
                }
                case 0x4a79c6:
                {
                    goto label_4a79c6;
                }
                case 0x4a7a09:
                {
                    return result;
                    break;
                }
            }
            break;
        }
        case 0x4a795c:
        {
            int64_t rax_10 = arg2[1];
            
            if (rax_10 < 2)
                goto label_4a79c6;
            
            char rax_12;
            int64_t rdx_7;
            rax_12 = uu_tail::forwards_thru_file::hb6f3f61b3da7cbd0(arg1, rax_10 - 1, arg2[2]);
            rax_9 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(arg1, 
                0, core::result::Result$LT$T$C$E$GT$::unwrap::hf535a8cdc98a83e7(rax_12, rdx_7));
            core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax_9, rdx_5);
            goto label_4a79c6;
        }
        case 0x4a79c6:
        {
            goto label_4a79c6;
        }
        case 0x4a7a09:
        {
            return result;
            break;
        }
    }
}
