long long fish::wutil::dir_iter::DirIter::next(struct_1 *a0)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    char v1;  // [bp-0x28]
    void* v3;  // rax
    void* v4;  // r14
    unsigned long v5;  // r15
    unsigned long long v6;  // r12
    char v7;  // al
    char v8;  // cl

    errno::set_errno(0);
    v3 = readdir(a0->field_48->field_10);
    if (!v3)
        return (!(int)errno::errno() ? 2 : 1);
    v4 = v3;
    v5 = v3 + 19;
    v6 = strlen(v5);
    if (!a0->field_50)
    {
        if (v6 != 1)
        {
            if (v6 == 2 && *((short *)v5) == 11822)
                goto LABEL_12e8bd6;
        }
        else
        {
            if (*((char *)v5) == 46)
            {
LABEL_12e8bd6:
                return a0.next();
            }
        }
    }
    a0.reset();
    fish::common::str2wcstring(&v0, v5, v6);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
    a0->field_10 = *((long long *)&v1);
    *((void*)&a0->field_0) = v0;
    a0->field_20 = *((long long *)v4);
    switch ((char)v4[18])
    {
    case 6:
        v7 = 4;
        break;
    case 8:
        v7 = 5;
        break;
    case 10:
        v8 = 1;
    case 12:
        v7 = 7;
        break;
    case 4:
        v7 = 3;
    case 1: case 2:
    default:
        v8 = 2;
    }
}
