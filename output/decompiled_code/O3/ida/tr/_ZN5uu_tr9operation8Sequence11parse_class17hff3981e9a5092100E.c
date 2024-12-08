__int64 __fastcall uu_tr::operation::Sequence::parse_class(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[4]; // [rsp+8h] [rbp-1D0h] BYREF
  __int16 v5; // [rsp+28h] [rbp-1B0h]
  const char *v6; // [rsp+38h] [rbp-1A0h]
  __int64 v7; // [rsp+40h] [rbp-198h]
  __int16 v8; // [rsp+48h] [rbp-190h]
  const char *v9; // [rsp+58h] [rbp-180h]
  __int64 v10; // [rsp+60h] [rbp-178h]
  __int16 v11; // [rsp+68h] [rbp-170h]
  const char *v12; // [rsp+78h] [rbp-160h]
  __int64 v13; // [rsp+80h] [rbp-158h]
  __int16 v14; // [rsp+88h] [rbp-150h]
  const char *v15; // [rsp+98h] [rbp-140h]
  __int64 v16; // [rsp+A0h] [rbp-138h]
  __int16 v17; // [rsp+A8h] [rbp-130h]
  const char *v18; // [rsp+B8h] [rbp-120h]
  __int64 v19; // [rsp+C0h] [rbp-118h]
  __int16 v20; // [rsp+C8h] [rbp-110h]
  const char *v21; // [rsp+D8h] [rbp-100h]
  __int64 v22; // [rsp+E0h] [rbp-F8h]
  __int16 v23; // [rsp+E8h] [rbp-F0h]
  const char *v24; // [rsp+F8h] [rbp-E0h]
  __int64 v25; // [rsp+100h] [rbp-D8h]
  __int16 v26; // [rsp+108h] [rbp-D0h]
  const char *v27; // [rsp+118h] [rbp-C0h]
  __int64 v28; // [rsp+120h] [rbp-B8h]
  __int16 v29; // [rsp+128h] [rbp-B0h]
  const char *v30; // [rsp+138h] [rbp-A0h]
  __int64 v31; // [rsp+140h] [rbp-98h]
  __int16 v32; // [rsp+148h] [rbp-90h]
  const char *v33; // [rsp+158h] [rbp-80h]
  __int64 v34; // [rsp+160h] [rbp-78h]
  __int16 v35; // [rsp+168h] [rbp-70h]
  const char *v36; // [rsp+178h] [rbp-60h]
  __int64 v37; // [rsp+180h] [rbp-58h]
  __int16 v38; // [rsp+188h] [rbp-50h]
  const char *v39; // [rsp+198h] [rbp-40h]
  __int64 v40; // [rsp+1A0h] [rbp-38h]
  unsigned __int64 v41; // [rsp+1A8h] [rbp-30h]
  __int64 v42; // [rsp+1C0h] [rbp-18h]
  __int64 v43; // [rsp+1C8h] [rbp-10h]

  v4[0] = asc_14A0F;
  v4[1] = 2LL;
  v5 = 4;
  v6 = aAlnum;
  v7 = 5LL;
  v8 = 260;
  v9 = aAlpha;
  v10 = 5LL;
  v11 = 516;
  v12 = aBlank;
  v13 = 5LL;
  v14 = 772;
  v15 = aCntrl;
  v16 = 5LL;
  v17 = 1028;
  v18 = aDigit;
  v19 = 5LL;
  v20 = 1284;
  v21 = aGraph;
  v22 = 5LL;
  v23 = 1540;
  v24 = aLower;
  v25 = 5LL;
  v26 = 1796;
  v27 = aPrint;
  v28 = 5LL;
  v29 = 2052;
  v30 = aPunct;
  v31 = 5LL;
  v32 = 2308;
  v33 = aSpace;
  v34 = 5LL;
  v35 = 2564;
  v36 = aUpper;
  v37 = 5LL;
  v38 = 2820;
  v39 = aXdigit;
  v40 = 6LL;
  v41 = 0x8000000000000000LL;
  v42 = 1LL;
  v43 = 0LL;
  v4[2] = asc_14A4E;
  v4[3] = 2LL;
  nom::sequence::delimited::{{closure}}(a1, v4, a2, a3);
  return core::ptr::drop_in_place<nom::sequence::delimited<&[u8],&[u8],core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::branch::alt<&[u8],core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,nom::error::Error<&[u8]>,(nom::combinator::map<&[u8],uu_tr::operation::Sequence,core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,nom::error::Error<&[u8]>,nom::branch::alt<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,(nom::combinator::value<&[u8],uu_tr::operation::Sequence,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}})>::{{closure}},core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>::Ok>::{{closure}},nom::combinator::value<&[u8],core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}})>::{{closure}},nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>(v4);
}
