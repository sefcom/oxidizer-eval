int uu_cat::write_fast()
{
    unsigned long long v0;  // [bp-0x10040]
    unsigned long long v1;  // [bp-0x10038]
    unsigned long long v2;  // [bp-0x10030]
    char v3;  // [bp-0x10028]
    char v4;  // [bp-0x10027]
    unsigned long long v5;  // [bp-0x10020]
    void* v6;  // [bp-0x2030]
    unsigned long long v8;  // r15
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rdx
    unsigned long long v16;  // rdi
    unsigned long long v18;  // rdx
    struct_0 *v19;  // rdi

    do
    {
        v6 = 0;
    } while (&v6 != &v2);
    v1 = std::io::stdio::stdout();
    v8 = v1.lock();
    v0 = v8;
    uu_cat::splice::write_fast_using_splice(&v2, v9, &v0);
    if (v2 != 9223372036854775814)
    {
        v18 = *((long long *)&v4);
        v19->field_9 = v5;
        *((unsigned long long *)&(&v19->field_8)[1]) = v18;
        v19->field_0 = v2;
        v19->field_8 = v3;
        v16 = v8;
    }
    else if ((v3 & 1))
    {
        memset(&v2, 0, 0x10000);
        while (true)
        {
            v11 = v10;
            if (v9.read(&v2, 0x10000))
            {
LABEL_49dedc:
                v19->field_0 = 0x8000000000000000;
                *((unsigned long long *)&v19->field_8) = v11;
                goto LABEL_49dee7;
            }
            if (!v10)
                break;
            v11 = v0.write_all(v10.index(&v2, 0x10000, &g_572e90), v10);
            if (!(!v11))
                goto LABEL_49dedc;
        }
        if (!(!v0.flush()))
            goto LABEL_49dedc;
        v19->field_0 = 9223372036854775814;
LABEL_49dee7:
        v16 = v0;
    }
    else
    {
        v19->field_0 = 9223372036854775814;
        v16 = v8;
    }
    ::0x49b820::core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v16);
    return;
}
