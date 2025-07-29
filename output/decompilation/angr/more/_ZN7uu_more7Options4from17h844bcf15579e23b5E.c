long long uu_more::Options::from(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x6a]
    char v1;  // [bp-0x69]
    unsigned int v2;  // [bp-0x68]
    unsigned int v3;  // [bp-0x64]
    void* v4;  // [bp-0x60]
    char v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x58]
    char v7;  // [bp-0x48]
    unsigned short *v9;  // r15
    unsigned long v10;  // rbp
    unsigned short *v11;  // rax
    unsigned long long v12;  // rdx
    unsigned short *v13;  // rax
    unsigned long long *v15;  // rax
    unsigned long long v16;  // rax
    char v17;  // al
    char v18;  // al
    char v19;  // al
    char v20;  // al
    char v21;  // al

    v5.try_get_one(a1, "linesnumberfrom-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plai", 5);
    v9 = "linesnumberfrom-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plai".unwrap(5, &v5);
    if (v9)
        v10 = *(v9);
    v5.try_get_one(a1, "numberfrom-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore", 6);
    v11 = "numberfrom-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore".unwrap(6, &v5);
    if (v11)
    {
        v12 = *(v11);
        if (!v9)
            goto LABEL_4bc826;
LABEL_4bc80a:
        v12 = v10 & 4294967295;
        v13 = v11;
        if (!(v10 & 65535))
            goto LABEL_4bc836;
LABEL_4bc811:
        v3 = (unsigned int)v12 + 1;
        v2 = (unsigned int)v13 & 0xffff0000 | 1;
    }
    else
    {
        if (!(!v9))
            goto LABEL_4bc80a;
LABEL_4bc826:
        v13 = v11 & 0xffffffffffffff00 | !v11;
        if (!!(unsigned short)v12 && !!v11)
            goto LABEL_4bc811;
LABEL_4bc836:
        v2 = 0;
        v3 = (unsigned int)v13;
    }
    v5.try_get_one(a1, "from-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-", 9);
    v15 = "from-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-".unwrap(9, &v5);
    if (v15)
        *((int *)&v4) = (1 <= *(v15) ? *(v15) - 1 : 0);
    else
        v4 = 0;
    v5.try_get_one(a1, "patternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore", 7);
    v16 = "patternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore".unwrap(7, &v5);
    if (v16)
        v5.clone(v16);
    else
        v6 = 0x8000000000000000;
    v1 = a1.get_flag("silentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-f", 6);
    v0 = a1.get_flag("logicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-li", 7);
    v17 = a1.get_flag("exit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-", 11);
    v18 = a1.get_flag("no-pause", 8);
    v19 = a1.get_flag("print-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patter", 10);
    v20 = a1.get_flag("clean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore", 11);
    v21 = a1.get_flag("squeezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files", 7);
    a0->field_10 = *((long long *)&v7);
    a0->field_0 = *((int128_t *)&v6);
    a0->field_24 = v1;
    a0->field_25 = v0;
    a0->field_26 = v17;
    a0->field_27 = v18;
    a0->field_28 = v19;
    a0->field_29 = v20;
    a0->field_2a = v21;
    a0->field_20 = v2;
    a0->field_22 = v3;
    a0->field_18 = v4;
    return a0;
}
