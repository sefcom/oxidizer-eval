long long fd::exec::CommandSet::execute_batch(unsigned long long a0, unsigned long a1, struct_0 *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x100]
    char v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    void* v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    char v7;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xb0]
    void* v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x90]
    int v13;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x88]
    unsigned long long v15;  // [bp-0x80]
    int v16;  // [bp-0x78], Other Possible Types: char *
    int v17;  // [bp-0x68]
    int v18;  // [bp-0x58]
    int v19;  // [bp-0x48]
    unsigned long v20;  // [bp-0x38]
    unsigned long long v22;  // rax
    unsigned long long v23;  // r15
    void* v24;  // rbx
    unsigned long long v25;  // rbx
    unsigned long long v26;  // r15
    unsigned long long v27;  // r15
    unsigned long v28;  // r15
    void* v29;  // rax
    unsigned int v30;  // eax

    v5 = a3;
    v14 = a0;
    v15 = a0 + a1 * 24;
    v16 = &v5;
    v7.collect(&v14);
    if ((char)(((0 ^ v7) & (0 ^ -(v7))) >> 63))
    {
        fd::exec::command::handle_cmd_error(0, v8, a2);
        v22 = core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>,fd::exec::job::batch<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>>::{{closure}}>>(a2);
    }
    else
    {
        v3 = v9;
        memcpy(&v1, &v7, 16);
        v20 = a2->field_50;
        *((uint128_t *)&v19) = a2->field_40;
        *((uint128_t *)&v18) = a2->field_30;
        *((uint128_t *)&v17) = a2->field_20;
        *((uint128_t *)&v16) = a2->field_10;
        *((uint128_t *)&v13) = a2->field_0;
        while (true)
        {
            v10.next(&v14);
            if (v10 != 0x8000000000000000)
            {
                v0 = v10;
                if (v3)
                {
                    v4 = v2;
                    v24 = 0;
                    do
                    {
                        v6 = v23.push(v11, v12, a4, a5);
                        if (v6)
                        {
                            fd::exec::command::handle_cmd_error(v4 - v24 + 80, v6, a2);
                            core::mem::drop(v0, v11);
                            core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>,fd::exec::job::batch<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>>::{{closure}}>>(&v14);
                        }
                        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v6);
                        v24 -= 336;
                        v23 += 336;
                    } while (v3 * -336 != v24);
                }
                core::mem::drop(v0, v11);
            }
            else
            {
                core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>,fd::exec::job::batch<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>>::{{closure}}>>(&v14);
                v25 = v2;
                if (v3)
                {
                    v26 = v3 * 336;
                    do
                    {
                        v27 = v26;
                        v13 = v25.finish();
                        if (v13)
                            fd::exec::command::handle_cmd_error(v25 + 80, v13, a2);
                        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v13);
                        v25 += 336;
                        v28 = v27 - 336;
                        v26 = v28;
                    } while (v27 != 336);
                    v25 = v2;
                    v29 = v3;
                }
                else
                {
                    v29 = 0;
                }
                v30 = fd::exit_codes::merge_exitcodes(v25, v29 * 336 + v25);
                core::ptr::drop_in_place<alloc::vec::Vec<fd::exec::CommandBuilder>>(&v1);
                return v30;
            }
        }
    }
    return v22 & 0xffffffffffffff00 | 4;
}
