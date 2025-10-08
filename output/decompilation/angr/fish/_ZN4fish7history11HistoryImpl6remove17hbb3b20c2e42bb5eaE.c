long long fish::history::HistoryImpl::remove(unsigned long long a0[23], unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x88]
    char v1;  // [bp-0x80]
    void* v3;  // r13
    unsigned long long v4;  // rax
    unsigned long long v5;  // r12
    unsigned long v6;  // r12
    unsigned long long *v7;  // r13
    unsigned long v8;  // r12

    v1.to_vec(a1, a2);
    v3 = 0;
    v4 = a0[16].insert(&v1, 0);
    v5 = a0[10];
    if (v5)
    {
        v0 = &a0[8];
        v6 = v5 - 1;
        v7 = v5 * 80 - 64;
        do
        {
            v8 = v6;
            if (v8 >= a0[10])
                core::panicking::panic_bounds_check(v8, a0[10], &g_14d9ef8); /* do not return */
            v4 = *((long long *)(-8 + a0[9] + (char *)v7)).equal(*((long long *)(a0[9] + (char *)v7)), a1, a2);
            if ((char)v4)
            {
                v1.remove(v0, v8, &g_14d9f10);
                core::ptr::drop_in_place<fish::history::HistoryItem>(&v1);
                v4 = a0[22];
                if (v8 < v4)
                {
                    v4 -= 1;
                    a0[22] = v4;
                }
            }
            v7 += 10;
            v6 = v8 - 1;
        } while ((char)__CFADD__(v8, -1));
        v3 = a0[10];
    }
    if (a0[22] > v3)
        core::panicking::panic("assertion failed: self.first_unwritten_new_item_index <= self.new_items.len()assertion failed: self.disable_automatic_save_counter > 0", 77, &g_14d9ee0); /* do not return */
    return v4;
}
