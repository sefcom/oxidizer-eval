long long uu_cat::cat_path::h3f1de2b8bdfd86c8(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3, unsigned long long a4, unsigned long long a5[2])
{
    unsigned long v0;  // [bp-0xd8], Other Possible Types: unsigned int
    char v1;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned int
    char v2;  // [sp-0xc4]
    char v3;  // [sp-0xc0]
    char v4;  // [bp-0xbf]
    unsigned long v5;  // [bp-0xb8]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rdx
    unsigned int v10;  // ebp
    unsigned long long v11;  // rax
    unsigned int v12;  // ebp

    uu_cat::get_input_type::h6ff27855215d6960(&v1, a1, a2);
    v7 = *((long long *)&v1);
    v8 = v3;
    if (v7 != 9223372036854775814)
    {
        v9 = *((long long *)&v4);
        a0->field_9 = v5;
        *((unsigned long long *)&(&a0->field_8)[1]) = v9;
        a0->field_0 = v7;
        a0->field_8 = v8;
        return v7;
    }
    v7 = v8 & 4294967295;
    switch ((unsigned int)v7)
    {
    case 0:
        a0->field_0 = 9223372036854775811;
        return v7;
    case 2:
        v0 = std::io::stdio::stdin::h7215cc131abb55d8();
        v1 = std::io::stdio::stdin::h7215cc131abb55d8();
        v3 = std::sys::pal::unix::io::is_terminal::h1ed5dafcafc72212();
        v7 = uu_cat::cat_handle::h2310985edbce98d4(a0, &v1, a3, a4);
        return v7;
    case 7:
        std::os::unix::net::stream::UnixStream::connect::he27f40a192a8e4eb(&v1, a1, a2);
        if (!v1)
        {
            v10 = *((int *)&(&v1)[4]);
            v0 = v10;
            v11 = std::os::unix::net::datagram::UnixDatagram::shutdown::h32e579a9325191d8(&v0, 1);
            if (v11)
            {
                a0->field_0 = 0x8000000000000000;
                *((unsigned long long *)&a0->field_8) = v11;
                v7 = core::ptr::drop_in_place$LT$std..os..unix..net..stream..UnixStream$GT$::ha55321e5b25e8ec9();
                return v7;
            }
            v1 = v10;
            v2 = 0;
            uu_cat::cat_handle::hd11b5f8e6960e509(a0, &v1, a3, a4);
            v7 = core::ptr::drop_in_place$LT$uu_cat..InputHandle$LT$std..os..unix..net..stream..UnixStream$GT$$GT$::ha5653865c3424521();
            return v7;
        }
    default:
        std::fs::File::open::h11d1745ffe6524fc(&v1, a1, a2);
        if (!v1)
        {
            v12 = *((int *)&(&v1)[4]);
            v0 = v12;
            if (a5 && uucore::features::fs::FileInformation::file_size::h0d1880e968de69d5(a5))
            {
                uucore::features::fs::FileInformation::from_file::hbfeeabf3f9b0206f(&v1, &v0);
                if (*((long long *)&v1))
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h88aced0ed65ad377(&v1);
                    v12 = v0;
                    break;
                }
                else if (*((long long *)&v3) == a5[0] && v5 == a5[1])
                {
                    a0->field_0 = 9223372036854775812;
                    v7 = core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f();
                    return v7;
                }
            }
            v1 = v12;
            v2 = 0;
            uu_cat::cat_handle::h13bdbf50278acfc8(a0, &v1, a3, a4);
            v7 = core::ptr::drop_in_place$LT$uu_cat..InputHandle$LT$std..fs..File$GT$$GT$::hc879bc74ba17ed2f();
            return v7;
        }
    }
    v7 = *((long long *)&v3);
    a0->field_0 = 0x8000000000000000;
    *((unsigned long long *)&a0->field_8) = v7;
    return v7;
}
