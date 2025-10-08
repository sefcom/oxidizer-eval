long long bat::assets::build_assets::acknowledgements::include_license_in_acknowledgments(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3[10];  // rax
    unsigned long long v4[10];  // rbx
    unsigned int v5;  // eax

    v0 = v2;
    v3 = 8.alloc_impl(80, 0);
    if (!v3)
        alloc::alloc::handle_alloc_error(8, 80); /* do not return */
    v4 = v3;
    v4[0] = "The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.Redistributions in binary form must reproduce the above copyright notice,Apache License Version 2.0, January 2004 http://www.apach";
    v4[1] = 126;
    v4[2] = "Redistributions in binary form must reproduce the above copyright notice,Apache License Version 2.0, January 2004 http://www.apache.org/licenses/Licensed under the Apache License, Version 2.0 (the \"License\");Creative Commons Attribution 4.0 International P";
    v4[3] = 73;
    v4[4] = "Apache License Version 2.0, January 2004 http://www.apache.org/licenses/Licensed under the Apache License, Version 2.0 (the \"License\");Creative Commons Attribution 4.0 International Public LicenseThis is free and unencumbered software released into the pub";
    v4[5] = 72;
    v4[6] = "Licensed under the Apache License, Version 2.0 (the \"License\");Creative Commons Attribution 4.0 International Public LicenseThis is free and unencumbered software released into the public domain.DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSEPermission to copy";
    v4[7] = 63;
    v4[8] = "Creative Commons Attribution 4.0 International Public LicenseThis is free and unencumbered software released into the public domain.DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSEPermission to copy, use, modify, sell and distribute this software is granted. Th";
    v4[9] = 61;
    v5 = bat::assets::build_assets::acknowledgements::license_contains_marker(a0, a1, v4, 5);
    core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(5, v4);
    return v5;
}
