
  int64_t uu_stty::tiocgwinsz::hc5ed27eca5acd6af(int64_t arg1, int64_t arg2)

{
    /* tailcall */
    return nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::result::hc11f6a0d430b17c4(ioctl(
        arg1, 0x5413, arg2));
}
