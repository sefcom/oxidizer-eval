long long fish::complete::complete_print(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x112]
    char v1;  // [bp-0x111]
    void* v2;  // [bp-0x108]
    unsigned long long v3;  // [bp-0x100]
    void* v4;  // [bp-0xf8]
    char v5;  // [bp-0xf0], Other Possible Types: unsigned long long
    void* v6;  // [bp-0xe8]
    unsigned long v7;  // [bp-0xe0]
    unsigned long v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    void* v10;  // [bp-0xc8]
    unsigned long v11;  // [bp-0xc0]
    unsigned long v12;  // [bp-0xb8]
    unsigned long v13;  // [bp-0xb0]
    unsigned long long v14;  // [bp-0xa8]
    struct_0 *v15;  // [bp-0xa0]
    struct_1 *v16;  // [bp-0x98]
    unsigned long v17;  // [bp-0x88]
    unsigned long long v18;  // [bp-0x80]
    int v19;  // [bp-0x78], Other Possible Types: char
    unsigned long long v20;  // [bp-0x70]
    int v21;  // [bp-0x68]
    unsigned long long v22;  // [bp-0x58]
    char v23;  // [bp-0x48]
    unsigned long long v24;  // [bp-0x40]
    char v25;  // [bp-0x38]
    struct_0 *v27;  // rax
    char v28;  // dl
    unsigned long v29;  // rax
    unsigned long long v30;  // rcx
    unsigned long long v31[3];  // rax
    unsigned long long v32[3];  // rbx
    unsigned long long v34[3];  // rbp
    unsigned long long v35[3];  // rbp
    char v36[102];  // rax
    char v37[102];  // rax
    unsigned long long v40[3];  // rax
    unsigned long long v41[3];  // rbx
    struct_2 *v42;  // r14
    unsigned long long v43[3];  // r14
    unsigned long long v44;  // r13
    unsigned long long v45[3];  // r15
    unsigned long long v46[3];  // r15
    unsigned long long v47;  // r12
    unsigned long long v48[3];  // r14

    v2 = 0;
    v3 = 4;
    v4 = 0;
    v5.lock();
    v27 = v5.expect("poisoned mutex", &g_14d63e0);
    v0 = v28;
    v15 = v27;
    if (v27->field_8)
    {
        v29 = v27->field_18;
        v6 = 0;
        v7 = v27->field_8;
        v8 = v27->field_10;
        v10 = 0;
        v11 = v7;
        v12 = v27->field_10;
        v30 = 1;
    }
    else
    {
        v30 = 0;
        v29 = 0;
    }
    v0 &= 1;
    v5 = v30;
    v9 = v30;
    v13 = v29;
    v23.collect(&v5);
    alloc::slice::<impl [T]>::sort_by_key(v24, *((long long *)&v25));
    v5.into_iter(&v23);
    v31 = v5.next();
    if (v31)
    {
        v32 = v31;
        if (a2)
        {
            do
            {
                v35 = v34;
                if ((char)v32[1].equal(v32[2], a1, a2))
                {
                    v17 = v35[1];
                    v18 = v35[2] * 104 + v35[1];
                    if (v17.next_back())
                    {
                        do
                        {
                            fish::complete::completion2string(&v19, v32, v36);
                            v2.spec_extend(v20, v20 + (long long)v21 * 4);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v19);
                            v36 = v17.next_back();
                        } while (v36);
                    }
                }
                v32 = v5.next();
                v34 = v28;
            } while (v32);
        }
        else
        {
            do
            {
                v17 = v34[1];
                v18 = v34[2] * 104 + v34[1];
                if (v17.next_back())
                {
                    do
                    {
                        fish::complete::completion2string(&v19, v32, v37);
                        v2.spec_extend(v20, v20 + (long long)v21 * 4);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v19);
                        v37 = v17.next_back();
                    } while (v37);
                }
                v32 = v5.next();
                v34 = v28;
            } while (v32);
        }
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(&v5);
    v5.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v1 = v28 & 1;
    v14 = v5.expect(&g_14d63f8);
    v5.iter(v14 + 8);
    v22 = v9;
    memcpy(&v21, &v7, 16);
    *((int128_t *)&v19) = *((int128_t *)&v5);
    v40 = (char)v19.next();
    if (v40)
    {
        v41 = v40;
        v42 = v28;
        if (a2)
        {
            do
            {
                if ((char)v41[1].equal(v41[2], a1, a2))
                {
                    v43 = v42->field_8;
                    v44 = &v42->field_8[v42->field_10];
                    while (true)
                    {
                        v45 = v43 + 1;
                        if (v43 == v44)
                        {
                            v45 = v43;
                            if (v43 == v44)
                                break;
                        }
                        else if (v43 == v44)
                        {
                            break;
                        }
                        v2.spec_extend("c", "src/editable_line.rsassertion failed: position <= self.len()assertion failed: range.start == self.position()assertion failed: self.undo_history.may_coalesceexecutable path: ");
                        fish::common::escape(&v5, v41[1], v41[2]);
                        v2.spec_extend(v6, v6 + v7 * 4);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v5);
                        fish::complete::append_switch_long_arg(&v2, v43[1], v43[2]);
                        v2.spec_extend("\n", "savefifo");
                        v43 = v45;
                    }
                }
                v41 = (char)v19.next();
                v42 = v28;
            } while (v41);
        }
        else
        {
            do
            {
                v46 = v42->field_8;
                v47 = &v42->field_8[v42->field_10];
                while (true)
                {
                    v48 = v46 + 1;
                    if (v46 == v47)
                    {
                        v48 = v46;
                        if (v46 == v47)
                            break;
                    }
                    else if (v46 == v47)
                    {
                        break;
                    }
                    v2.spec_extend("c", "src/editable_line.rsassertion failed: position <= self.len()assertion failed: range.start == self.position()assertion failed: self.undo_history.may_coalesceexecutable path: ");
                    fish::common::escape(&v5, v41[1], v41[2]);
                    v2.spec_extend(v6, v6 + v7 * 4);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v5);
                    fish::complete::append_switch_long_arg(&v2, v46[1], v46[2]);
                    v2.spec_extend("\n", "savefifo");
                    v46 = v48;
                }
                v41 = (char)v19.next();
                v42 = v28;
            } while (v41);
        }
    }
    v16->field_10 = 0;
    v16->field_0 = *((int128_t *)&v2);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v14, v1);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v15, v0);
    return a0;
}
