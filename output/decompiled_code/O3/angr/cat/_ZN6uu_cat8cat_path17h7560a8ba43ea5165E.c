long long uu_cat::cat_path::h7560a8ba43ea5165(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3, unsigned long long a4, unsigned long long a5[2])
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
    unsigned long long v13;  // rdx

    uu_cat::get_input_type::h65b304ae91bece6f(&v1, a1, a2);
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
        v3 = std::sys::pal::unix::io::is_terminal::hebf61c69dfbeb143();
        v7 = uu_cat::cat_handle::hb940f6761359738b(a0, &v1, a3, a4);
        return v7;
    case 7:
        std::os::unix::net::stream::UnixStream::connect::h74b277a3060a97a1(&v1, a1, a2);
        if (!v1)
        {
            v10 = *((int *)&(&v1)[4]);
            v0 = v10;
            v11 = std::os::unix::net::datagram::UnixDatagram::shutdown::h32e579a9325191d8(&v0, 1);
            if (v11)
            {
                a0->field_0 = 0x8000000000000000;
                *((unsigned long long *)&a0->field_8) = v11;
                v7 = core::ptr::drop_in_place$LT$std..os..unix..net..stream..UnixStream$GT$::hc533b11039ec5fd2(v10);
                return v7;
            }
            v1 = v10;
            v2 = 0;
            uu_cat::cat_handle::hfb0b8ee9d7c77290(a0, &v1, a3, a4);
            v7 = core::ptr::drop_in_place$LT$uu_cat..InputHandle$LT$std..os..unix..net..stream..UnixStream$GT$$GT$::h7710b74f6dbbfca9(v1);
            return v7;
        }
    default:
        std::fs::File::open::h05fe083492c8369d(&v1, a1, a2);
        if (!v1)
        {
            v12 = *((int *)&(&v1)[4]);
            v0 = v12;
            if (a5 && uucore::features::fs::FileInformation::file_size::hd52fbe5e03bc580c(a5))
            {
                uucore::features::fs::FileInformation::from_file::h141a3f618d5fa5d4(&v1, &v0, v13);
                if (*((long long *)&v1))
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::hb965fc295d8f8e8d(&v1);
                    v12 = v0;
                    break;
                }
                else if (*((long long *)&v3) == a5[0] && v5 == a5[1])
                {
                    a0->field_0 = 9223372036854775812;
                    v7 = core::ptr::drop_in_place$LT$std..fs..File$GT$::hc13210182a36c7fc(v12);
                    return v7;
                }
            }
            v1 = v12;
            v2 = 0;
            uu_cat::cat_handle::h5620b39c340a2892(a0, &v1, a3, a4);
            v7 = core::ptr::drop_in_place$LT$uu_cat..InputHandle$LT$std..fs..File$GT$$GT$::h55d90f694d4e4126(v1);
            return v7;
        }
    }
    v7 = *((long long *)&v3);
    a0->field_0 = 0x8000000000000000;
    *((unsigned long long *)&a0->field_8) = v7;
    return v7;
}
