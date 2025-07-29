long long metal_crusher::fun::reanimate_gui_shell()
{
    unsigned long v1;  // rax

    if (!(char)metal_crusher::fun::is_kde_plasma())
        return v1;
    return metal_crusher::fun::execute_shell("plasmashellMETAL CRUSHERsh-c/usr/bin/", 11);
}
