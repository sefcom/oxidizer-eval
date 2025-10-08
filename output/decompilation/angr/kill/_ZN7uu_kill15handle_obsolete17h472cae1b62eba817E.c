long long uu_kill::handle_obsolete(struct_0 *a0)
{
    unsigned int v0;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx

    if (a0->field_10 >= 3)
    {
        v0 = 0;
        v3 = ::0x45b770::core::char::methods::encode_utf8_raw(&v0).strip_prefix_of(a0->field_8->field_20, a0->field_8->field_28);
        if (v3)
        {
            v0 = v3;
            v1 = v3 + v4;
            if ((!((char)core::str::validations::next_code_point(&v0) & 1) || (unsigned int)v4 - 97 >= 26 && ((unsigned int)v4 < 128 || !(char)core::unicode::unicode_data::lowercase::lookup((unsigned int)v4))) && uucore::features::signals::signal_by_name_or_value(v0, v4) == 1)
            {
                v0.remove(a0);
                core::ptr::drop_in_place<alloc::string::String>(v0, v1);
                return 1;
            }
        }
    }
    return 0;
}
