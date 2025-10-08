long long bat::assets::build_assets::acknowledgements::license_not_needed_in_acknowledgements(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3[6];  // rax
    unsigned long long v4[6];  // rbx
    unsigned int v5;  // eax

    v0 = v2;
    v3 = 8.alloc_impl(48, 0);
    if (!v3)
        alloc::alloc::handle_alloc_error(8, 48); /* do not return */
    v4 = v3;
    v4[0] = "This is free and unencumbered software released into the public domain.DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSEPermission to copy, use, modify, sell and distribute this software is granted. This software is provided \"as is\" without express or implied wa";
    v4[1] = 71;
    v4[2] = "DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSEPermission to copy, use, modify, sell and distribute this software is granted. This software is provided \"as is\" without express or implied warranty, and with no claim as to its suitability for any purpose.## ";
    v4[3] = 43;
    v4[4] = "Permission to copy, use, modify, sell and distribute this software is granted. This software is provided \"as is\" without express or implied warranty, and with no claim as to its suitability for any purpose.## ";
    v4[5] = 206;
    v5 = bat::assets::build_assets::acknowledgements::license_contains_marker(a0, a1, v4, 3);
    core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(3, v4);
    return v5;
}
