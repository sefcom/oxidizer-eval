long long bat::assets::build_assets::acknowledgements::handle_file(struct_0 *a0, unsigned long long a1[6])
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax

    v0 = v2;
    if ((char)a1[4].equal(a1[5], "NOTICEERROR: License is of unknown type: ", 6))
    {
        return bat::assets::build_assets::acknowledgements::handle_notice(a0, a1[1], a1[2]);
    }
    else if ((char)::0x810580::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(a1[4], a1[5], "LICENSENOTICEERROR: License is of unknown type: ", 7))
    {
        return bat::assets::build_assets::acknowledgements::handle_license(a0, a1[1], a1[2]);
    }
    else
    {
        a0->field_8 = 0x8000000000000000;
        a0->field_0 = 13;
        return 0x8000000000000000;
    }
}
