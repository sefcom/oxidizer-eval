long long fd::walk::ReceiverBuffer<W>::process(struct_0 *a0)
{
    unsigned long long v1;  // rax

    do
    {
        v1 = a0.poll();
    } while ((char)v1 == 6);
    core::sync::atomic::atomic_store(a0->field_68, 1, 0);
    return v1 & 4294967295;
}
