long long forc_publish::forc_pub_client::ForcPubClient::new(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    int v3;  // xmm1
    int v4;  // xmm2
    int v5;  // xmm3

    v0 = v2;
    a0->field_58 = reqwest::async_impl::client::Client::new();
    v3 = a1->field_10;
    v4 = a1->field_20;
    v5 = a1->field_30;
    a0->field_0 = a1->field_0;
    *((void*)&a0->field_10) = v3;
    *((void*)&a0->field_20) = v4;
    *((void*)&a0->field_30) = v5;
    a0->field_40 = a1->field_40;
    a0->field_50 = a1->field_50;
    return a0;
}
