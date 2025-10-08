char fish::parser::Parser::sync_uvars_and_fire(void* a0, char a1)
{
    char v0;  // [bp-0xe0]
    int v1;  // [bp-0xe0]
    int v2;  // [bp-0xd0]
    int v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb0]
    char v5;  // [bp-0xa8]
    int v6;  // [bp-0x88]
    int v7;  // [bp-0x78]
    int v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x58]
    char v10;  // [bp-0x48]
    char v12;  // al

    v12 = a0 + 609.load();
    if (!v12)
        return v12;
    v10.universal_sync(a0 + 472, a1);
    v5.into_iter(&v10);
    (char)v1.next(&v5);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
        return (char)core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::event::Event>>(&v5);
    do
    {
        v9 = v4;
        v8 = v3;
        v7 = v2;
        v6 = v1;
        fish::event::fire(a0, &v6);
        (char)v1.next(&v5);
    } while ((long long)v1 != 0x8000000000000000);
    return (char)core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::event::Event>>(&v5);
}
