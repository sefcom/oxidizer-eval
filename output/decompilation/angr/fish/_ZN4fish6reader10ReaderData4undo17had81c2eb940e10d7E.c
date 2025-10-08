long long fish::reader::ReaderData::undo(void* a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = fish::editable_line::EditableLine::undo();
    if (!(char)v3)
        return v3;
    a0.command_line_changed(a1, 1);
    return v3 & 4294967295;
}
