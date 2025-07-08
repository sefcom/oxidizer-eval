
  void* uu_tail::bounded_tail::hc4147e75324d37d5(int32_t* arg1, int64_t* arg2)

{
    void* result = jump_table_428ef4[*arg2] + &jump_table_428ef4;
    int64_t rax_9;
    int64_t rdx_5;
    
    switch (result)
    {
        case 0x500dcf:
        {
            uu_tail::backwards_thru_file::hcb0f9adbe7594d6a(arg1, arg2[1], arg2[2]);
            label_500eb6:
            std::io::stdio::stdout::h077da66234850927();
            int64_t* var_20 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
            int64_t* var_28 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_20);
            char const (** rax_15)[0x174];
            int64_t rdx_12;
            rax_15 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h2636827b313ef1de(arg1, &var_28);
            core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(rax_15, rdx_12);
            return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h389d16b0d3eefc2f(
                var_28);
            break;
        }
        case 0x500de6:
        {
            result = jump_table_428f08[arg2[1]] + &jump_table_428f08;
            
            switch (result)
            {
                case 0x500dfa:
                {
                    int64_t rax_5;
                    int64_t rdx_2;
                    rax_5 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(
                        arg1, 1, 0);
                    int64_t rax_6 =
                        core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(rax_5, rdx_2);
                    rax_9 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(
                        arg1, 1, -(core::cmp::min_by::h2c647ecc69a91489(arg2[2], rax_6)));
                    core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(rax_9, rdx_5);
                    goto label_500eb6;
                }
                case 0x500e89:
                {
                    int64_t rdx_9 = arg2[2];
                    
                    if (rdx_9 <= 1)
                        goto label_500eb6;
                    
                    rax_9 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(
                        arg1, 0, rdx_9 - 1);
                    core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(rax_9, rdx_5);
                    goto label_500eb6;
                }
                case 0x500eb6:
                {
                    goto label_500eb6;
                }
                case 0x500ef9:
                {
                    return result;
                    break;
                }
            }
            break;
        }
        case 0x500e4c:
        {
            int64_t rax_10 = arg2[1];
            
            if (rax_10 < 2)
                goto label_500eb6;
            
            int64_t rax_12;
            int64_t rdx_7;
            rax_12 = uu_tail::forwards_thru_file::h1756bf1e18ac67f2(arg1, rax_10 - 1, arg2[2]);
            rax_9 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg1, 
                0, core::result::Result$LT$T$C$E$GT$::unwrap::h8e0def1415a46a28(rax_12, rdx_7));
            core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(rax_9, rdx_5);
            goto label_500eb6;
        }
        case 0x500eb6:
        {
            goto label_500eb6;
        }
        case 0x500ef9:
        {
            return result;
            break;
        }
    }
}
