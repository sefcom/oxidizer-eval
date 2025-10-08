void fish::input::EventQueuePeeker<Queuer>::consume(void* a0)
{
    char v0;  // [bp-0x38]
    unsigned long long v2;  // rdi
    void* v3;  // rsi

    v0.drain(a0, (long long)a0[32]);
    *((long long *)(long long)a0[24]).insert_front(&v0);
    v2 = (long long)a0[8];
    v3 = (long long)a0[16];
    *((unsigned long long *)&a0[16]) = 0;
    core::ptr::drop_in_place<[fish::input_common::CharEvent]>(v2, v3);
    *((uint128_t *)&a0[32]) = 0;
    core::ptr::drop_in_place<fish::input::EventQueuePeeker<fish::reader::Reader>>(a0);
    return;
}
