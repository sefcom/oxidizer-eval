void uu_sort::ext_sort::sorter(unsigned long long a0, unsigned long long a1, char a2[133])
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v4;  // rax

    v0 = a0.recv(a1, a2);
    if (v0)
    {
        do
        {
            v1 = v4;
            uu_sort::sort_by(v4 + 24, a2, v4 + 48);
            v2 = a1.send(v1, a2);
            core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::Chunk>>>(&v2);
            if (v2)
                return;
            v4 = a0.recv(a1, a2);
            v0 = v4;
        } while (v0);
    }
    ::0x54e670::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v0);
    return;
}
