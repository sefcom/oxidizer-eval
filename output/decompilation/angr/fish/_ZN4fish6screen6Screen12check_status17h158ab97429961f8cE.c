long long fish::screen::Screen::check_status(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    char v4;  // [bp-0x18]
    unsigned long long v6;  // rax
    unsigned int v7;  // ecx
    unsigned long v8;  // rax
    unsigned int v9;  // ecx
    unsigned long long v10;  // rax

    v1 = std::io::stdio::stdout();
    v0 = v1.flush();
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v0);
    v1 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
    v0 = v1.flush();
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v0);
    v6 = fish::common::has_working_tty_timestamps();
    if (!(char)v6)
        return v6;
    fish::screen::mtime_stdout_stderr(&v1);
    v7 = *((int *)&v2);
    if (a0->field_a8 == 0x3b9aca00)
    {
        if (v7 == 0x3b9aca00)
            goto LABEL_140cba9;
    }
    else
    {
        if (v7 != 0x3b9aca00 && a0->field_a8 == v7 && a0->field_a0 == v1)
        {
LABEL_140cba9:
            v8 = a0->field_b8;
            v9 = *((int *)&v4);
            if ((unsigned int)v8 == 0x3b9aca00)
            {
                if (v9 == 0x3b9aca00)
                    return v8;
            }
            else
            {
                if (v9 != 0x3b9aca00 && (unsigned int)v8 == v9 && a0->field_b0 == v3)
                    return v3;
            }
        }
    }
    v10 = a0.reset_line(1);
    a0->field_68 = a0->field_68;
    return v10;
}
