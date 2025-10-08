long long uu_stty::apply_flag(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi
    unsigned long long v4;  // rax
    unsigned long v5;  // rax

    v0 = v2;
    if ((char)a1.equal(a2, "ignbrkbrkintignparparmrkinpckistripinlcrigncricrnlixofftandemixanyimaxbeliutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 6))
    {
        v3 = &g_4e3138;
    }
    else if ((char)a1.equal(a2, "brkintignparparmrkinpckistripinlcrigncricrnlixofftandemixanyimaxbeliutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 6))
    {
        v3 = &g_4e3158;
    }
    else if ((char)a1.equal(a2, "ignparparmrkinpckistripinlcrigncricrnlixofftandemixanyimaxbeliutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 6))
    {
        v3 = &g_4e3178;
    }
    else if ((char)a1.equal(a2, "parmrkinpckistripinlcrigncricrnlixofftandemixanyimaxbeliutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 6))
    {
        v3 = &g_4e3198;
    }
    else if ((char)a1.equal(a2, "inpckistripinlcrigncricrnlixofftandemixanyimaxbeliutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 5))
    {
        v3 = &g_4e31b8;
    }
    else if ((char)a1.equal(a2, "istripinlcrigncricrnlixofftandemixanyimaxbeliutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 6))
    {
        v3 = &g_4e31d8;
    }
    else if ((char)a1.equal(a2, "inlcrigncricrnlixofftandemixanyimaxbeliutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 5))
    {
        v3 = &g_4e31f8;
    }
    else if ((char)a1.equal(a2, "igncricrnlixofftandemixanyimaxbeliutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 5))
    {
        v3 = &g_4e3218;
    }
    else if ((char)a1.equal(a2, "icrnlixofftandemixanyimaxbeliutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 5))
    {
        v3 = &g_4e3238;
    }
    else if ((char)a1.equal(a2, "ixofftandemixanyimaxbeliutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 5))
    {
        v3 = &g_4e3258;
    }
    else if ((char)a1.equal(a2, "tandemixanyimaxbeliutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 6))
    {
        v3 = &g_4e3278;
    }
    else if ((char)a1.equal(a2, "ixonkindAuto/", 4))
    {
        v3 = &g_4e3298;
    }
    else if ((char)a1.equal(a2, "ixanyimaxbeliutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 5))
    {
        v3 = &g_4e32b8;
    }
    else if ((char)a1.equal(a2, "imaxbeliutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 7))
    {
        v3 = &g_4e32d8;
    }
    else
    {
        v4 = a1.equal(a2, "iutf8opostolcucocrnlonlcronocronlretofdelnl0nl1cr0cr1cr2cr3bs0bs1vt0vt1ff0ff1icanoniextenechoeechokechonlnoflshtostopechoprtechoctlctlechoechokecrtkillflushoextproc -", 5);
        if (!(char)v4)
            return v4 & 0xffffffffffffff00 | 2;
        v3 = &g_4e32f8;
    }
    v5 = *(v3);
    if (a3)
    {
        if ((unsigned int)v5)
            return 0;
    }
    else
    {
        if (((char)v5 & 1))
            v3 + 1.apply(a0, 0);
    }
    return v3 + 6.apply(a0, a3 ^ 1) & 0xffffffffffffff00 | 1;
}
