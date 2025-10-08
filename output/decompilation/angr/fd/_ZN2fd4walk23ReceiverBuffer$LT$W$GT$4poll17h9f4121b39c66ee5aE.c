long long fd::walk::ReceiverBuffer<W>::poll(struct_2 *a0)
{
    unsigned long v0;  // [bp-0x410]
    char v1;  // [bp-0x408]
    char v2;  // [bp-0x407]
    unsigned long long v3;  // [bp-0x400]
    char v4;  // [bp-0x3f8]
    int v5;  // [bp-0x3d8]
    int v6;  // [bp-0x3c8]
    int v7;  // [bp-0x3b8]
    unsigned long v8;  // [bp-0x3a8]
    char v9;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x2a0]
    char v11;  // [bp-0x298]
    int v12;  // [bp-0x260]
    unsigned long long v13;  // [bp-0x168]
    int v14;  // [bp-0x160]
    int v15;  // [bp-0x150]
    int v16;  // [bp-0x140]
    unsigned long v17;  // [bp-0x130]
    char v18;  // [bp-0x128]
    unsigned long long v20;  // rax
    struct_0 *v21;  // r14
    char *v22;  // r13
    char *v23;  // r15
    unsigned long long v24;  // r12
    unsigned long long v25;  // rax
    char v26;  // r13b
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    struct_1 *v29;  // rax
    unsigned long v30;  // rcx

    v1.recv(a0);
    if (v1 != 1)
    {
        v4.into_iter(v3);
        v9.next(&v4);
        if (v10 != 5)
        {
            v21 = &v11;
            v0 = &a0->padding_8[48];
            v22 = &v9;
            v23 = &v4;
            v9 = v10;
            do
            {
                v25 = v9;
                if (v25 == 4)
                {
                    v8 = v21->field_30;
                    *((uint128_t *)&v7) = v21->field_20;
                    *((uint128_t *)&v6) = v21->field_10;
                    *((char [16])&v5) = v21->field_0;
                    if (a0->field_60->field_1e6)
                    {
                        v13.spec_to_string(&v5);
                        fd::error::print_error(&v13);
                    }
                    core::ptr::drop_in_place<ignore::Error>(&v5);
                }
                else
                {
                    v13 = v25;
                    v17 = v21->field_30;
                    *((uint128_t *)&v16) = v21->field_20;
                    *((uint128_t *)&v15) = v21->field_10;
                    *((char [16])&v14) = v21->field_0;
                    ::libc.so.0::memcpy(&v18, &v12, 248);
                    if (a0->field_60->field_1e4)
                    {
                        core::ptr::drop_in_place<fd::dir_entry::DirEntry>(&v13);
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fd::walk::WorkerResult>>(&v4);
                        return (v24 & 0xffffffffffffff00 | 1) & 4294967295;
                    }
                    v26 = a0->field_80;
                    if (v26 == 1)
                    {
                        v27 = a0.print(&v13);
                        v24 = v27 & 4294967295;
                        if ((char)v27 != 6)
                        {
                            core::ptr::drop_in_place<fd::dir_entry::DirEntry>(&v13);
                            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fd::walk::WorkerResult>>(&v4);
                            return v27 & 4294967295;
                        }
                    }
                    else
                    {
                        v24 = &v5;
                        ::libc.so.0::memcpy(&v5, &v13, 312);
                        v0.push(&v5);
                        if (a0->field_48 >= 1001)
                        {
                            v28 = a0.stream();
                            v24 = v28 & 4294967295;
                            if ((char)v28 != 6)
                            {
                                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fd::walk::WorkerResult>>(&v4);
                                return v28 & 4294967295;
                            }
                        }
                    }
                    v29 = a0->field_60;
                    v30 = a0->field_78 + 1;
                    a0->field_78 = v30;
                    if ((v29->field_20 & 1) && v30 >= v29->field_28)
                    {
                        v24 = (unsigned int)a0.stop();
                        if (!v26)
                        {
                            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fd::walk::WorkerResult>>(&v4);
                            return v24 & 4294967295;
                        }
                        core::ptr::drop_in_place<fd::dir_entry::DirEntry>(&v13);
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fd::walk::WorkerResult>>(&v4);
                        return v24 & 4294967295;
                    }
                    v21 = &v11;
                    if (v26)
                        core::ptr::drop_in_place<fd::dir_entry::DirEntry>(&v13);
                }
                v22.next(v23);
                v9 = v10;
            } while (v9 != 5);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fd::walk::WorkerResult>>(&v4);
        if (a0->field_80 == 1 && (char)a0->field_0.is_empty())
        {
            v20 = a0.flush();
            if ((char)v20 != 6)
                return v20 & 4294967295;
        }
    }
    else if (v2)
    {
        return a0.stop();
    }
    else
    {
        v20 = a0.stream();
        if ((char)v20 != 6)
        {
            return v20 & 4294967295;
        }
    }
    return (v24 & 0xffffffffffffff00 | 6) & 4294967295;
}
