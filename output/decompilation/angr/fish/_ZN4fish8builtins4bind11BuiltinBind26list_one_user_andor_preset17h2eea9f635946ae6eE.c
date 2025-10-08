long long fish::builtins::bind::BuiltinBind::list_one_user_andor_preset(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, char a6, unsigned long long a7, unsigned long long a8, char a9)
{
    unsigned long v0;  // rbx
    unsigned long long v1;  // rax

    if (a6)
    {
        v0 = (unsigned int)a0.list_one(a1, a2, a3, a4, 0, a7, a8, a9);
        if (a5)
            goto LABEL_133d864;
    }
    else
    {
        v0 = 0;
        if (a5)
        {
LABEL_133d864:
            v1 = a0.list_one(a1, a2, a3, a4, 1, a7, a8, a9);
            v0 = (unsigned int)v1 & 0xffffff00 | (char)v1 | (char)v0;
        }
    }
    return v0 & 4294967295;
}
