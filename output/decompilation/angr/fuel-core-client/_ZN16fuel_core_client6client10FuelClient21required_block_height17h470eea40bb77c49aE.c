long long fuel_core_client::client::FuelClient::required_block_height(struct_0 *a0)
{
    char v0;  // [bp-0x28]
    struct_1 *v1;  // [bp-0x20]
    char v2;  // [bp-0x18]

    if (a0->field_58 == 1)
        return a0->field_5c;
    v0.lock(a0->field_60 + 16);
    if (!(v0 & 1))
    {
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<core::option::Option<fuel_types::numeric_types::BlockHeight>>>(v1, *((int *)&v2));
        return v1->field_8;
    }
    core::ptr::drop_in_place<core::result::Result<std::sync::poison::mutex::MutexGuard<core::option::Option<fuel_types::numeric_types::BlockHeight>>,std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<core::option::Option<fuel_types::numeric_types::BlockHeight>>>>>(&v0);
    return 0;
}
