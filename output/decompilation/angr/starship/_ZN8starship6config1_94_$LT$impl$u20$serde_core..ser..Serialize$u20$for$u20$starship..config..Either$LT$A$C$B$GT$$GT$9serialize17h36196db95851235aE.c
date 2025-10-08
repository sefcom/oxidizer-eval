long long starship::config::_::<impl serde_core::ser::Serialize for starship::config::Either<A,B>>::serialize(unsigned long long a0, void* a1)
{
    if (!*((long long *)a1))
        return a0.serialize((int)a1[8]);
    return a0.serialize(*((long long *)a1), (long long)a1[8]);
}
