long long fuel_core_client::client::FuelClient::update_chain_state_info(struct_0 *a0, unsigned int a1[20])
{
    char v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x48]
    unsigned int v2[4];  // [bp-0x40]
    char v3;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long v4;  // [bp-0x30]
    unsigned int v6;  // ebp
    unsigned int v7;  // r12d
    unsigned long long v8;  // rax
    char v9;  // sil
    unsigned int v10;  // r12d
    char v11;  // sil
    unsigned long long v12;  // 4097
    unsigned long v13;  // cc_ndep
    unsigned int v14;  // ebx
    unsigned int v15[4];  // rax
    char v16;  // dl

    v6 = a1[12];
    if (v6 != 2)
    {
        if (a1[16] == 1)
        {
            v7 = a1[17];
            v0.lock(a0->field_78 + 16);
            if (v1 == 1)
            {
                v8 = core::ptr::drop_in_place<core::result::Result<std::sync::poison::mutex::MutexGuard<core::option::Option<u32>>,std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<core::option::Option<u32>>>>>(&v0);
            }
            else
            {
                v9 = *((int *)&v3);
                v2[2] = 1;
                v2[3] = v7;
                v8 = core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<core::option::Option<fuel_types::numeric_types::BlockHeight>>>(v2, v9);
            }
        }
        if (a1[18] == 1)
        {
            v10 = a1[19];
            v1.lock(a0->field_80 + 16);
            if (v1 == 1)
            {
                v8 = core::ptr::drop_in_place<core::result::Result<std::sync::poison::mutex::MutexGuard<core::option::Option<u32>>,std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<core::option::Option<u32>>>>>(&v1);
            }
            else
            {
                v11 = v3;
                v2[2] = 1;
                v2[3] = v10;
                v8 = core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<core::option::Option<fuel_types::numeric_types::BlockHeight>>>(v2, v11);
            }
        }
    }
    if ((a0->field_58 & 1))
        return v8;
    v12 = atomic_fetch_add(a0->field_60);
    if (!((char)_ccall(14, 24, v12 + 1, 0, _ccall(17, (unsigned long long)(a0->field_58 & 1), 0, v13))))
    {
        v4 = a0->field_60;
        if (v6 == 2 || a1[14] != 1)
            return core::ptr::drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<fuel_types::numeric_types::BlockHeight>>>>(&v4);
        v14 = a1[15];
        v1.lock(v4 + 16);
        v15 = v1.expect();
        if (v15[2] != 1 || v14 >= v15[3])
        {
            v15[2] = 1;
            v15[3] = v14;
        }
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<core::option::Option<fuel_types::numeric_types::BlockHeight>>>(v15, v16 & 1);
        return core::ptr::drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<fuel_types::numeric_types::BlockHeight>>>>(&v4);
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 6896833()
}
