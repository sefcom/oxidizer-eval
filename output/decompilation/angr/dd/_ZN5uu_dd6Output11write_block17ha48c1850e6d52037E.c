long long uu_dd::Output::write_block(struct_1 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x40]
    void* v2;  // rbx
    unsigned long long v3;  // rdx

    v0 = a1;
    v2 = 0;
    do
    {
        while (((char)a0.write() & 1))
        {
            if ((char)v3.kind() == 35)
                core::ptr::drop_in_place<std::io::error::Error>(&v3);
            else
                return 1;
        }
        v2 += v3;
    } while ((v2 >= a2 || !a0->field_10->field_4d) && a0->field_10->field_4d);
    return 0;
}
