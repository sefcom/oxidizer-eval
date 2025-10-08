long long fish::input::init_input()
{
    void* v0;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long *v1;  // [bp-0x50], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    struct_0 *v5;  // [bp-0x30]
    char v6;  // [bp-0x28]
    unsigned long long v8;  // rax
    char v9;  // dl
    unsigned long long *v10;  // rax
    unsigned long long *v11;  // rax
    unsigned long long *v12;  // rax
    unsigned long long *v13;  // rax
    unsigned long long *v14;  // rax
    unsigned long long *v15;  // rax
    unsigned long long *v16;  // rax
    unsigned long long *v17;  // rax
    unsigned long long *v18;  // rax
    unsigned long long *v19;  // rax
    unsigned long long *v20;  // rax
    unsigned long long *v21;  // rax
    unsigned long long *v22;  // rax
    unsigned long long *v23;  // rax
    unsigned long long *v24;  // rax
    unsigned long long *v25;  // rax

    fish::threads::assert_is_main_thread();
    v8 = _ZN4fish5input10init_input4DONE17he104b171191e6153E.swap(1);
    if ((char)v8)
        return v8;
    v5 = fish::input::input_mappings();
    v6 = v9 & 1;
    if (v5->field_30)
    {
        return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v5, v9 & 1);
    }
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v3 = "self-insertexecutecancel-commandlinepager-toggle-searchbackward-kill-linebackward-delete-charup-linedown-lineforward-charbackward-char";
    v4 = 11;
    fish::input::init_input::{{closure}}(&v5, &v0, "self-insertexecutecancel-commandlinepager-toggle-searchbackward-kill-linebackward-delete-charup-linedown-lineforward-charbackward-char", 11);
    v10 = 4.alloc_impl(8, 0);
    if (v10)
    {
        *(v10) = 62723;
        v0 = 1;
        v1 = v10;
        v2 = 1;
        v3 = "executecancel-commandlinepager-toggle-searchbackward-kill-linebackward-delete-charup-linedown-lineforward-charbackward-char";
        v4 = 7;
        fish::input::init_input::{{closure}}(&v5, &v0, "executecancel-commandlinepager-toggle-searchbackward-kill-linebackward-delete-charup-linedown-lineforward-charbackward-char", 7);
        v11 = 4.alloc_impl(8, 0);
        if (v11)
        {
            *(v11) = 62733;
            v0 = 1;
            v1 = v11;
            v2 = 1;
            v3 = "complete:";
            v4 = 8;
            fish::input::init_input::{{closure}}(&v5, &v0, "complete:", 8);
            v12 = 4.alloc_impl(8, 0);
            if (v12)
            {
                *(v12) = 4294967395;
                v0 = 1;
                v1 = v12;
                v2 = 1;
                v3 = "cancel-commandlinepager-toggle-searchbackward-kill-linebackward-delete-charup-linedown-lineforward-charbackward-char";
                v4 = 18;
                fish::input::init_input::{{closure}}(&v5, &v0, "cancel-commandlinepager-toggle-searchbackward-kill-linebackward-delete-charup-linedown-lineforward-charbackward-char", 18);
                v13 = 4.alloc_impl(8, 0);
                if (v13)
                {
                    *(v13) = 4294967396;
                    v0 = 1;
                    v1 = v13;
                    v2 = 1;
                    v3 = "exitExitdefcsgr1ktbckMOVkil1knxt/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/slice.rs";
                    v4 = 4;
                    fish::input::init_input::{{closure}}(&v5, &v0, "exitExitdefcsgr1ktbckMOVkil1knxt/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/slice.rs", 4);
                    v14 = 4.alloc_impl(8, 0);
                    if (v14)
                    {
                        *(v14) = 4294967397;
                        v0 = 1;
                        v1 = v14;
                        v2 = 1;
                        v3 = "bind -m &gt;trimkLFTxvpawindritmkcanmvpakrefmainchar";
                        v4 = 4;
                        fish::input::init_input::{{closure}}(&v5, &v0, "bind -m &gt;trimkLFTxvpawindritmkcanmvpakrefmainchar", 4);
                        v15 = 4.alloc_impl(8, 0);
                        if (v15)
                        {
                            *(v15) = 4294967411;
                            v0 = 1;
                            v1 = v15;
                            v2 = 1;
                            v3 = "pager-toggle-searchbackward-kill-linebackward-delete-charup-linedown-lineforward-charbackward-char";
                            v4 = 19;
                            fish::input::init_input::{{closure}}(&v5, &v0, "pager-toggle-searchbackward-kill-linebackward-delete-charup-linedown-lineforward-charbackward-char", 19);
                            v16 = 4.alloc_impl(8, 0);
                            if (v16)
                            {
                                *(v16) = 4294967413;
                                v0 = 1;
                                v1 = v16;
                                v2 = 1;
                                v3 = "backward-kill-linebackward-delete-charup-linedown-lineforward-charbackward-char";
                                v4 = 18;
                                fish::input::init_input::{{closure}}(&v5, &v0, "backward-kill-linebackward-delete-charup-linedown-lineforward-charbackward-char", 18);
                                v17 = 4.alloc_impl(8, 0);
                                if (v17)
                                {
                                    *(v17) = 0xf500;
                                    v0 = 1;
                                    v1 = v17;
                                    v2 = 1;
                                    v3 = "backward-delete-charup-linedown-lineforward-charbackward-char";
                                    v4 = 20;
                                    fish::input::init_input::{{closure}}(&v5, &v0, "backward-delete-charup-linedown-lineforward-charbackward-char", 20);
                                    v18 = 4.alloc_impl(8, 0);
                                    if (v18)
                                    {
                                        *(v18) = 62724;
                                        v0 = 1;
                                        v1 = v18;
                                        v2 = 1;
                                        v3 = "up-linedown-lineforward-charbackward-char";
                                        v4 = 7;
                                        fish::input::init_input::{{closure}}(&v5, &v0, "up-linedown-lineforward-charbackward-char", 7);
                                        v19 = 4.alloc_impl(8, 0);
                                        if (v19)
                                        {
                                            *(v19) = 62725;
                                            v0 = 1;
                                            v1 = v19;
                                            v2 = 1;
                                            v3 = "down-lineforward-charbackward-char";
                                            v4 = 9;
                                            fish::input::init_input::{{closure}}(&v5, &v0, "down-lineforward-charbackward-char", 9);
                                            v20 = 4.alloc_impl(8, 0);
                                            if (v20)
                                            {
                                                *(v20) = 62727;
                                                v0 = 1;
                                                v1 = v20;
                                                v2 = 1;
                                                v3 = "forward-charbackward-char";
                                                v4 = 12;
                                                fish::input::init_input::{{closure}}(&v5, &v0, "forward-charbackward-char", 12);
                                                v21 = 4.alloc_impl(8, 0);
                                                if (v21)
                                                {
                                                    *(v21) = 62726;
                                                    v0 = 1;
                                                    v1 = v21;
                                                    v2 = 1;
                                                    v3 = "backward-char";
                                                    v4 = 13;
                                                    fish::input::init_input::{{closure}}(&v5, &v0, "backward-char", 13);
                                                    v22 = 4.alloc_impl(8, 0);
                                                    if (v22)
                                                    {
                                                        *(v22) = 4294967408;
                                                        v0 = 1;
                                                        v1 = v22;
                                                        v2 = 1;
                                                        v3 = "up-linedown-lineforward-charbackward-char";
                                                        v4 = 7;
                                                        fish::input::init_input::{{closure}}(&v5, &v0, "up-linedown-lineforward-charbackward-char", 7);
                                                        v23 = 4.alloc_impl(8, 0);
                                                        if (v23)
                                                        {
                                                            *(v23) = 4294967406;
                                                            v0 = 1;
                                                            v1 = v23;
                                                            v2 = 1;
                                                            v3 = "down-lineforward-charbackward-char";
                                                            v4 = 9;
                                                            fish::input::init_input::{{closure}}(&v5, &v0, "down-lineforward-charbackward-char", 9);
                                                            v24 = 4.alloc_impl(8, 0);
                                                            if (v24)
                                                            {
                                                                *(v24) = 4294967394;
                                                                v0 = 1;
                                                                v1 = v24;
                                                                v2 = 1;
                                                                v3 = "backward-char";
                                                                v4 = 13;
                                                                fish::input::init_input::{{closure}}(&v5, &v0, "backward-char", 13);
                                                                v25 = 4.alloc_impl(8, 0);
                                                                if (v25)
                                                                {
                                                                    *(v25) = 4294967398;
                                                                    v0 = 1;
                                                                    v1 = v25;
                                                                    v2 = 1;
                                                                    v3 = "forward-charbackward-char";
                                                                    v4 = 12;
                                                                    fish::input::init_input::{{closure}}(&v5, &v0, "forward-charbackward-char", 12);
                                                                    fish::input::init_input::{{closure}}(&v5, &g_a1b096, "up-linedown-lineforward-charbackward-char", 7);
                                                                    fish::input::init_input::{{closure}}(&v5, &g_a1b099, "down-lineforward-charbackward-char", 9);
                                                                    fish::input::init_input::{{closure}}(&v5, &g_a1b09c, "forward-charbackward-char", 12);
                                                                    fish::input::init_input::{{closure}}(&v5, &g_a1b09f, "backward-char", 13);
                                                                    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v5, v9 & 1);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    alloc::alloc::handle_alloc_error(4, 8); /* do not return */
}
