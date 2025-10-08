long long uu_od::parse_nrofbytes::parse_number_of_bytes(unsigned long long a0[2], unsigned long long a1, unsigned long a2)
{
    char v0;  // [bp-0x61]
    unsigned int v1;  // [bp-0x54]
    unsigned int v2;  // [bp-0x50]
    int v3;  // [bp-0x4f]
    unsigned long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v8;  // r12
    unsigned long long v9;  // rax
    unsigned long long v10;  // r13
    unsigned int v11;  // edx
    unsigned long v12;  // rbp
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18[2];  // rbx
    unsigned long long v19;  // rax
    unsigned long long v21;  // cc_ndep

    v8 = 2;
    if (!(char)core::slice::<impl [T]>::starts_with(a1, a2, "0x0Xparse failednulsohstxetxeotenqackbelbshtnlvtffcrsosidledc1dc2dc3dc4naksynetbcanemsubescfsgsrsussp!\"$%&\'*+,./012", 2))
    {
        v8 = 2;
        if (!(char)core::slice::<impl [T]>::starts_with(a1, a2, "0Xparse failednulsohstxetxeotenqackbelbshtnlvtffcrsosidledc1dc2dc3dc4naksynetbcanemsubescfsgsrsussp!\"$%&\'*+,./012", 2))
        {
            v2 = 0;
            if ((char)core::slice::<impl [T]>::starts_with(a1, a2, ::0x465460::core::char::methods::encode_utf8_raw(48, &(char)v2), 1))
            {
                v8 = 0;
            }
            else
            {
                v9 = a1.as_ref(a2);
                if (!v9)
                    core::str::slice_error_fail(a1, a2, 0, a2, &g_502798); /* do not return */
                return uucore::features::parser::parse_size::parse_size_u64(a0, v9, a2);
            }
        }
    }
    v5 = a1;
    v6 = a1 + a2;
    v10 = 1;
    if (((char)core::str::validations::next_code_point_reverse(&v5) & 1))
    {
        switch (v11)
        {
        case 66:
            v12 = a2;
            goto LABEL_46adbe;
        case 69:
            v10 = 0x1000000000000000;
            break;
        case 71:
            v12 = a2 - 1;
            v10 = 0x40000000;
            goto LABEL_46adbe;
        case 75: case 107:
            v12 = a2 - 1;
            v10 = 0x400;
            goto LABEL_46adbe;
        case 77: case 109:
            v12 = a2 - 1;
            v10 = 0x100000;
            goto LABEL_46adbe;
        case 80:
            v12 = a2 - 1;
            v10 = 0x4000000000000;
            goto LABEL_46adbe;
        case 84:
            v12 = a2 - 1;
            v10 = 0x10000000000;
            goto LABEL_46adbe;
        case 98:
            v10 = 0x200;
            break;
        default:
            v12 = a2;
            goto LABEL_46adbe;
        }
        v10 = 1;
        v12 = a2 - 0;
    }
    else
    {
        v12 = a2;
    }
LABEL_46adbe:
    v15 = v8.get(v12, a1, a2);
    if (!v15)
        core::str::slice_error_fail(a1, a2, v8, v12, &g_5027b0); /* do not return */
    ::0x464330::core::num::<impl u64>::from_ascii_radix(&(char)v2, v15, a2, v1);
    if ((char)v2)
    {
        v0 = (char)v3;
        v16 = a0[1].spec_to_string(&v0);
        a0[0] = 1;
        return v16;
    }
    v17 = v10;
    if ((char)_ccall(0, 48, v17, v4, v21))
    {
        v18 = a0;
        a0[1].to_vec(a1, a2);
        v19 = 2;
    }
    else
    {
        v18 = a0;
        a0[1] = v17 * v4;
        v19 = 4;
    }
    v18[0] = v19;
    return v19;
}
