long long uu_tail::follow::watch::Observer::start::h087097f796044307(struct_0 *a0, struct_2 *a1)
{
    unsigned int v0;  // [sp-0x1ac]
    int v1;  // [bp-0x1a8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v2;  // [sp-0x1a0], Other Possible Types: unsigned long long
    int v3;  // [bp-0x198], Other Possible Types: char *, struct struct_1 **, char, unsigned long long
    unsigned long long v4;  // [sp-0x190]
    int v5;  // [bp-0x188], Other Possible Types: void*
    unsigned long long v6;  // [sp-0x178]
    unsigned long long v8;  // [sp-0x160]
    unsigned long v9;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x148]
    int v11;  // [sp-0x140]
    char v12;  // [bp-0x130]
    char v13;  // [bp-0x128]
    char v14;  // [bp-0x120]
    char v15;  // [bp-0x118]
    char v16;  // [bp-0x110]
    char v17;  // [bp-0x100]
    int v18;  // [bp-0xf8], Other Possible Types: char
    int v19;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned int v20;  // [sp-0xe0]
    int v21;  // [sp-0xd8]
    unsigned long long v22;  // [sp-0xc8]
    unsigned long v23;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned int v24;  // [sp-0xb0]
    char v25;  // [sp-0xa8]
    char *v26;  // [sp-0xa0]
    unsigned long long v27;  // [sp-0x98]
    unsigned long v28;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x88]
    int v30;  // [sp-0x68]
    unsigned long long v31;  // [sp-0x58]
    char v32;  // [bp-0x48]
    char v33;  // [bp-0x38]
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // rbp
    unsigned long v38;  // rcx
    int v39;  // xmm0
    int v40;  // xmm0
    int v41;  // xmm1
    unsigned long long v42;  // rdx
    void* v43;  // rax
    unsigned long long v45;  // r15

    if (a1->field_4c == 2)
        return 0;
    std::sync::mpmc::channel::hb39d292c72ba59f2(&v1);
    v9 = v1;
    v10 = v2;
    *((int128_t *)&v11) = *((int128_t *)&v3);
    v35 = a1->field_30;
    v23 = v35;
    v24 = a1->field_38;
    v25 = 1;
    if (a0->field_8d)
    {
        a0->field_8d = 1;
        v0 = v35 & 0xffffffffffffff00 | 1;
        notify::poll::PollWatcher::new::h19cc910e27923588(&v1, v1, v10, &v23);
        core::result::Result$LT$T$C$E$GT$::unwrap::h6aea8ce2b2a2a3ed(&v18, &v1, &g_5bbf08);
        v36 = alloc::boxed::Box$LT$T$GT$::new::hf35e8fe7e9b38d9d(&v18);
        v37 = &g_5bbed8;
    }
    else
    {
        v0 = v35 & 0xffffffffffffff00 | 1;
        v8 = _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he3bb8bf0f49d09cb(&v9);
        notify::inotify::INotifyWatcher::from_event_handler::h1b427b953399875e(&v12, alloc::boxed::Box$LT$T$GT$::new::h9cb43a7e31de0b76(v9, v10), &g_5bbe60);
        if (*((int *)&v12) == 6)
        {
            v31 = *((long long *)&v15);
            *((int128_t *)&v30) = *((int128_t *)&v13);
            v36 = alloc::boxed::Box$LT$T$GT$::new::h627de0d4e117cca4(&v30);
            v0 = v38 & 0xffffffffffffff00 | 1;
            v37 = &g_5bbe80;
            ::0x503ab0::core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify..event..Event$C$notify..error..Error$GT$$GT$$GT$::h17a7392371296524();
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he673bc424d27c3c6(&v1, &v12);
            if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::he6168d552d6f5a75(v2, v3, "Too many open files:  cannot be used, reverting to polling: Too many open files\ninotifysrc/uu/tail/src/follow/watch.rs has become accessible\n has appeared;  following new file\n has been replaced;  following new file\n: file truncated\n has been replaced with an untailable file\n has been replaced with an untailable file; giving up on this name\n", 19))
            {
                ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v1);
                v6 = *((long long *)&v17);
                v40 = *((int128_t *)&v12);
                v41 = *((int128_t *)&v14);
                *((int128_t *)&v5) = *((int128_t *)&v16);
                v3 = v41;
                v1 = v40;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he673bc424d27c3c6(&v32, &v1);
                v20 = 1;
                *((int128_t *)&v18) = *((int128_t *)&v32);
                v19 = *((long long *)&v33);
                v43 = ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v18);
                v0 = ::0x503b10::core::ptr::drop_in_place$LT$notify..error..Error$GT$::h254f5de2e736f707(&v1) & 0xffffffffffffff00 | 1;
                ::0x503ab0::core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify..event..Event$C$notify..error..Error$GT$$GT$$GT$::h17a7392371296524();
                ::0x503ad0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$core..result..Result$LT$notify..event..Event$C$notify..error..Error$GT$$GT$$GT$::h4b1460b00665841e();
                return v43;
            }
            ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v1);
            v22 = *((long long *)&v17);
            v39 = *((int128_t *)&v12);
            *((int128_t *)&v21) = *((int128_t *)&v16);
            *((int128_t *)&v19) = *((int128_t *)&v14);
            v18 = v39;
            v28 = uucore::util_name::h60d842bf27b05e82();
            v29 = v42;
            v26 = &v28;
            v27 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v1 = &g_5bbe20;
            v2 = 2;
            v5 = 0;
            v3 = &v26;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
            v28 = &g_5bbeb0;
            v29 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v1 = &g_5bbe40;
            v2 = 2;
            v5 = 0;
            v3 = &v28;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            a0->field_8d = 1;
            notify::poll::PollWatcher::new::h19cc910e27923588(&v1, v8, v42, &v23);
            core::result::Result$LT$T$C$E$GT$::unwrap::h6aea8ce2b2a2a3ed(&v28, &v1, &g_5bbec0);
            *((double *)&v36) = alloc::boxed::Box$LT$T$GT$::new::hf35e8fe7e9b38d9d(&v28);
            ::0x503b10::core::ptr::drop_in_place$LT$notify..error..Error$GT$::h254f5de2e736f707(&v18);
            v37 = &g_5bbed8;
        }
    }
    v45 = (long long)(&v11)[8];
    ::0x5040b0::core::ptr::drop_in_place$LT$core..option..Option$LT$uu_tail..follow..watch..WatcherRx$GT$$GT$::h3f9e2dcc975b684b(a0);
    a0->field_0 = (long long)v11;
    a0->field_8 = v45;
    a0->field_10 = v36;
    a0->field_18 = v37;
    v0 = 0;
    v43 = uu_tail::follow::watch::Observer::init_files::ha6088192ed8373cd(a0, a1->field_20, a1->field_28);
    if (v43)
        return v43;
}
