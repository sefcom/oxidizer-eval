long long fish::input::EventQueuePeeker<Queuer>::try_peek_sequence(struct_0 *a0, char a1, void* a2, unsigned long a3, unsigned long long a4)
{
    void* v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    void* v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    char v5;  // [bp-0x60]
    char v6;  // [bp-0x48]
    void* v8;  // rbx
    char v9;  // al
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    void* v13;  // rbx

    v3 = 62975;
    if (a1)
    {
        v8 = 0;
        do
        {
            v4 = 62722;
            v9 = v3.eq(&v4);
            v10 = *((long long *)(a2 + v8));
            v11 = a0.next_is_char(a1, v10, v9);
            if ((char)v11 == 4)
                goto LABEL_13c745e;
            a4.push(v11 & 4294967295);
            v3 = v10;
            v8 += 8;
        } while (a3 * 8 != v8);
    }
    else if ((char)a0.next_is_char(0, *((long long *)a2), 0) != 4)
    {
        v13 = 8;
        v10 = 0;
        while (true)
        {
            a4.push(v12 & 4294967295);
            if (a3 * 8 == v13)
                break;
            v12 = a0.next_is_char(0, *((long long *)(a2 + v13)), 0);
            v13 += 8;
            if ((char)v12 == 4)
                return 0;
        }
    }
    else
    {
        return 0;
    }
    if (a0->field_28)
    {
        v10 = 0;
        if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v5.to_flog_str(&g_15a99a0);
            v4.into_iter(&v5);
            v0.spec_extend(&v4);
            v0.push(58, &g_14dada0);
            v0.push(32, &g_14dada0);
            v6.to_vec("legacy binding matched prefix of key encoding but did not consume all of ittorn sequence, rearranging eventsEvents left on the queue - missing restart or consume?-- ", 75);
            v4.into_iter(&v6);
            v0.spec_extend(&v4);
            v0.push(10, &g_14dada0);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
LABEL_13c745e:
            v10 = 0;
        }
    }
    else
    {
        v10 = v10 & 0xffffffffffffff00 | 1;
    }
    return v10 & 4294967295;
}
