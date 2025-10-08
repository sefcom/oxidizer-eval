long long uu_more::paging_add_back_message(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rax

    if (!a0->field_20)
        return 0;
    v0 = v2;
    v3 = crossterm::command::write_command_ansi(a1);
    if (!v3)
    {
        v3 = a1.flush();
        if (!v3)
        {
            v3 = a1.write_all("\n\r...back 1 page\n", 17);
            if (!v3)
                return 0;
        }
    }
    return v3.from();
}
