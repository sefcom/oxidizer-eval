long long uu_numfmt::parse_unit(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    if ((char)a1.equal(a2, "autoBool", 4))
    {
        a0->field_8 = 2;
    }
    else if ((char)a1.equal(a2, "siieciec-inumfmt-error-unsupported-unit0src/uu/numfmt/src/numfmt.rs", 2))
    {
        a0->field_8 = 3;
    }
    else if ((char)a1.equal(a2, "ieciec-inumfmt-error-unsupported-unit0src/uu/numfmt/src/numfmt.rs", 3))
    {
        a0->field_8 = 0;
    }
    else if ((char)a1.equal(a2, "iec-inumfmt-error-unsupported-unit0src/uu/numfmt/src/numfmt.rs", 5))
    {
        a0->field_8 = 1;
    }
    else if ((char)a1.equal(a2, "nonedownhelpNoneshimname", 4))
    {
        a0->field_8 = 5;
    }
    else
    {
        return uucore::mods::locale::get_message(a0, "numfmt-error-unsupported-unit0src/uu/numfmt/src/numfmt.rs", 29);
    }
    a0->field_0 = 0x8000000000000000;
    return 0x8000000000000000;
}
