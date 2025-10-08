long long fish::screen::Screen::reset_line(struct_0 *a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    a0->field_d0 = a0->field_d0.max(a0->field_58);
    if (a1)
    {
        a0.multiline_prompt_hack();
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&a0->field_88);
        a0->field_88 = 0x8000000000000000;
        a0->field_db = 1;
    }
    a0->padding_0[56].resize(0);
    a0->field_da = 1;
    v0 = fish::common::safe_write_loop(1, "\r", 1);
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v0);
    a0->field_60 = 0;
    return a0.save_status();
}
