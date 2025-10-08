long long fish::io::IoStreams::out_is_terminal(struct_0 *a0)
{
    if (!a0->field_27)
        return fish::nix::isatty(1);
    return 0;
}
