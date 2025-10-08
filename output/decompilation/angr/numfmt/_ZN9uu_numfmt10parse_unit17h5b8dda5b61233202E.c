long long uu_numfmt::parse_unit(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    if ((char)a1.equal(a2, "autoBool", 4))
    {
        a0->field_8 = 2;
    }
    else if ((char)a1.equal(a2, "siieciec-i0invalid unit size: src/uu/numfmt/src/numfmt.rs", 2))
    {
        a0->field_8 = 3;
    }
    else if ((char)a1.equal(a2, "ieciec-i0invalid unit size: src/uu/numfmt/src/numfmt.rs", 3))
    {
        a0->field_8 = 0;
    }
    else if ((char)a1.equal(a2, "iec-i0invalid unit size: src/uu/numfmt/src/numfmt.rs", 5))
    {
        a0->field_8 = 1;
    }
    else if ((char)a1.equal(a2, "nonedownhelpNoneshim", 4))
    {
        a0->field_8 = 5;
    }
    else
    {
        return a0.to_vec("Unsupported unit is specifiedsiieciec-i0invalid unit size: src/uu/numfmt/src/numfmt.rs", 29);
    }
    a0->field_0 = 0x8000000000000000;
    return 0x8000000000000000;
}
