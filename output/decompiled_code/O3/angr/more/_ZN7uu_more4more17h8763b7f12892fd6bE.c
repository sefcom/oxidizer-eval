long long uu_more::more::h8763b7f12892fd6b(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long v0;  // [sp-0xe0], Other Possible Types: unsigned long long
    char v1;  // [bp-0xd8]
    char v2;  // [bp-0xd6]
    char v3;  // [bp-0xd4]
    char v4;  // [bp-0xd0]
    char v5;  // [bp-0xce]
    char v6;  // [bp-0xc8], Other Possible Types: unsigned long long
    char v7;  // [bp-0xc0]
    char v8;  // [bp-0xb8]
    unsigned int v9;  // [sp-0xac]
    char v10;  // [bp-0xa8]
    char v11;  // [bp-0xa0]
    char v12;  // [bp-0x98]
    unsigned long long v13;  // [sp-0x90]
    unsigned short v14;  // [sp-0x68]
    char v15;  // [bp-0x48]
    unsigned long v16;  // [bp+0x8]
    char v17;  // [bp+0x10]
    char v18;  // [bp+0x18]
    struct_0 *v19;  // r14
    unsigned long long v22;  // r8
    unsigned long long v23;  // r9
    unsigned long long v24;  // r15
    char v25;  // bpl
    unsigned long long v26;  // rax
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdx
    void* v29;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // 4096
    unsigned long long v34;  // 4096
    unsigned long long v35;  // rax
    unsigned long long v37;  // rcx
    unsigned long long v38;  // rcx
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rcx
    unsigned long long v42;  // rax
    unsigned int v43;  // eax
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned int v46;  // ebp
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax

    v9 = a3;
    v19 = *((long long *)&v18);
    crossterm::terminal::size::hbe662dd82ba50d02(&v10, a1, a2, a3, a4, a5);
    uu_more::break_buff::he6395443a668b94e(&v15, a0, a1, (unsigned int)core::result::Result$LT$T$C$E$GT$::unwrap::h27978026947b7af9(&v10), v22, v23);
    v24 = v16;
    uu_more::Pager::new::h6098d4be37f01f19(&v10, (unsigned int)v19->padding_22, &v15, v24, *((long long *)&v17), v19);
    v25 = v9;
    if (v19->field_0 == 0x8000000000000000)
    {
LABEL_4dcd66:
        if (!v25)
            goto LABEL_4dce5e;
    }
    else
    {
        if (uu_more::search_pattern_in_file::hc37280eeed50663d(*((long long *)&v11), *((long long *)&v12), v19))
        {
            v13 = v28;
            goto LABEL_4dcd66;
        }
        v26 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(a2, 4);
        if (v26)
        {
LABEL_4dce37:
            v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v26);
            goto LABEL_4dd13b;
        }
        else
        {
            v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a2, v27, v28);
            if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v26)))
                goto LABEL_4dce37;
            v14 -= 1;
            if (!v25)
                goto LABEL_4dce5e;
        }
    }
    v30 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(a2, 4);
    if (!v30)
        v30 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a2, v27, v28);
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(v30, &g_5629a8);
    if (a4)
        v31 = a4;
    else
        v31 = 1;
    if (!a4)
        v34 = a4;
    else
        v34 = a5;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hc54af5b05edfde16(&v6, v31, v34);
    v35 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, *((long long *)&v7), *((long long *)&v8));
    if (v35)
    {
        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v35);
        ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v6);
    }
    else
    {
        ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v6);
        v14 -= 3;
LABEL_4dce5e:
        uu_more::Pager::draw::h2b73bb7b8a9d56c7(&v10, a2, 0x110000);
        if (v25)
        {
            v19->field_18 = 0;
            v14 += 3;
        }
        if (!v24 && (char)uu_more::Pager::should_close::hd0c7831e1905e098(&v10))
        {
            v29 = 0;
        }
        else
        {
            while (true)
            {
                do
                {
                    crossterm::event::poll::hefe8b0d9d35d10b0(&v6, 0, 10000000, v37, v22, v23);
                } while (!(char)core::result::Result$LT$T$C$E$GT$::unwrap::ha4f5b3edb49286c5(&v6));
                crossterm::event::read::h36d19ea956bf477b(&v6, v27, v28, v38, v22, v23);
                core::result::Result$LT$T$C$E$GT$::unwrap::h70ef865c885e52af(&v0, &v6);
                v39 = v0 ^ 0x8000000000000000;
                if (v39 >= 6)
                    v40 = 4;
                else
                    v40 = v39;
                v42 = v40;
                if (v42 != 2)
                {
                    if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v26)))
                        goto LABEL_4dceb0;
                    uu_more::Pager::page_resize::ha0e74b43be507582(&v10, *((short *)&v2), *((int *)&v19->field_20));
                    goto LABEL_4dcf2c;
                }
                v43 = v5;
                if (!v43)
                {
                    v44 = v1;
                    if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v26)))
                        goto LABEL_4dd056;
                    v45 = v4;
                    if ((unsigned int)v45 == 2)
                    {
                        if (*((int *)&v3) == 99)
                            goto LABEL_4dd173;
                        v46 = *((int *)&v3);
                        goto LABEL_4dcf31;
                    }
                    else
                    {
                        if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v26)))
                            goto LABEL_4dd0b1;
                        if (*((int *)&v3) == 113)
                        {
LABEL_4dd173:
                            uu_more::reset_term::h414dda587ba155f3(a2, v27, v28, v39, v22, v23);
                            std::process::exit::hf8c1b9d00a2a86fd(0); /* do not return */
                        }
                        v46 = *((int *)&v3);
                        goto LABEL_4dd0bd;
                    }
                }
                if (v43 == 2)
                    goto LABEL_4dceb0;
                else
                    goto LABEL_4dcfb1;
LABEL_4dcfb1:
                v44 = v1;
LABEL_4dd056:
                switch ((unsigned int)v44)
                {
                case 4: case 8:
                    if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v26)))
                        goto LABEL_4dceb0;
                    uu_more::Pager::page_up::hcd3674266d22c74e(&v10);
                    v29 = uu_more::paging_add_back_message::hbb2e4f2ab157e08e(*((int *)&v19->field_20), a2, v28);
                    v46 = 0x110000;
                case 5: case 9:
                    if (!v4)
                        goto LABEL_4dd0ed;
                    goto LABEL_4dceb0;
                case 15:
                    v45 = v4;
LABEL_4dd0b1:
                    v46 = *((int *)&v3);
                    if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v26)))
                        goto LABEL_4dcf31;
LABEL_4dd0bd:
                    if (v46 == 32)
                    {
LABEL_4dd0ed:
                        if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v26)))
                            goto LABEL_4dd129;
                        uu_more::Pager::page_down::h61b22add167296da(&v10);
                        break;
                    }
                    if (v46 == 107)
                    {
                        uu_more::Pager::prev_line::h2dc79d29e0a18308(&v10);
                        break;
                    }
                    else
                    {
                        if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v26)))
                            goto LABEL_4dcf31;
                        if (!(char)uu_more::Pager::should_close::hd0c7831e1905e098(&v10))
                        {
                            uu_more::Pager::next_line::h22612d87ae029aa4(&v10);
                            break;
                        }
                        else
                        {
LABEL_4dd129:
                            v29 = 0;
                        }
                    }
LABEL_4dcf2c:
                    v46 = 0x110000;
LABEL_4dcf31:
                    core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&v0);
                    if (v19->field_25)
                    {
                        v0 = std::io::stdio::stdout::h077da66234850927();
                        v47 = crossterm::command::write_command_ansi::h52fb7152bdef87df(&v0, 0, 0);
                        if (!v47)
                        {
                            v47 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(&v0, 2);
                            if (!v47)
                            {
                                v6 = std::io::stdio::stdout::h077da66234850927();
                                v47 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v6, v27, v28);
                            }
                        }
                        core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(v47, &g_562a08);
                    }
                    else if (v19->field_24)
                    {
                        v0 = std::io::stdio::stdout::h077da66234850927();
                        v48 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(&v0, 0);
                        if (!v48)
                        {
                            v48 = crossterm::command::write_command_ansi::h52fb7152bdef87df(&v0, 0, 0);
                            if (!v48)
                            {
                                v6 = std::io::stdio::stdout::h077da66234850927();
                                v48 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v6, v27, v28);
                            }
                        }
                        core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(v48, &g_5629f0);
                    }
                    uu_more::Pager::draw::h2b73bb7b8a9d56c7(&v10, a2, v46);
                    continue;
                default:
LABEL_4dceb0:
                    core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&v0);
                }
            }
        }
    }
LABEL_4dd13b:
    core::ptr::drop_in_place$LT$uu_more..Pager$GT$::h5e4cf1885d08b4d9(&v10);
    return v29;
}
