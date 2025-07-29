long long uu_more::more(uint128_t a0[3], unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, struct_0 *a6)
{
    unsigned int v0;  // [bp-0x23c]
    unsigned long long v1;  // [bp-0x238]
    unsigned long long v2;  // [sp-0x230]
    unsigned long long v3;  // [bp-0x228]
    unsigned long long v4;  // [bp-0x220]
    int v5;  // [bp-0x218]
    int v6;  // [bp-0x208]
    int v7;  // [bp-0x1f8]
    unsigned long long v8;  // [bp-0x1e0]
    unsigned long long v9;  // [bp-0x1d8]
    unsigned long long v10;  // [bp-0x1d0]
    char v11;  // [bp-0x1c8]
    char v12;  // [bp-0x108]
    unsigned int v13;  // [bp-0x104]
    unsigned long long v14;  // [bp-0x100]
    unsigned long long v15;  // [bp-0xf8]
    char v16;  // [bp-0xf0]
    unsigned long long v17;  // rax
    char v18;  // bpl
    unsigned long long v19;  // rax

    v0 = a1;
    uu_more::setup_term(&v12);
    if ((v12 & 1))
    {
        v2 = v2;
    }
    else
    {
        v1 = v15;
        v2 = v14;
        crossterm::terminal::size(&v12);
        if ((v12 & 1))
        {
            v17 = v14.from();
            v18 = 1;
        }
        else
        {
            *((uint128_t *)&v7) = a0[2];
            *((uint128_t *)&v6) = a0[1];
            *((uint128_t *)&v5) = a0[0];
            v3 = v2;
            v4 = v1;
            v12.new(&v5, (!a6->field_20 ? (unsigned short)v13 : a6->field_22), a2, a3, a4, a5, a6, &v3);
            v17 = v14;
            if (*((long long *)&v12) != 2)
            {
                memcpy(&v11, &v16, 192);
                v8 = *((long long *)&v12);
                v9 = v17;
                v10 = v15;
                v17 = v8.handle_from_line();
                if (!v17)
                {
                    v17 = v8.handle_pattern_search();
                    if (!v17)
                    {
                        if ((char)v0)
                        {
                            v17 = v8.display_multi_file_header();
                            if (!v17)
                                goto LABEL_4bdcbf;
                        }
                        else
                        {
LABEL_4bdcbf:
                            v17 = v8.draw(0x110000);
                            if (!v17)
                            {
                                if ((char)v0)
                                {
                                    v8.reset_multi_file_header();
                                    a6->field_18 = 0;
                                }
                                v19 = v8.process_events(a6);
                                core::ptr::drop_in_place<uu_more::Pager>(&v8);
                                core::ptr::drop_in_place<uu_more::TerminalGuard>();
                                return v19;
                            }
                        }
                    }
                }
                core::ptr::drop_in_place<uu_more::Pager>(&v8);
            }
        }
        core::ptr::drop_in_place<uu_more::TerminalGuard>();
        if (!v18)
            return v17;
        core::ptr::drop_in_place<core::result::Result<bool,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v2, v1);
        v2 = v17;
    }
    core::ptr::drop_in_place<uu_more::InputType>(a0);
    return v2;
}
