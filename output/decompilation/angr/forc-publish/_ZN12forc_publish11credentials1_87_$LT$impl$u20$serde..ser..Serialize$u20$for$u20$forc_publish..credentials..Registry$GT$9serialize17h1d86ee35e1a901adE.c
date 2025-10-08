long long forc_publish::credentials::_::<impl serde::ser::Serialize for forc_publish::credentials::Registry>::serialize(unsigned int *a0)
{
    unsigned long long v1;  // rax

    v1 = a0 + 2.serialize_struct();
    *(a0) = 1;
    return v1;
}
