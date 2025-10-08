char fish::global_safety::RelaxedAtomicBool::swap(unsigned long a0, char a1)
{
    return (char)atomic_exchange(a0, a1);
}
