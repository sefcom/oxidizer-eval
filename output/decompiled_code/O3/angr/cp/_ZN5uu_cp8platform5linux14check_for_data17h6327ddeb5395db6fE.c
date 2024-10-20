long long uu_cp::platform::linux::check_for_data::h6327ddeb5395db6f(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0xe4]
    char v1;  // [bp-0xe0]
    char v2;  // [bp-0xdc]
    char v3;  // [bp-0xd8]
    unsigned long long v4;  // [sp-0xd0]
    char v5;  // [bp-0xc8], Other Possible Types: unsigned int
    unsigned short v6;  // [sp-0xc4]
    char v7;  // [bp-0x80]
    char v8;  // [bp-0x78]
    char v9;  // [bp-0x70]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // r14
    unsigned long long v14;  // r15
    unsigned long long v15;  // rax
    unsigned long long v16;  // r14
    char *v17;  // r15
    unsigned long v18;  // rdx
    char *v19;  // rcx
    char *v20;  // rax

    v4 = 0x1b600000000;
    v5 = 0;
    v6 = 0;
    v5 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v1, &v4, a1, a2);
    if (*((int *)&v1))
    {
        v11 = *((long long *)&v3);
        a0->field_0 = v11;
        a0->field_8 = 2;
        return v11;
    }
    v0 = *((int *)&v2);
    std::fs::File::metadata::he899a18112e6f19e(&v4, &v0);
    if ((int)v4 == 2)
    {
        v12 = *((long long *)&v5);
        goto LABEL_4c7063;
    }
    else
    {
        v13 = *((long long *)&v7);
        if (!v13)
        {
            v16 = *((long long *)&v8);
            if (!v16)
            {
                v17 = 1;
            }
            else if (v16 < 0)
            {
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            }
            else
            {
                v17 = __rust_alloc_zeroed(v16, 1);
                if (!v17)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            }
            if (_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(&v0, v17, v16))
            {
                a0->field_0 = v18;
                a0->field_8 = 2;
                if (!(!v16))
                    goto LABEL_4c7172;
            }
            else
            {
                v19 = 0;
                do
                {
                    v20 = v19;
                } while (v16 != v20 && (v19 = v20 + 1, !*((char *)(v17 + v20))));
                a0->field_0 = 0;
                a0->field_8 = v16 != v20;
                a0->field_10 = 0;
                if (v16)
                {
LABEL_4c7172:
                    __rust_dealloc(v17);
                }
            }
        }
        else
        {
            v14 = *((long long *)&v9);
            v15 = lseek(v0, 0, 3);
            if (v15 == -1)
            {
                a0->field_0 = v13;
                a0->field_8 = 0;
                a0->field_10 = v14;
            }
            else if (v15 >= 0)
            {
                a0->field_0 = v13;
                a0->field_8 = 1;
                a0->field_10 = v14;
            }
            else
            {
                v12 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() * 0x100000000 | 2;
LABEL_4c7063:
                a0->field_0 = v12;
                a0->field_8 = 2;
            }
        }
        v11 = close(v0);
        return v11;
    }
}
