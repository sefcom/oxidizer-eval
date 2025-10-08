long long uu_tail::uu_tail(struct_0 *a0)
{
    char v0;  // [bp-0x16a]
    char v1;  // [bp-0x169]
    char v2;  // [bp-0x168]
    unsigned long long v3[6];  // [bp-0x160]
    unsigned long v4;  // [bp-0x158]
    char v5;  // [bp-0x150]
    unsigned long long v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb8]
    char v8;  // [bp-0xb0]
    unsigned long long v10;  // rax
    unsigned long long v11;  // r12
    unsigned long long v12;  // r12
    char v13;  // al
    unsigned long long v15;  // rax

    v0 = a0->field_4a;
    v1 = 1;
    v5.from(a0);
    v10 = v5.start(a0);
    if (v10)
    {
        core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(&v5);
        return v10;
    }
    v2.clone(a0->field_20, a0->field_28);
    if (v4)
    {
        v11 = v4 * 48;
        do
        {
            v12 = v11;
            if ((char)(((0 ^ v3[3]) & (0 ^ -(v3[3]))) >> 63))
            {
                v10 = uu_tail::tail_stdin(a0, &v0, v3, &v5);
            }
            else
            {
                v6.to_vec("/dev/stdinToo many open files cannot be used, reverting to polling: Too many open files\ninotifysrc/uu/tail/src/follow/watch.rs has become accessible\n has appeared;  following new file\n has been replaced;  following new file\n: file truncated\n has been repla", 10);
                v13 = v3[4].eq(v3[5], v7, *((long long *)&v8));
                core::ptr::drop_in_place<std::path::PathBuf>(v6, v7);
                v10 = (!v13 ? uu_tail::tail_file(a0, &v0, v3, v3[4], v3[5], &v5, 0) : uu_tail::tail_stdin(a0, &v0, v3, &v5));
            }
            if (v10)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(&v2);
                core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(&v5);
                return v10;
            }
            v3 += 1;
            v11 = v12 - 48;
        } while (v12 != 48);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(&v2);
    if (a0->field_4c != 2 && (!a0.has_only_stdin() || a0->field_44))
    {
        memcpy(&v6, &v5, 144);
        v15 = uu_tail::follow::watch::follow(&v6, a0);
        if (v15)
            return v15;
    }
    uucore::mods::error::get_exit_code();
    core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(&v5);
    return 0;
}
