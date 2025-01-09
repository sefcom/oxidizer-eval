long long uu_more::more::h8763b7f12892fd6b(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3, unsigned long a4, unsigned long a5)
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
    char v9;  // [bp-0xa8]
    char v10;  // [bp-0xa0]
    char v11;  // [bp-0x98]
    unsigned long long v12;  // [sp-0x90]
    unsigned short v13;  // [sp-0x68]
    char v14;  // [bp-0x48]
    unsigned long v15;  // [bp+0x8]
    char v16;  // [bp+0x10]
    char v17;  // [bp+0x18]
    struct_0 *v18;  // r14
    unsigned long long v21;  // r15
    char v22;  // bpl
    unsigned long v23;  // rdx
    unsigned long long v24;  // rax
    void* v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // 4096
    unsigned long long v30;  // 4096
    unsigned long long v31;  // rax
    unsigned long long v33;  // rcx
    unsigned int v34;  // eax
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned int v37;  // ebp
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax

    v18 = *((long long *)&v17);
    crossterm::terminal::size::hbe662dd82ba50d02(&v9);
    uu_more::break_buff::he6395443a668b94e(&v14, a0, a1, (unsigned int)core::result::Result$LT$T$C$E$GT$::unwrap::h27978026947b7af9(&v9));
    v21 = v15;
    uu_more::Pager::new::h6098d4be37f01f19(&v9, (unsigned int)v18->padding_22, &v14, v21, *((long long *)&v16), v18);
    v22 = a3;
    if (v18->field_0 == 0x8000000000000000)
    {
LABEL_4dcd66:
        if (!v22)
            goto LABEL_4dce5e;
    }
    else
    {
        if (uu_more::search_pattern_in_file::hc37280eeed50663d(*((long long *)&v10), *((long long *)&v11), v18))
        {
            v12 = v23;
            goto LABEL_4dcd66;
        }
        v24 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(a2, 4);
        if (v24)
        {
LABEL_4dce37:
            v25 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v24);
            goto LABEL_4dd13b;
        }
        else
        {
            v24 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a2);
            if (!(!v24) || !((v24 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v24)))
                goto LABEL_4dce37;
            v13 -= 1;
            if (!v22)
                goto LABEL_4dce5e;
        }
    }
    v26 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(a2, 4);
    if (!v26)
        v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a2);
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(v26, &g_5629a8);
    if (a4)
        v27 = a4;
    else
        v27 = 1;
    if (!a4)
        v30 = a4;
    else
        v30 = a5;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hc54af5b05edfde16(&v6, v27, v30);
    v31 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, *((long long *)&v7), *((long long *)&v8));
    if (v31)
    {
        v25 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v31);
        ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v6);
    }
    else
    {
        ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v6);
        v13 -= 3;
LABEL_4dce5e:
        uu_more::Pager::draw::h2b73bb7b8a9d56c7(&v9, a2, 0x110000);
        if (v22)
        {
            v18->field_18 = 0;
            v13 += 3;
        }
        if (!v21 && (char)uu_more::Pager::should_close::hd0c7831e1905e098(&v9))
        {
            v25 = 0;
        }
        else
        {
            while (true)
            {
                do
                {
                    crossterm::event::poll::hefe8b0d9d35d10b0(&v6, 0, 10000000);
                } while (!(char)core::result::Result$LT$T$C$E$GT$::unwrap::ha4f5b3edb49286c5(&v6));
                crossterm::event::read::h36d19ea956bf477b(&v6);
                core::result::Result$LT$T$C$E$GT$::unwrap::h70ef865c885e52af(&v0, &v6);
                v33 = v0 ^ 0x8000000000000000;
                if (v33 >= 6)
                    v33 = 4;
                if (v33 != 2)
                {
                    if (!(!v24) || !((v24 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v24)))
                        goto LABEL_4dceb0;
                    uu_more::Pager::page_resize::ha0e74b43be507582(&v9, *((short *)&v2), *((int *)&v18->field_20));
                    goto LABEL_4dcf2c;
                }
                v34 = v5;
                if (!v34)
                {
                    v35 = v1;
                    if (!(!v24) || !((v24 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v24)))
                        goto LABEL_4dd056;
                    v36 = v4;
                    if ((unsigned int)v36 == 2)
                    {
                        if (*((int *)&v3) == 99)
                            goto LABEL_4dd173;
                        v37 = *((int *)&v3);
                        goto LABEL_4dcf31;
                    }
                    else
                    {
                        if (!(!v24) || !((v24 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v24)))
                            goto LABEL_4dd0b1;
                        if (*((int *)&v3) == 113)
                        {
LABEL_4dd173:
                            uu_more::reset_term::h414dda587ba155f3(a2);
                            std::process::exit::hf8c1b9d00a2a86fd(0); /* do not return */
                        }
                        v37 = *((int *)&v3);
                        goto LABEL_4dd0bd;
                    }
                }
                if (v34 == 2)
                    goto LABEL_4dceb0;
                else
                    goto LABEL_4dcfb1;
LABEL_4dcfb1:
                v35 = v1;
LABEL_4dd056:
                switch ((unsigned int)v35)
                {
                case 4: case 8:
                    if (!(!v24) || !((v24 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v24)))
                        goto LABEL_4dceb0;
                    uu_more::Pager::page_up::hcd3674266d22c74e(&v9);
                    v25 = uu_more::paging_add_back_message::hbb2e4f2ab157e08e(*((int *)&v18->field_20), a2);
                    v37 = 0x110000;
                case 5: case 9:
                    if (!(!v24) || !((v24 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v24)))
                        goto LABEL_4dceb0;
                    goto LABEL_4dd0ed;
                case 15:
                    v36 = v4;
LABEL_4dd0b1:
                    v37 = *((int *)&v3);
                    if (!(!v24) || !((v24 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v24)))
                        goto LABEL_4dcf31;
LABEL_4dd0bd:
                    if (v37 == 32)
                    {
LABEL_4dd0ed:
                        if (!(!v24) || !((v24 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v24)))
                            goto LABEL_4dd129;
                        uu_more::Pager::page_down::h61b22add167296da(&v9);
                        break;
                    }
                    if (v37 == 107)
                    {
                        uu_more::Pager::prev_line::h2dc79d29e0a18308(&v9);
                        break;
                    }
                    else
                    {
                        if (v37 == 106)
                        {
                            if (!(char)uu_more::Pager::should_close::hd0c7831e1905e098(&v9))
                            {
                                uu_more::Pager::next_line::h22612d87ae029aa4(&v9);
                                break;
                            }
                            else
                            {
LABEL_4dd129:
                                v25 = 0;
                            }
LABEL_4dcf2c:
                            v37 = 0x110000;
                        }
LABEL_4dcf31:
                        core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&v0);
                        if (v18->field_25)
                        {
                            v0 = std::io::stdio::stdout::h077da66234850927();
                            v38 = crossterm::command::write_command_ansi::h52fb7152bdef87df(&v0, 0, 0);
                            if (!v38)
                            {
                                v38 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(&v0, 2);
                                if (!v38)
                                {
                                    v6 = std::io::stdio::stdout::h077da66234850927();
                                    v38 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v6);
                                }
                            }
                            core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(v38, &g_562a08);
                        }
                        else if (v18->field_24)
                        {
                            v0 = std::io::stdio::stdout::h077da66234850927();
                            v39 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(&v0, 0);
                            if (!v39)
                            {
                                v39 = crossterm::command::write_command_ansi::h52fb7152bdef87df(&v0, 0, 0);
                                if (!v39)
                                {
                                    v6 = std::io::stdio::stdout::h077da66234850927();
                                    v39 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v6);
                                }
                            }
                            core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(v39, &g_5629f0);
                        }
                        uu_more::Pager::draw::h2b73bb7b8a9d56c7(&v9, a2, v37);
                        continue;
                    }
                default:
LABEL_4dceb0:
                    core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&v0);
                }
            }
        }
    }
LABEL_4dd13b:
    core::ptr::drop_in_place$LT$uu_more..Pager$GT$::h5e4cf1885d08b4d9(&v9);
    return v25;
}
