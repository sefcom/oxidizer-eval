long long fish::key::canonicalize_keyed_control_char(unsigned int a0)
{
    struct_0 *v1;  // rax

    if (a0 == (int)fish::key::ascii_control(109))
    {
        return 62723;
    }
    else if (a0 == (int)fish::key::ascii_control(105))
    {
        return 62733;
    }
    else if (a0 != 32)
    {
        v1 = fish::reader::safe_get_terminal_mode_on_startup();
        if (v1 && a0 == v1->field_13)
            return 0xf500;
        switch (a0)
        {
        case 127:
            return 62721;
        case 27:
            return a0;
        default:
            return a0;
        }
    }
    else
    {
        return 62734;
    }
}
