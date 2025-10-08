long long fish::null_terminated_array::OwningNullTerminatedArray::get(unsigned int a0[7])
{
    return *((long long *)&a0[4]).get(*((long long *)&a0[6]));
}
