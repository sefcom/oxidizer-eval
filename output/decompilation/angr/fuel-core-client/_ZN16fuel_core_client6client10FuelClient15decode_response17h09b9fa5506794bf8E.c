long long fuel_core_client::client::FuelClient::decode_response(void* a0, unsigned long long a1, struct_0 *a2)
{
    int v0;  // [bp-0xf8]
    int v1;  // [bp-0xe8]
    int v2;  // [bp-0xd8]
    int v3;  // [bp-0xc8]
    int v4;  // [bp-0xb8]
    int v5;  // [bp-0xa8]
    int v6;  // [bp-0x98]
    int v7;  // [bp-0x88]
    int v8;  // [bp-0x78]
    unsigned long v9;  // [bp-0x68]
    char v10;  // [bp-0x58]
    char v11;  // [bp-0x40]
    unsigned long long v13;  // rax
    unsigned long v14;  // r14
    int v15;  // xmm0
    int v16;  // xmm1
    int v17;  // xmm2

    a1.update_chain_state_info(a2);
    if (*((int *)((char *)&a2->field_88 + 8)) != 2 && a2->padding_9c[20] != 2 && (a2->padding_9c[20] & 1))
    {
        *((long long *)&a0[8]) = 40.new("The required block height was not metMutex poisonedtransaction  not found", 37);
        *((unsigned long long *)a0) = 9223372036854775817;
        return (unsigned long long)core::ptr::drop_in_place<fuel_core_client::reqwest_ext::FuelGraphQlResponse<fuel_core_client::client::schema::tx::TransactionStatusQuery>>(a2);
    }
    *((int128_t *)&v7) = *((int128_t *)((char *)&a2->field_78 + 8));
    *((int128_t *)&v6) = *((int128_t *)((char *)&a2->field_68 + 8));
    *((int128_t *)&v5) = *((int128_t *)((char *)&a2->field_58 + 8));
    *((int128_t *)&v4) = *((int128_t *)((char *)&a2->field_48 + 8));
    *((int128_t *)&v3) = *((int128_t *)((char *)&a2->field_38 + 8));
    *((int128_t *)&v2) = *((int128_t *)((char *)&a2->field_28 + 8));
    *((int128_t *)&v1) = *((int128_t *)((char *)&a2->field_18 + 8));
    *((int128_t *)&v0) = *((int128_t *)&(&a2->field_10)[1]);
    *((uint128_t *)&v8) = a2->field_0;
    v9 = a2->field_10;
    if ((long long)v0 == 9223372036854775817)
    {
        if ((long long)v8 == 0x8000000000000000)
        {
            v13 = 40.new("Invalid responseresolved_outputs", 16);
        }
        else
        {
            v11.into_iter(a2);
            v10.collect(&v11);
            v13 = fuel_core_client::client::from_strings_errors_to_std_error(&v10);
        }
        *((unsigned long long *)&a0[8]) = v13;
        *((unsigned long long *)a0) = 9223372036854775817;
        return v13;
    }
    else
    {
        v14 = &(&a2->field_10)[1];
        *((int128_t *)&a0[112]) = *((int128_t *)(v14 + 112));
        *((int128_t *)&a0[96]) = *((int128_t *)(v14 + 96));
        *((int128_t *)&a0[80]) = *((int128_t *)(v14 + 80));
        *((int128_t *)&a0[64]) = *((int128_t *)(v14 + 64));
        v15 = *((int128_t *)v14);
        v16 = *((int128_t *)(v14 + 16));
        v17 = *((int128_t *)(v14 + 32));
        *((int128_t *)&a0[48]) = *((int128_t *)(v14 + 48));
        a0[32] = v17;
        a0[16] = v16;
        *(a0) = v15;
        if ((long long)v8 == 0x8000000000000000)
            return v9;
        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<cynic::result::GraphQlError>>(&v8);
    }
}
