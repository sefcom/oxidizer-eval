long long uu_tr::operation::Sequence::parse_octal_with_warning(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    return a0.process("\\", 1, a1, a2);
}
