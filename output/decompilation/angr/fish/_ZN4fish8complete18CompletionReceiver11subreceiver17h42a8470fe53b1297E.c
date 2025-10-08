long long fish::complete::CompletionReceiver::subreceiver(struct_0 *a0, unsigned long long a1[4])
{
    unsigned long long v0;  // [bp-0x8]

    if (a1[3] < a1[2])
    {
        v0 = a1[3] - a1[2];
        core::option::expect_failed("length should never be larger than limit", 40, &g_14d5af0); /* do not return */
    }
    a0->field_0 = 0;
    a0->field_8 = 8;
    a0->field_10 = 0;
    a0->field_18 = v0;
    return a0;
}
