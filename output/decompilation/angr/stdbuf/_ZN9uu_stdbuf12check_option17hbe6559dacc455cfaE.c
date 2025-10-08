long long uu_stdbuf::check_option(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x50]
    unsigned long long v2[3];  // rax

    v0.try_get_one(a1, a2, a3);
    v2 = a2.unwrap(a3, &v0);
    if (!v2)
    {
        a0->field_8 = 0;
    }
    else if ((char)v2[1].equal(v2[2], "Lline buffering stdin is meaninglessinvalid mode ", 1))
    {
        if ((char)a2.equal(a3, "inputoutputerrorLline buffering stdin is meaninglessinvalid mode ", 5))
            return a0.to_vec("line buffering stdin is meaninglessinvalid mode ", 35);
        a0->field_8 = 1;
    }
    else
    {
        uucore::features::parser::parse_size::parse_size_u64(&v0, v2[1], v2[2]);
        return a0.map_or_else(&v0);
    }
    a0->field_0 = 0x8000000000000000;
    return 0x8000000000000000;
}
