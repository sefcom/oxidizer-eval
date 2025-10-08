long long fish::reader::ReaderData::redo(void* a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    void* v3;  // rdi
    void* v4;  // 4096
    unsigned long long v5;  // rax

    v0 = v2;
    v3 = a0 + 368;
    if (!a1)
        v4 = a0;
    else
        v4 = v3;
    v5 = v4.redo();
    if (!(char)v5)
        return v5;
    a0.command_line_changed(a1, 1);
    return v5 & 4294967295;
}
