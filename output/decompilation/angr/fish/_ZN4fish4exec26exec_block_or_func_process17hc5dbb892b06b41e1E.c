long long fish::exec::exec_block_or_func_process(unsigned long long a0, void* a1, struct_0 *a2, unsigned long long a3[3], char a4)
{
    void* v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0xa0]
    unsigned int v2;  // [bp-0x94]
    void* v3;  // [bp-0x90]
    void* v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    void* v6;  // [bp-0x78]
    unsigned long long v7[3];  // [bp-0x70]
    unsigned long long v8[3];  // [bp-0x68]
    void* v9;  // [bp-0x60], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x38]
    unsigned long long v13[3];  // rbx
    unsigned long v14;  // rax
    void* v15;  // rdx
    unsigned int v16;  // ebp
    unsigned long v17;  // cc_ndep
    unsigned long long v18;  // rax
    unsigned long long v19;  // rsi
    unsigned long long v20;  // r13
    unsigned long long v21;  // r13
    void* v22;  // rbx
    void* v23;  // r15
    unsigned long long v24;  // r12
    void* v25;  // rbp
    unsigned int v26;  // ebp

    v13 = a3;
    v14 = a2->field_0;
    if (((unsigned int)a2->field_0 & 4294967294) != 2)
        core::panicking::panic("assertion failed: p.is_block_node() || p.is_function()Process must be a builtinprocess_type_t::exec process found in pipeline, where it should never be. Aborting.status cannot be 0 for an error resultsrc/expand.rs", 54, &g_14d7de0); /* do not return */
    v3 = 0;
    if (a4)
    {
        v0 = 0;
        v16 = (unsigned int)v15;
        *(v8) = fish::io::IoBufferfill::create();
        v9 = v15;
        if (((char)v8 & 1))
        {
            v0 = 0;
            core::ptr::drop_in_place<core::result::Result<alloc::sync::Arc<fish::io::IoBufferfill>,std::io::error::Error>>(&v8);
LABEL_13a7cc4:
            core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::io::IoBufferfill>>>(&v3);
            v26 = v16 & 0xffffff00 | 1;
        }
        else
        {
            v4 = v15;
            if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v15) + 1, 0, _ccall(17, (unsigned long long)((char)v8 & 1), 0, v17)))
                [D] Unsupported jumpkind Ijk_NoDecode at address 20610402()
            a3.push(v15, &g_14c8e18);
            core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::io::IoBufferfill>>>(&v3);
            v3 = v15;
            if ((int)v8[0] == 1)
            {
                v0 = v15;
                core::ptr::drop_in_place<core::result::Result<alloc::sync::Arc<fish::io::IoBufferfill>,std::io::error::Error>>(&v8);
            }
            v14 = a2->field_0;
LABEL_13a7bf0:
            if (v14 == 3)
            {
                v18 = fish::exec::get_performer_for_block_node(a2, a1, a3[1], a3[2]);
                v19 = &g_14d7d10;
            }
            else
            {
                v18 = fish::exec::get_performer_for_function(a2, a1, a3[1], a3[2]);
                if (!v18)
                    goto LABEL_13a7cc4;
                v19 = &g_14d7d60;
            }
            a2->field_a8 = v18.call_once(v19, a0, 0, 0);
            a2->field_ac = (unsigned int)v15;
            v20 = v1;
            v7[0] = a3;
            v2 = v16 & 0xffffff00 | v20;
            if (v20)
            {
                v11 = v20;
                a3.remove(v11 + 16);
                v8.finish(v11);
                v21 = a0;
                v22 = a1;
                v4.newline_serialized(&v8);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, 1);
                v23 = v4;
                v24 = v5;
                v25 = v6;
                core::ptr::drop_in_place<fish::io::SeparatedBuffer>(&v8);
            }
            else
            {
                v21 = a0;
                v22 = a1;
                v25 = 0;
                v24 = 1;
                v23 = 0;
            }
            v4 = v23;
            v5 = v24;
            v6 = v25;
            *(v8) = 0;
            v9 = 1;
            v10 = 0;
            v13 = v7;
            fish::exec::run_internal_process_or_short_circuit(v21, v22, a2, &v4, &v8, v13);
            v26 = 0;
        }
        core::ptr::drop_in_place<fish::io::IoChain>(v13);
        return v26;
    }
    v16 = 0;
    goto LABEL_13a7bf0;
}
