long long uu_more::Options::from(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x86]
    char v1;  // [bp-0x85]
    unsigned int v2;  // [bp-0x84]
    unsigned long v3;  // [bp-0x80]
    unsigned short *v4;  // [bp-0x78]
    char v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x70]
    unsigned long v7;  // [bp-0x60]
    char v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x30]
    unsigned long long v10;  // [bp-0x28]
    unsigned long long v11;  // [bp-0x20]
    unsigned long long v12;  // [bp-0x18]
    unsigned long long v13;  // [bp-0x10]
    unsigned long long v15;  // r15
    unsigned long long v16;  // r14
    unsigned long long v17;  // r13
    unsigned long long v18;  // r12
    unsigned long long v19;  // rbx
    unsigned short v20;  // r14w
    unsigned short *v21;  // rax
    unsigned short *v22;  // r13
    unsigned long long *v23;  // r12
    unsigned long long v24;  // rax
    char v25;  // al
    char v26;  // al
    unsigned short v27;  // si
    unsigned short v28;  // cx
    unsigned short v29;  // si
    void* v30;  // rsi

    v13 = v15;
    v12 = v16;
    v11 = v17;
    v10 = v18;
    v9 = v19;
    v20 = 62747;
    v8.try_get_one(a1, "linesnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and ", 5);
    v4 = "linesnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and ".unwrap(5, &v8);
    if (v4)
        v20 = *(v4);
    v8.try_get_one(a1, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and displ", 6);
    v21 = "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and displ".unwrap(6, &v8);
    v22 = v21;
    if (v22)
        v21 = *(v22);
    v2 = (unsigned int)v21;
    v8.try_get_one(a1);
    v23 = v8.unwrap();
    if (v23)
        v3 = *(v23);
    v8.try_get_one(a1);
    v24 = v8.unwrap();
    if (v24)
        v5.clone(v24);
    else
        v6 = 0x8000000000000000;
    v1 = a1.get_flag("clean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multipl", 11);
    v0 = a1.get_flag("print-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lin", 10);
    v25 = a1.get_flag("silentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into on", 6);
    v26 = a1.get_flag("squeezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplain", 7);
    v27 = v2;
    if (!v4)
    {
        v28 = v27 & v22;
        if (v4)
            goto LABEL_47a5a0;
LABEL_47a59f:
        v29 = v27;
    }
    else
    {
        v28 = v20;
        if (!v4)
            goto LABEL_47a59f;
LABEL_47a5a0:
        v29 = v20;
    }
    v30 = (2 <= v3 ? v3 - 1 : 0);
    if (!v23)
        v30 = 0;
    a0->field_24 = v1;
    a0->field_18 = v30;
    a0->field_20 = v28;
    a0->field_22 = v29 + 1;
    a0->field_0 = *((int128_t *)&v6);
    a0->field_10 = v7;
    a0->field_25 = v0;
    a0->field_26 = v25;
    a0->field_27 = v26;
    return a0;
}
