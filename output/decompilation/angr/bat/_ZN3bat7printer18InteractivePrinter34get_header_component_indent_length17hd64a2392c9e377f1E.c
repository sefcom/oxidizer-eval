long long bat::printer::InteractivePrinter::get_header_component_indent_length(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    char v3;  // al
    unsigned long v4;  // rcx

    v0 = v2;
    v3 = a0 + 192.grid();
    v4 = a1 + 2;
    if (!a1)
        v4 = 0;
    if (v3)
        return v4;
    return a1;
}
