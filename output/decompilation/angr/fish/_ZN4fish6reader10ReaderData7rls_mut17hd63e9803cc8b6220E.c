long long fish::reader::ReaderData::rls_mut(struct_0 *a0)
{
    void* v0;  // [bp-0x8]

    if ((char)(((0 ^ a0->field_7e8) & (0 ^ -(a0->field_7e8))) >> 63))
    {
        v0 = 0;
        core::option::unwrap_failed(&g_14dfd48); /* do not return */
    }
    return &a0->field_7e8;
}
