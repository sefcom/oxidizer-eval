void fd::walk::ReceiverBuffer<W>::recv(void* a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rax

    if (a1->field_80 != 1)
    {
        a0.recv_deadline(a1->field_0);
        return;
    }
    v0 = v2;
    v3 = (unsigned long long)a1->field_0.recv();
    if (v3)
    {
        *((unsigned long long *)&a0[8]) = v3;
        *((char *)a0) = 0;
    }
    else
    {
        *((unsigned short *)a0) = 257;
    }
    return;
}
