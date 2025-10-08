void fish::termsize::TermsizeContainer::invalidate_tty()
{
    atomic_fetch_add(&_ZN4fish8termsize22TTY_TERMSIZE_GEN_COUNT17ha4aa3eda6c6dc63dE);
    return;
}
