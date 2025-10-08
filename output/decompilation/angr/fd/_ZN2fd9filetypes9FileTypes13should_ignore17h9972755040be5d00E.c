long long fd::filetypes::FileTypes::should_ignore(char a0[9], void* a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned int v3;  // ebx
    unsigned int v4;  // ebx
    unsigned int v5;  // edx
    unsigned int v6;  // eax
    unsigned long long v7;  // rdx
    unsigned int v8;  // edx

    v0 = v2;
    v4 = v3 & 0xffffff00 | 1;
    if (((char)a1.file_type() & 1))
    {
        v6 = v5 & 0xf000;
        if ((v6 != 0x8000 || a0[0]) && (v6 != 0x4000 || a0[1]) && (v6 != 0xa000 || a0[2]) && (v6 != 0x6000 || a0[3]) && (v6 != 0x2000 || a0[4]) && (v6 != 0xc000 || a0[5]) && (v6 != 0x1000 || a0[6]) && (!a0[7] || (char)a1.path().executable(v7)))
        {
            if (!a0[8] || (char)fd::filesystem::is_empty(a1))
                v4 = ((v8 & 0xd000) == 0x8000 ? 0 : (unsigned int)(64158 >> ((char)(v8 + 0x4000 >> 12) & 31)));
        }
    }
    return v4 & 0xffffff00 | 1;
}
