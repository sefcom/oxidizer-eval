long long fish::kill::KillRing::add(unsigned long long a0, struct_0 *a1)
{
    if (a1->field_10)
        return a0.push_front(a1);
    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
}
