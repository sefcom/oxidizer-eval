long long uu_more::Pager::process_events(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp-0x6d]
    unsigned int v1;  // [bp-0x6c]
    void* v2;  // [bp-0x68]
    char v3;  // [bp-0x60]
    int v4;  // [bp-0x5f]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    unsigned long v11;  // rax
    char v12;  // al
    unsigned long long v13;  // r12
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax

    crossterm::event::poll(&v3, 0, 0x5f5e100);
    if (v3)
    {
LABEL_4bea7d:
    }
    else
    {
        v1 = a1->field_20;
        v0 = a1->field_28;
        v2 = 0;
        while (true)
        {
            if (!(char)v4)
                continue;
            crossterm::event::read(&v3);
            v5 = v5;
            if (*((long long *)&v3) == 9223372036854775814)
                break;
            v7 = *((long long *)&v3);
            v8 = v5;
            v9 = v6;
            v11 = v7 ^ 0x8000000000000000;
            if (v11 != 2 && v11 == 5)
            {
                a0.page_resize(v5 >> 16, v1);
                goto LABEL_4beb5d;
            }
            v12 = (unsigned int)v9 >> 16;
            v13 = v5 >> 32;
            if ((char)v5 == 15)
            {
                if ((char)v9)
                {
                    if (!((unsigned int)v9 == 2 && (v13 == 99 & !v12) == 1))
                        goto LABEL_4beba3;
                }
                else
                {
                    if (!(v13 == 113 & !v12))
                        goto LABEL_4bec2f;
                }
                v2 = uu_more::reset_term();
                if (!v2)
                    std::process::exit(0); /* do not return */
                core::ptr::drop_in_place<crossterm::event::Event>(&v7);
                return v2;
            }
            else if (!(!(v9 & 255)))
            {
                goto LABEL_4beba3;
            }
            switch ((unsigned int)v5)
            {
            case 1:
LABEL_4bec68:
                if (a0->field_d0)
                {
                    core::ptr::drop_in_place<crossterm::event::Event>(&v7);
                    return v2;
                }
                a0.next_line();
LABEL_4beb5d:
                v13 = 0x110000;
                goto LABEL_4bebb7;
            case 4: case 8:
                v13 = 0x110000;
                a0.page_up();
LABEL_4bebb7:
                core::ptr::drop_in_place<crossterm::event::Event>(&v7);
                v14 = a0.update_display(v0, a1->field_29);
                if (v14)
                    return v14;
                v15 = a0.draw(v13 & 4294967295);
                if (v15)
                    return v15;
                crossterm::event::poll(&v3, 0, 0x5f5e100);
                if (!(!v3))
                    goto LABEL_4bea7d;
                break;
            case 5: case 9:
LABEL_4bec52:
                if (a0->field_d0)
                {
                    core::ptr::drop_in_place<crossterm::event::Event>(&v7);
                    return v2;
                }
                a0.page_down();
                goto LABEL_4beb5d;
            case 15:
LABEL_4bec2f:
                if ((unsigned int)v13 == 32)
                    goto LABEL_4bec52;
                if ((unsigned int)v13 == 106)
                    goto LABEL_4bec68;
                if ((unsigned int)v13 == 107)
                {
                    a0.prev_line();
                    goto LABEL_4beb5d;
                }
                break;
            default:
LABEL_4beba3:
                if (!(!(v12 != 2 & (char)v5 == 15)))
                    goto LABEL_4bebb7;
                core::ptr::drop_in_place<crossterm::event::Event>(&v7);
            }
        }
    }
    return v5.from();
}
