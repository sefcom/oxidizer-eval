long long fish::exec::exec_job(unsigned long long a0, struct_1 *a1, unsigned long long a2[3])
{
    unsigned int v0;  // [bp-0x138]
    unsigned long long v1;  // [sp-0x138]
    unsigned int v2;  // [bp-0x134]
    unsigned long long v4;  // [bp-0x130]
    void* v5;  // [bp-0x128]
    int v6;  // [bp-0x128]
    unsigned long long v7;  // [bp-0x120]
    void* v8;  // [bp-0x118]
    void* v9;  // [bp-0x108], Other Possible Types: unsigned long long
    int v10;  // [bp-0x108]
    unsigned int v11;  // [bp-0x108]
    unsigned long long v12;  // [bp-0x100]
    void* v13;  // [bp-0xf8], Other Possible Types: unsigned long long
    struct_1 *v14;  // [bp-0xf0]
    void* v15;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0xe0]
    void* v17;  // [bp-0xd8]
    void* v18;  // [bp-0xd0]
    unsigned long v19;  // [bp-0xc8]
    unsigned long long v20;  // [bp-0xc0]
    unsigned short v21;  // [bp-0xa8]
    unsigned long long v22;  // [bp-0xa8], Other Possible Types: unsigned short
    unsigned int v23;  // [bp-0xa4]
    unsigned long long v24;  // [bp-0xa0]
    unsigned long long v25;  // [bp-0x98]
    char v26;  // [bp-0x88]
    int v27;  // [bp-0x80]
    char v28;  // [bp-0x68]
    unsigned long long v29;  // [bp-0x58]
    unsigned long v30;  // [bp-0x50]
    unsigned long long v31;  // [bp-0x48]
    unsigned long v32;  // [bp-0x40]
    unsigned long v33;  // [bp-0x38]
    struct_1 *v35;  // r13
    unsigned long long v36;  // rax
    unsigned int v37;  // r12d
    unsigned long v38;  // rsi
    unsigned long v39;  // rdi
    unsigned long v40;  // r13
    void* v41;  // rbx
    struct_1 *v42;  // r14
    unsigned int v43;  // ebx
    unsigned long long v44;  // rdx
    struct_0 *v45;  // rdi
    unsigned long long v46;  // rbx
    unsigned long v48;  // rdi
    unsigned long long v49;  // rbx
    unsigned int v50;  // r12d
    unsigned long long v51;  // r14
    unsigned long long v52;  // rbx
    unsigned long long v53;  // cc_ndep
    unsigned long v54;  // rsi
    unsigned long long v55;  // rcx
    struct_2 *v56;  // r15
    unsigned long long v57;  // rax
    unsigned int v58;  // r13d
    unsigned long long v59;  // rdx
    unsigned long long v61;  // rcx
    unsigned long long v62;  // rax
    char v63;  // al
    unsigned long v64;  // cc_dep1
    unsigned int v65;  // eax
    unsigned long long v66;  // cc_op
    unsigned long v67;  // cc_dep1
    char v68;  // al
    unsigned long long v69;  // r14
    unsigned long long v70;  // rsi
    char v71;  // al
    unsigned int v72;  // eax
    unsigned int v73;  // eax

    v35 = a1;
    v36 = fish::proc::no_exec();
    v37 = v36;
    if (!(char)v36)
    {
        v38 = a1->field_18;
        if (!a1->field_18)
            core::panicking::panic_bounds_check(0, 0, &g_14d7990); /* do not return */
        v39 = *((long long *)((char *)&a1->field_8 + 8));
        v14 = a1;
        if (*((int *)*((long long *)((char *)&a1->field_8 + 8))) == 4)
        {
            if ((char)fish::exec::allow_exec_with_background_jobs(a0))
            {
                v4 = a0;
                if (!a1->field_18)
                    core::panicking::panic_bounds_check(0, 0, &g_14d79a8); /* do not return */
                if (*((long long *)(*((long long *)((char *)&a1->field_8 + 8)) + 40)))
                {
                    v40 = *((long long *)(*((long long *)((char *)&a1->field_8 + 8)) + 32));
                    v19 = v4 + 472;
                    v41 = 0;
                    do
                    {
                        v22.clone(*((long long *)(32 + v40 + (char *)v41)), *((long long *)(40 + v40 + (char *)v41)));
                        v19.set(*((long long *)(8 + v40 + (char *)v41)), *((long long *)(16 + v40 + (char *)v41)), 17, &v22);
                        v41 += 48;
                    } while (*((long long *)(*((long long *)((char *)&a1->field_8 + 8)) + 40)) * 48 != v41);
                }
                v42 = v14;
                fish::exec::internal_exec(v4 + 472, v42, a2);
                v43 = *((char *)(v42.flags() + 2));
                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v44);
                v22.just(v43 ^ 1);
                v4.set_last_statuses(&v22);
                v45 = *((long long *)((char *)&v42->field_8 + 8));
                for (v46 = v42->field_18 * 224; v46; v45 = &v45[4].field_20)
                {
                    v46 -= 224;
                    v45.mark_aborted_before_launch();
                }
                return 0;
            }
            v48 = *((long long *)((char *)&a1->field_8 + 8));
            for (v49 = a1->field_18 * 224; v49; v48 += 224)
            {
                v49 -= 224;
                v48.mark_aborted_before_launch();
            }
        }
        else
        {
            v1 = 18446744073709551615;
            v20 = fish::exec::get_deferred_process(v39, v38);
            v28.new(core::ops::function::FnOnce::call_once);
            v4 = a0;
            v19 = a1->field_18;
            if (a1->field_18)
            {
                v33 = a2[1];
                v32 = a2[2];
                v30 = &a1->field_20;
                v50 = 4294967295;
                v18 = 0;
                v51 = 1;
                v52 = 0;
                while (true)
                {
                    if (((char)v20 & 1))
                    {
                        while (true)
                        {
                            v54 = v35->field_18;
                            if (v52 >= v54)
                            {
LABEL_13a4bae:
                                core::panicking::panic_bounds_check(v52, v54, &g_14d79c0); /* do not return */
                            }
                            v55 = v52 * 224;
                            v56 = *((long long *)((char *)&v35->field_8 + 8)) + v55;
                            if (*((char *)(*((long long *)((char *)&v35->field_8 + 8)) + v55 + 213)))
                                break;
                            v57 = fish::fds::make_autoclose_pipes();
                            v50 = v57;
                            v58 = v57 >> 32;
                            if (v50 == -1)
                                goto LABEL_13a470d;
                            core::ptr::drop_in_place<core::option::Option<std::os::fd::owned::OwnedFd>>(4294967295);
                            core::ptr::drop_in_place<core::option::Option<std::os::fd::owned::OwnedFd>>(4294967295);
                            if (v52 != v59)
                                goto LABEL_13a4550;
                            core::ptr::drop_in_place<fish::exec::PartialPipes>(v0, v2);
                            v0 = v50;
                            v2 = v58;
                            v53 = v52 < v59;
                            v52 = v51;
                            v35 = v14;
                            v51 += 1;
                            if (v52 >= v19)
                                goto LABEL_13a465d;
                        }
                        v50 = 4294967295;
                        v58 = 4294967295;
                        goto LABEL_13a4550;
                    }
                    if (v52 >= v35->field_18)
                        goto LABEL_13a4bae;
                    v61 = v52 * 224;
                    v56 = *((long long *)((char *)&v35->field_8 + 8)) + v61;
                    v58 = 4294967295;
                    if (*((char *)(*((long long *)((char *)&v35->field_8 + 8)) + v61 + 213)))
                    {
                        v50 = 4294967295;
                        goto LABEL_13a4550;
                    }
                    v62 = fish::fds::make_autoclose_pipes();
                    v58 = v62 >> 32;
                    if ((unsigned int)v62 == 4294967295)
                        break;
                    v31 = v62;
                    core::ptr::drop_in_place<core::option::Option<std::os::fd::owned::OwnedFd>>(4294967295);
                    core::ptr::drop_in_place<core::option::Option<std::os::fd::owned::OwnedFd>>(4294967295);
                    v50 = v31;
LABEL_13a4550:
                    v21.clone(v33, v32);
                    v13 = v25;
                    *((int128_t *)&v10) = *((int128_t *)&v21);
                    v35 = v14;
                    v63 = fish::exec::exec_process_in_job(v4, v56, v14, &v9, v50, v58, &(char)v0, 0);
                    v64 = v63;
                    if (v63)
                    {
                        fish::exec::abort_pipeline_from(*((long long *)((char *)&v35->field_8 + 8)), v35->field_18, v52);
                        v69 = v4;
                        goto LABEL_13a486c;
                    }
                    v65 = (unsigned int)v18;
                    v18 = v65 + 1;
                    if ((char)_ccall(0, 23, (unsigned long long)(v65 + 1), 0, _ccall(17, v64, 0, v53)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14d7a08); /* do not return */
                    v66 = 5;
                    v67 = v56->field_d6;
                    if (v56->field_d6)
                    {
                        v68 = v35.group().wants_terminal();
                        v66 = 17;
                        v67 = v68;
                        if (v68)
                        {
                            v66 = 8;
                            v67 = *((long long *)v30);
                            if (!*((long long *)v30))
                                core::option::unwrap_failed(&g_14d7a20); /* do not return */
                            v28.to_job_group(v30);
                        }
                    }
                    v53 = _ccall(v66, v67, 0, _ccall(17, v64, 0, v53));
                    v51 += 1;
                    v52 = v51;
                    if (v52 >= v19)
                        goto LABEL_13a465d;
                }
                v50 = v50;
LABEL_13a470d:
                core::ptr::drop_in_place<core::result::Result<fish::fds::AutoClosePipes,nix::errno::consts::Errno>>(4294967295, v58);
                if ((char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
                {
                    v5 = 0;
                    v7 = 1;
                    v8 = 0;
                    v9.to_flog_str(&g_15a93d0);
                    v21.into_iter(&v9);
                    v5.spec_extend(&v21);
                    v5.push(58, &g_14d79d8);
                    v5.push(32, &g_14d79d8);
                    v15 = g_14d79f0[0].localize();
                    v16 = v59;
                    v9.to_flog_str(&v15);
                    v21.into_iter(&v9);
                    v5.spec_extend(&v21);
                    v5.push(10, &g_14d79d8);
                    fish::flog::flog_impl(v7, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v5, v7);
                }
                fish::exec::abort_pipeline_from(*((long long *)((char *)&v14->field_8 + 8)), v14->field_18, v52);
                core::ptr::drop_in_place<core::option::Option<std::os::fd::owned::OwnedFd>>(v50);
                v50 = 4294967295;
                core::ptr::drop_in_place<core::option::Option<std::os::fd::owned::OwnedFd>>(4294967295);
                v35 = v14;
                v69 = v4;
LABEL_13a486c:
                core::ptr::drop_in_place<core::option::Option<std::os::fd::owned::OwnedFd>>(v50);
                if ((unsigned int)v18)
                {
                    if (!((char)v20 & 1))
                        goto LABEL_13a48b1;
LABEL_13a488b:
                    if (v59 >= v35->field_18)
                        core::panicking::panic_bounds_check(v59, v35->field_18, &g_14d7a50); /* do not return */
                    v59 * 224 + *((long long *)((char *)&v35->field_8 + 8)).mark_aborted_before_launch();
LABEL_13a48b1:
                    if ((char)core::sync::atomic::atomic_load(&g_15a9530, 0))
                    {
                        v15 = 0;
                        v16 = 1;
                        v17 = 0;
                        v9.to_flog_str(&g_15a9520);
                        v21.into_iter(&v9);
                        v15.spec_extend(&v21);
                        v15.push(58, &g_14d7a68);
                        v15.push(32, &g_14d7a68);
                        v9 = 0;
                        v12 = 4;
                        v13 = 0;
                        v72 = v35.job_id();
                        v21 = 16389;
                        v24 = -(v72 < 1) | v72;
                        v26 = 1;
                        *((int128_t *)&v27) = *((int128_t *)&(&v35->padding_0)[1]);
                        fish_printf::printf_impl::sprintf_locale(&v5, &v9, "Executed job %d from command '%ls'src/exec.rs", 34, &v21, 2);
                        v5.unwrap(&g_14d7a68);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v21);
                        *((int128_t *)&v6) = *((int128_t *)&v9);
                        v8 = 0;
                        v9.to_flog_str(&v5);
                        v21.into_iter(&v9);
                        v15.spec_extend(&v21);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v5);
                        v15.push(10, &g_14d7a68);
                        fish::flog::flog_impl(v16, 0);
                        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v15, v16);
                    }
                    v35.mark_constructed();
                    if (!v35.is_foreground())
                    {
                        v73 = v35.get_last_pid();
                        if (v73)
                        {
                            v11 = v73;
                            v21.to_wstring(&v11);
                            v69 + 472.set_one("l", 8, 4, &v21);
                        }
                        else
                        {
                            v69 + 472.set_empty("l", 8, 4);
                        }
                    }
                    if (!v35->padding_30[17])
                        v35.continue_job(v69);
                    if ((char)v35.is_stopped())
                        v28.save_tty_modes();
                    v25 = v29;
                    memcpy(&v21, &v28, 16);
                    v21.reclaim();
                    core::ptr::drop_in_place<fish::exec::PartialPipes>(v0, v2);
                    core::ptr::drop_in_place<fish::io::IoChain>(a2);
                    return v50 & 0xffffff00 | 1;
                }
                core::ptr::drop_in_place<fish::tty_handoff::TtyHandoff>(&v28);
                core::ptr::drop_in_place<fish::exec::PartialPipes>(v0, v2);
            }
            else
            {
                v50 = 4294967295;
LABEL_13a465d:
                core::ptr::drop_in_place<core::option::Option<std::os::fd::owned::OwnedFd>>(v50);
                v69 = v4;
                if (((char)v20 & 1))
                {
                    if (v59 >= v35->field_18)
                        core::panicking::panic_bounds_check(v59, v35->field_18, &g_14d7a38); /* do not return */
                    v70 = v59 * 224 + *((long long *)((char *)&v35->field_8 + 8));
                    v22 = 18446744073709551615;
                    v71 = fish::exec::exec_process_in_job(v69, v70, v35, a2, v0, v2, &(unsigned short)v22, 1);
                    core::ptr::drop_in_place<fish::exec::PartialPipes>((unsigned int)v22, v23);
                    if (v71)
                        goto LABEL_13a488b;
                    goto LABEL_13a48b1;
                }
            }
        }
    }
    core::ptr::drop_in_place<fish::io::IoChain>(a2);
    return v37;
}
