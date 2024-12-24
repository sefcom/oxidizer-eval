long long uu_more::more::had1b5d51e49d4730(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
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
    unsigned long long v32;  // rax
    unsigned long long v34;  // rcx
    unsigned long long v35;  // rcx
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rcx
    unsigned int v40;  // eax
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    unsigned int v43;  // ebp
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax

    v9 = a3;
    v19 = *((long long *)&v18);
    crossterm::terminal::size::hd245adaedec494dd(&v10, a1, a2, a3, a4, a5);
    uu_more::break_buff::ha3f2f26669230090(&v15, a0, a1, (unsigned int)core::result::Result$LT$T$C$E$GT$::unwrap::hd3ad8475936c3398(&v10), v22, v23);
    v24 = v16;
    uu_more::Pager::new::h59b79ce2dd85430f(&v10, (unsigned int)v19->padding_22, &v15, v24, *((long long *)&v17), v19);
    v25 = v9;
    if (v19->field_0 == 0x8000000000000000)
    {
LABEL_4dd136:
        if (!v25)
            goto LABEL_4dd22e;
    }
    else
    {
        if (uu_more::search_pattern_in_file::h111b84dc79481799(*((long long *)&v11), *((long long *)&v12), v19))
        {
            v13 = v28;
            goto LABEL_4dd136;
        }
        v26 = crossterm::command::write_command_ansi::h66ef6922789da4a2(a2, 4);
        if (v26)
        {
LABEL_4dd207:
            v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v26);
            goto LABEL_4dd50b;
        }
        else
        {
            v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a2, v27, v28);
            if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\n%Next file: --More--()", 19), !v26)))
                goto LABEL_4dd207;
            v14 -= 1;
            if (!v25)
                goto LABEL_4dd22e;
        }
    }
    v30 = crossterm::command::write_command_ansi::h66ef6922789da4a2(a2, 4);
    if (!v30)
        v30 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a2, v27, v28);
    core::result::Result$LT$T$C$E$GT$::unwrap::h6f3636434174f807(v30, &g_5638f8);
    alloc::str::_$LT$impl$u20$str$GT$::replace::h2517cea87277a8d7(&v6, 1, a5);
    v32 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, *((long long *)&v7), *((long long *)&v8));
    if (v32)
    {
        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v32);
        ::0x4d9c80::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h16e21476e7fcb4fa(&v6);
    }
    else
    {
        ::0x4d9c80::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h16e21476e7fcb4fa(&v6);
        v14 -= 3;
LABEL_4dd22e:
        uu_more::Pager::draw::hdd288973a9484fee(&v10, a2, 0x110000);
        if (v25)
        {
            v19->field_18 = 0;
            v14 += 3;
        }
        if (!v24 && (char)uu_more::Pager::should_close::h1b8aeb6fddacc352(&v10))
        {
            v29 = 0;
        }
        else
        {
            while (true)
            {
                do
                {
                    crossterm::event::poll::he4a4fff0f885b6f4(&v6, 0, 10000000, v34, v22, v23);
                } while (!(char)core::result::Result$LT$T$C$E$GT$::unwrap::h1505cc0378eb0c21(&v6));
                crossterm::event::read::h691930a084b8b102(&v6, v27, v28, v35, v22, v23);
                core::result::Result$LT$T$C$E$GT$::unwrap::hc72580cbdbd762d5(&v0, &v6);
                v36 = v0 ^ 0x8000000000000000;
                if (v37 != 2)
                {
                    if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\n%Next file: --More--()", 19), !v26)))
                        goto LABEL_4dd280;
                    uu_more::Pager::page_resize::hb5a9a35edd59fd7e(&v10, *((short *)&v2), *((int *)&v19->field_20));
                    goto LABEL_4dd2fc;
                }
                v40 = v5;
                if (!v40)
                {
                    v41 = v1;
                    if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\n%Next file: --More--()", 19), !v26)))
                        goto LABEL_4dd426;
                    v42 = v4;
                    if ((unsigned int)v42 == 2)
                    {
                        if (*((int *)&v3) == 99)
                            goto LABEL_4dd543;
                        v43 = *((int *)&v3);
                        goto LABEL_4dd301;
                    }
                    else
                    {
                        if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\n%Next file: --More--()", 19), !v26)))
                            goto LABEL_4dd481;
                        if (*((int *)&v3) == 113)
                        {
LABEL_4dd543:
                            uu_more::reset_term::h72144b9a07ffbd5e(a2, v27, v28, v36, v22, v23);
                            std::process::exit::hf8c1b9d00a2a86fd(0); /* do not return */
                        }
                        v43 = *((int *)&v3);
                        goto LABEL_4dd48d;
                    }
                }
                if (v40 == 2)
                    goto LABEL_4dd280;
                else
                    goto LABEL_4dd381;
LABEL_4dd381:
                v41 = v1;
LABEL_4dd426:
                switch ((unsigned int)v41)
                {
                case 4: case 8:
                    if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\n%Next file: --More--()", 19), !v26)))
                        goto LABEL_4dd280;
                    uu_more::Pager::page_up::h7cda121e96458753(&v10);
                    v29 = uu_more::paging_add_back_message::h5c2eb83e0e058d07(*((int *)&v19->field_20), a2, v28);
                    v43 = 0x110000;
                case 5: case 9:
                    if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\n%Next file: --More--()", 19), !v26)))
                        goto LABEL_4dd280;
                    goto LABEL_4dd4bd;
                case 15:
                    v42 = v4;
LABEL_4dd481:
                    v43 = *((int *)&v3);
                    if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\n%Next file: --More--()", 19), !v26)))
                        goto LABEL_4dd301;
LABEL_4dd48d:
                    if (v43 == 32)
                    {
LABEL_4dd4bd:
                        if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\n%Next file: --More--()", 19), !v26)))
                            goto LABEL_4dd4f9;
                        uu_more::Pager::page_down::h7a9f091a5838fe30(&v10);
                        break;
                    }
                    if (v43 == 107)
                    {
                        uu_more::Pager::prev_line::hd8e847bb1a062632(&v10);
                        break;
                    }
                    else
                    {
                        if (!(!v26) || !((v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\n%Next file: --More--()", 19), !v26)))
                            goto LABEL_4dd301;
                        if (!(char)uu_more::Pager::should_close::h1b8aeb6fddacc352(&v10))
                        {
                            uu_more::Pager::next_line::h5dacf4b45105871e(&v10);
                            break;
                        }
                        else
                        {
LABEL_4dd4f9:
                            v29 = 0;
                        }
                    }
LABEL_4dd2fc:
                    v43 = 0x110000;
LABEL_4dd301:
                    core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::h482254c2a1d9d547(&v0);
                    if (v19->field_25)
                    {
                        v0 = std::io::stdio::stdout::h077da66234850927();
                        v44 = crossterm::command::write_command_ansi::h6af95083c0addcf2(&v0, 0, 0);
                        if (!v44)
                        {
                            v44 = crossterm::command::write_command_ansi::h66ef6922789da4a2(&v0, 2);
                            if (!v44)
                            {
                                v6 = std::io::stdio::stdout::h077da66234850927();
                                v44 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v6, v27, v28);
                            }
                        }
                        core::result::Result$LT$T$C$E$GT$::unwrap::h6f3636434174f807(v44, &g_563958);
                    }
                    else if (v19->field_24)
                    {
                        v0 = std::io::stdio::stdout::h077da66234850927();
                        v45 = crossterm::command::write_command_ansi::h66ef6922789da4a2(&v0, 0);
                        if (!v45)
                        {
                            v45 = crossterm::command::write_command_ansi::h6af95083c0addcf2(&v0, 0, 0);
                            if (!v45)
                            {
                                v6 = std::io::stdio::stdout::h077da66234850927();
                                v45 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v6, v27, v28);
                            }
                        }
                        core::result::Result$LT$T$C$E$GT$::unwrap::h6f3636434174f807(v45, &g_563940);
                    }
                    uu_more::Pager::draw::hdd288973a9484fee(&v10, a2, v43);
                    continue;
                default:
LABEL_4dd280:
                    core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::h482254c2a1d9d547(&v0);
                }
            }
        }
    }
LABEL_4dd50b:
    core::ptr::drop_in_place$LT$uu_more..Pager$GT$::hddc234814b0b0666(&v10);
    return v29;
}
