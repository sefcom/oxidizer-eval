long long forc_publish::error::Error::from_response(struct_0 *a0, void* a1)
{
    unsigned long long v1;  // rax

    v1 = ::libc.so.0::memcpy(a0, a1, 136);
    a0->field_34a = 0;
    return v1;
}
