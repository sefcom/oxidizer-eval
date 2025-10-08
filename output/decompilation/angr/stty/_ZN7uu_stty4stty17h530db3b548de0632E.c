long long uu_stty::stty(struct_0 *a0)
{
    char v3;  // [bp-0x150]
    unsigned int v6;  // [bp-0x138]
    char v10;  // [bp-0xa8]
    unsigned long long v12;  // rsi
    char *v13;  // rbx
    unsigned long long v14;  // rdx
    unsigned int v16;  // eax
    unsigned int v17;  // eax
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rdx

    if (a0->field_29)
    {
        if (a0->field_28 == 1)
        {
            v12 = "the options for verbose and stty-readable output styles are mutually exclusivewhen specifying an output style, modes may not be setinvalid argument ''";
            v13 = &v3;
            v14 = 78;
        }
        else
        {
            if ((char)(((0 ^ a0->field_0) & (0 ^ -(a0->field_0))) >> 63))
                goto LABEL_4586b2;
LABEL_45870b:
            v12 = "when specifying an output style, modes may not be setinvalid argument ''";
            v13 = &v3;
            v14 = 53;
        }
        v3.to_vec(v12, v14);
        v6 = 1;
        return v13.new();
    }
    else
    {
        if (!((char)(((0 ^ a0->field_0) & (0 ^ -(a0->field_0))) >> 63)) && a0->field_28 == 1)
            goto LABEL_45870b;
LABEL_4586b2:
        v16 = a0->padding_18.as_fd();
        nix::sys::termios::tcgetattr(&v3, v16);
        v10.expect(&v3);
        v17 = uu_stty::print_settings(&v10, a0);
        v18 = "TODO: make proper error here from nix errorspeed  baud; rows ; columns ; line = ;\n";
        v19 = &g_4e2a38;
        v20 = 43;
        v17.expect(v18, v20, v19);
        return 0;
    }
}
