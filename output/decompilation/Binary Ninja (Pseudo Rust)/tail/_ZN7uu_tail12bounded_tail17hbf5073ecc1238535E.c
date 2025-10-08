
  fn uu_tail::bounded_tail::hbf5073ecc1238535(arg1: *mut i32, arg2: *mut i64) -> *mut c_void

{
    let mut result: *mut c_void = jump_table_423228[*arg2] + &jump_table_423228;
    let mut rax_9: i8;
    let mut rdx_5: i64;
    
    match result
    {
        0x4a78df =>
        {
            uu_tail::backwards_thru_file::h4e45f1efa57e466a(arg1, arg2[1], arg2[2]);
            'label_4a79c6:
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            let mut var_20: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            let mut var_28: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_20);
            let mut rax_15: i8;
            let mut rdx_11: i64;
            rax_15 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hfccde87f54fd76f8(arg1, &var_28);
            core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax_15, rdx_11);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hdaabd612c12af6aa(var_28)
        }
        0x4a78f6 =>
        {
            result = jump_table_42323c[arg2[1]] + &jump_table_42323c;
            
            match result
            {
                0x4a790a =>
                {
                    let mut rax_5: i8;
                    let mut rdx_2: i64;
                    rax_5 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(
                        arg1, 1, 0);
                    let rax_6: i64 =
                        core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax_5, rdx_2);
                    rax_9 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(
                        arg1, 1, -(core::cmp::Ord::min::h3d9976d042f7bcff(arg2[2], rax_6)));
                    core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax_9, rdx_5);
                    goto 'label_4a79c6;
                }
                0x4a7999 =>
                {
                    let rdx_9: i64 = arg2[2];
                    
                    if rdx_9 <= 1
                    {
                        goto 'label_4a79c6;
                    }
                    
                    rax_9 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(
                        arg1, 0, rdx_9 - 1);
                    core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax_9, rdx_5);
                    goto 'label_4a79c6;
                }
                0x4a79c6 =>
                {
                    goto 'label_4a79c6;
                }
                0x4a7a09 =>
                {
                    result
                }
            }
        }
        0x4a795c =>
        {
            let rax_10: i64 = arg2[1];
            
            if rax_10 < 2
            {
                goto 'label_4a79c6;
            }
            
            let mut rax_12: i8;
            let mut rdx_7: i64;
            rax_12 = uu_tail::forwards_thru_file::hb6f3f61b3da7cbd0(arg1, rax_10 - 1, arg2[2]);
            rax_9 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(arg1, 
                0, core::result::Result$LT$T$C$E$GT$::unwrap::hf535a8cdc98a83e7(rax_12, rdx_7));
            core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax_9, rdx_5);
            goto 'label_4a79c6;
        }
        0x4a79c6 =>
        {
            goto 'label_4a79c6;
        }
        0x4a7a09 =>
        {
            result
        }
    }
}
