long long fish::complete::Completer::try_complete_user::getpwent_name(unsigned long long *a0)
{
    char **v1;  // rax

    v1 = getpwent();
    if (!v1)
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    return fish::common::charptr2wcstring(a0, *(v1));
}
