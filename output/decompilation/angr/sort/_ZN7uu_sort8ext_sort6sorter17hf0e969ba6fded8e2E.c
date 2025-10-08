void uu_sort::ext_sort::sorter(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0[6];  // [bp-0x48]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v3[6];  // rax

    v0[0] = a0.recv(a1);
    if (v0)
    {
        do
        {
            uu_sort::sort_by(v3[4], v3[5], a4, v3 + 1);
            v1 = a2.send(a3, v3);
            core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::Chunk>>>(&v1);
            if (v1)
                return;
            v3 = a0.recv(a1);
            v0[0] = v3;
        } while (v0);
    }
    core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v0);
    return;
}
