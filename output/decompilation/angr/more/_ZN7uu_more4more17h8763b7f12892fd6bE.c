long long uu_more::more::h8763b7f12892fd6b(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7, struct_0 *a8)
{
    unsigned long v0;  // [sp-0xe0]
    char v1;  // [bp-0xd8]
    char v2;  // [bp-0xd6]
    char v3;  // [bp-0xd4]
    char v4;  // [bp-0xd0]
    char v5;  // [bp-0xce]
    char v6;  // [sp-0xc8], Other Possible Types: unsigned long
    char v7;  // [bp-0xc0]
    char v8;  // [bp-0xb8]
    char v9;  // [bp-0xa8]
    char v10;  // [bp-0xa0]
    char v11;  // [bp-0x98]
    unsigned long long v12;  // [sp-0x90]
    unsigned short v13;  // [sp-0x68]
    unsigned short v14;  // [sp-0x68]
    char v15;  // [bp-0x48]
    unsigned int v17;  // edx
    unsigned int v18;  // ebp
    unsigned long v19;  // rdx
    unsigned long long v20;  // rax
    void* v21;  // r15
    unsigned long long v22;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rax
    unsigned long v27;  // rax
    unsigned long long v28;  // rax
    unsigned int v29;  // eax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned int v32;  // ebp
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax

    crossterm::terminal::size::hbe662dd82ba50d02(&v9);
    v18 = v17;
    if (a8->field_20)
        v18 = (unsigned int)a8->padding_22;
    uu_more::break_buff::he6395443a668b94e(&v15, a0, a1, (unsigned int)core::result::Result$LT$T$C$E$GT$::unwrap::h27978026947b7af9(&v9));
    uu_more::Pager::new::h6098d4be37f01f19(&v9, v18, &v15, a6, a7, a8);
    if (a8->field_0 == 0x8000000000000000)
    {
LABEL_4dcd66:
        if (!a3)
            goto LABEL_4dce5e;
    }
    else
    {
        if (uu_more::search_pattern_in_file::hc37280eeed50663d(*((long long *)&v10), *((long long *)&v11), a8))
        {
            v12 = v19;
            goto LABEL_4dcd66;
        }
        v20 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(a2, 4);
        if (v20)
        {
LABEL_4dce37:
            v21 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v20);
            goto LABEL_4dd13b;
        }
        else
        {
            v20 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a2);
            if (!(!v20 && (v20 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 19), !v20)))
                goto LABEL_4dce37;
            v14 = v13 - 1;
            if (!a3)
                goto LABEL_4dce5e;
        }
    }
    v22 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(a2, 4);
    if (!v22)
        v22 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a2);
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(v22, &g_5629a8);
    v24 = a5;
    if (!a4)
        v24 = a4;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hc54af5b05edfde16(&v6, (a4 ? a4 : 1), v24);
    v25 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, *((long long *)&v7), *((long long *)&v8));
    if (v25)
    {
        v21 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v25);
        ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v6);
    }
    else
    {
        ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v6);
        v14 -= 3;
LABEL_4dce5e:
        uu_more::Pager::draw::h2b73bb7b8a9d56c7(&v9, a2, 0x110000);
        if (a3)
        {
            a8->field_18 = 0;
            v13 = v14 + 3;
        }
        if (!a6 && (char)uu_more::Pager::should_close::hd0c7831e1905e098(&v9))
        {
            v21 = 0;
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
                v28 = (v27 < 6 ? 4 : v0 ^ 0x8000000000000000);
                if (v28 != 2)
                {
                    if (!(v28 == 5))
                        goto LABEL_4dceb0;
                    uu_more::Pager::page_resize::ha0e74b43be507582(&v9, *((short *)&v2), *((int *)&a8->field_20));
                    goto LABEL_4dcf2c;
                }
                v29 = v5;
                if (!v29)
                {
                    v30 = v1;
                    if (!((char)v30 == 15))
                        goto LABEL_4dd056;
                    v31 = v4;
                    if ((unsigned int)v31 == 2)
                    {
                        if (*((int *)&v3) == 99)
                            goto LABEL_4dd173;
                        v32 = *((int *)&v3);
                        goto LABEL_4dcf31;
                    }
                    else
                    {
                        if (!(!(unsigned int)v31))
                            goto LABEL_4dd0b1;
                        if (*((int *)&v3) == 113)
                        {
LABEL_4dd173:
                            uu_more::reset_term::h414dda587ba155f3(a2);
                            std::process::exit::hf8c1b9d00a2a86fd(0); /* do not return */
                        }
                        v32 = *((int *)&v3);
                        goto LABEL_4dd0bd;
                    }
                }
                if (v29 == 2)
                    goto LABEL_4dceb0;
                else
                    goto LABEL_4dcfb1;
LABEL_4dcfb1:
                v30 = v1;
LABEL_4dd056:
                switch ((unsigned int)v30)
                {
                case 4: case 8:
                    if (!(!v4))
                        goto LABEL_4dceb0;
                    uu_more::Pager::page_up::hcd3674266d22c74e(&v9);
                    v21 = uu_more::paging_add_back_message::hbb2e4f2ab157e08e(*((int *)&a8->field_20), a2);
                    v32 = 0x110000;
                case 5: case 9:
                    if (!(!v4))
                        goto LABEL_4dceb0;
                    goto LABEL_4dd0ed;
                case 15:
                    v31 = v4;
LABEL_4dd0b1:
                    v32 = *((int *)&v3);
                    if (!(!(v31 & 255 & 255)))
                        goto LABEL_4dcf31;
LABEL_4dd0bd:
                    if (v32 == 32)
                    {
LABEL_4dd0ed:
                        if (!(!(uu_more::Pager::should_close::hd0c7831e1905e098(&v9) & 255 & 255 & 255)))
                            goto LABEL_4dd129;
                        uu_more::Pager::page_down::h61b22add167296da(&v9);
                        break;
                    }
                    if (v32 == 107)
                    {
                        uu_more::Pager::prev_line::h2dc79d29e0a18308(&v9);
                        break;
                    }
                    else
                    {
                        if (!(v32 == 106))
                            goto LABEL_4dcf31;
                        if (!(char)uu_more::Pager::should_close::hd0c7831e1905e098(&v9))
                        {
                            uu_more::Pager::next_line::h22612d87ae029aa4(&v9);
                            break;
                        }
                        else
                        {
LABEL_4dd129:
                            v21 = 0;
                        }
                    }
LABEL_4dcf2c:
                    v32 = 0x110000;
LABEL_4dcf31:
                    core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&v0);
                    if (a8->field_25)
                    {
                        v0 = std::io::stdio::stdout::h077da66234850927();
                        v33 = crossterm::command::write_command_ansi::h52fb7152bdef87df(&v0, 0, 0);
                        if (!v33)
                        {
                            v33 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(&v0, 2);
                            if (!v33)
                            {
                                v6 = std::io::stdio::stdout::h077da66234850927();
                                v33 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v6);
                            }
                        }
                        core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(v33, &g_562a08);
                    }
                    else if (a8->field_24)
                    {
                        v0 = std::io::stdio::stdout::h077da66234850927();
                        v34 = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(&v0, 0);
                        if (!v34)
                        {
                            v34 = crossterm::command::write_command_ansi::h52fb7152bdef87df(&v0, 0, 0);
                            if (!v34)
                            {
                                v6 = std::io::stdio::stdout::h077da66234850927();
                                v34 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v6);
                            }
                        }
                        core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(v34, &g_5629f0);
                    }
                    uu_more::Pager::draw::h2b73bb7b8a9d56c7(&v9, a2, v32);
                    continue;
                default:
LABEL_4dceb0:
                    core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&v0);
                }
            }
        }
    }
LABEL_4dd13b:
    core::ptr::drop_in_place$LT$uu_more..Pager$GT$::h5e4cf1885d08b4d9(&v9);
    return v21;
}
