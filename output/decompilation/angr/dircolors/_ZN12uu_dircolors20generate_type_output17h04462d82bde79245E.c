long long uu_dircolors::generate_type_output(struct_0 *a0, char *a1)
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    int v3;  // [bp-0x28], Other Possible Types: char
    char v4;  // [bp-0x18]

    if (*(a1) == 2)
    {
        v0.collect(_ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E, _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 864);
        alloc::str::join_generic_copy(&v3, v1, v2, "\n:", 1);
    }
    else
    {
        v0.collect(_ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E, _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 864);
        alloc::str::join_generic_copy(&v3, v1, v2, ":", 1);
    }
    a0->field_10 = *((long long *)&v4);
    *((void*)&a0->field_0) = v3;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
    return a0;
}
