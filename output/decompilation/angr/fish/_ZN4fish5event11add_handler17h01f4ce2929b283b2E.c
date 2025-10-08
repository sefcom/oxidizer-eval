long long fish::event::add_handler(struct_0 *a0)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x68]
    int v2;  // [bp-0x60]
    int v3;  // [bp-0x50]
    int v4;  // [bp-0x40]
    int v5;  // [bp-0x30]
    unsigned long long v7;  // r14
    char v9;  // dl

    if (a0->field_10[2] == 1)
    {
        fish::signal::signal_handle(a0->field_10[3]);
        fish::event::inc_signal_observed(a0->field_10[3]);
    }
    v0.lock();
    v7 = v0.expect(&g_14d7798);
    v0 = 1;
    v1 = 1;
    *((uint128_t *)&v2) = a0->field_0;
    *((unsigned int [4])&v3) = a0->field_10;
    *((int128_t *)&v4) = *((int128_t *)&a0->field_18);
    *((uint128_t *)&v5) = a0->field_20;
    v7 + 8.push(v0.new());
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v7, v9 & 1);
}
