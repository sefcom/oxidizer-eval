long long bat::input::new_file_input(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xd0]
    unsigned long long v2;  // rbx
    unsigned long long v3;  // 4096

    v0.ordinary_file(a1, a2);
    if (!a3)
    {
        v2 = a2;
        if (a3)
            goto LABEL_7ad6a6;
LABEL_7ad6a5:
        v3 = a1;
    }
    else
    {
        v2 = a4;
        if (!a3)
            goto LABEL_7ad6a5;
LABEL_7ad6a6:
        v3 = a3;
    }
    return bat::input::named(a0, &v0, v3, v2);
}
