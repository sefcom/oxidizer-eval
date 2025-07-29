long long uu_csplit::SplitWriter::writeln(struct_0 *a0, void* a1, unsigned long a2)
{
    char v0;  // [bp-0x30]
    unsigned long long v2;  // r15
    unsigned long long v3;  // rax

    if (!a0->field_38)
    {
        if (!((char)(((0 ^ a0->field_0) & (0 ^ -(a0->field_0))) >> 63)))
        {
            v2 = a0->field_10;
            if (a0->field_0 - v2 > a2)
            {
                memcpy(a0->field_8 + v2, a1, a2);
                a0->field_10 = v2 + a2;
            }
            else
            {
                v3 = a0.write_all_cold(a1, a2);
                if (v3)
                    return v3;
            }
            a0->field_30 = a0->field_30 + a2;
        }
        else
        {
            uucore::mods::locale::get_message(&v0, "csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 30);
            uu_csplit::SplitWriter::writeln::panic_cold_display(&v0); /* do not return */
        }
    }
    return 0;
}
