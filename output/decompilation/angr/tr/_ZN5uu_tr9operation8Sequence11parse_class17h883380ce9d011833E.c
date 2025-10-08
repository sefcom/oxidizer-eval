long long uu_tr::operation::Sequence::parse_class(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x1d8]
    unsigned long long v1;  // [bp-0x1d0]
    unsigned long long v2;  // [bp-0x1c8]
    unsigned long long v3;  // [bp-0x1c0]
    char v4;  // [bp-0x1b8]
    char v5;  // [bp-0x1b7]
    unsigned long long v6;  // [bp-0x1a8]
    unsigned long long v7;  // [bp-0x1a0]
    char v8;  // [bp-0x198]
    char v9;  // [bp-0x197]
    unsigned long long v10;  // [bp-0x188]
    unsigned long long v11;  // [bp-0x180]
    char v12;  // [bp-0x178]
    char v13;  // [bp-0x177]
    unsigned long long v14;  // [bp-0x168]
    unsigned long long v15;  // [bp-0x160]
    char v16;  // [bp-0x158]
    char v17;  // [bp-0x157]
    unsigned long long v18;  // [bp-0x148]
    unsigned long long v19;  // [bp-0x140]
    char v20;  // [bp-0x138]
    char v21;  // [bp-0x137]
    unsigned long long v22;  // [bp-0x128]
    unsigned long long v23;  // [bp-0x120]
    char v24;  // [bp-0x118]
    char v25;  // [bp-0x117]
    unsigned long long v26;  // [bp-0x108]
    unsigned long long v27;  // [bp-0x100]
    char v28;  // [bp-0xf8]
    char v29;  // [bp-0xf7]
    unsigned long long v30;  // [bp-0xe8]
    unsigned long long v31;  // [bp-0xe0]
    char v32;  // [bp-0xd8]
    char v33;  // [bp-0xd7]
    unsigned long long v34;  // [bp-0xc8]
    unsigned long long v35;  // [bp-0xc0]
    char v36;  // [bp-0xb8]
    char v37;  // [bp-0xb7]
    unsigned long long v38;  // [bp-0xa8]
    unsigned long long v39;  // [bp-0xa0]
    char v40;  // [bp-0x98]
    char v41;  // [bp-0x97]
    unsigned long long v42;  // [bp-0x88]
    unsigned long long v43;  // [bp-0x80]
    char v44;  // [bp-0x78]
    char v45;  // [bp-0x77]
    unsigned long long v46;  // [bp-0x68]
    unsigned long long v47;  // [bp-0x60]
    char v48;  // [bp-0x58]
    char v49;  // [bp-0x57]
    unsigned long long v50;  // [bp-0x48]
    unsigned long long v51;  // [bp-0x40]
    unsigned int v52;  // [bp-0x38]
    unsigned long long v53;  // [bp-0x18]
    void* v54;  // [bp-0x10]

    v0 = "[:alnumalphablankcntrldigitgraphlowerprintpunctspaceupperxdigit:][==]";
    v1 = 2;
    v2 = ":][==]";
    v3 = 2;
    v4 = 4;
    v5 = 0;
    v6 = "alnumalphablankcntrldigitgraphlowerprintpunctspaceupperxdigit:][==]";
    v7 = 5;
    v8 = 4;
    v9 = 1;
    v10 = "alphablankcntrldigitgraphlowerprintpunctspaceupperxdigit:][==]";
    v11 = 5;
    v12 = 4;
    v13 = 2;
    v14 = "blankcntrldigitgraphlowerprintpunctspaceupperxdigit:][==]";
    v15 = 5;
    v16 = 4;
    v17 = 3;
    v18 = "cntrldigitgraphlowerprintpunctspaceupperxdigit:][==]";
    v19 = 5;
    v20 = 4;
    v21 = 4;
    v22 = "digitgraphlowerprintpunctspaceupperxdigit:][==]";
    v23 = 5;
    v24 = 4;
    v25 = 5;
    v26 = "graphlowerprintpunctspaceupperxdigit:][==]";
    v27 = 5;
    v28 = 4;
    v29 = 6;
    v30 = "lowerprintpunctspaceupperxdigit:][==]";
    v31 = 5;
    v32 = 4;
    v33 = 7;
    v34 = "printpunctspaceupperxdigit:][==]";
    v35 = 5;
    v36 = 4;
    v37 = 8;
    v38 = "punctspaceupperxdigit:][==]";
    v39 = 5;
    v40 = 4;
    v41 = 9;
    v42 = "spaceupperxdigit:][==]";
    v43 = 5;
    v44 = 4;
    v45 = 10;
    v46 = "upperxdigit:][==]";
    v47 = 5;
    v48 = 4;
    v49 = 11;
    v50 = "xdigit:][==]";
    v51 = 6;
    v52 = 0;
    v53 = 1;
    v54 = 0;
    a0.process(&v0, a1, a2);
    return core::ptr::drop_in_place<nom::sequence::Preceded<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::sequence::Terminated<nom::branch::Choice<(nom::internal::Map<nom::branch::Choice<(nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>)>,core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>::Ok>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>)>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>>>(&v0);
}
