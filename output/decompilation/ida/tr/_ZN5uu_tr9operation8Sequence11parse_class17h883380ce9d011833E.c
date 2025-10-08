__int64 __fastcall uu_tr::operation::Sequence::parse_class(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[4]; // [rsp+0h] [rbp-1D8h] BYREF
  char v5; // [rsp+20h] [rbp-1B8h]
  char v6; // [rsp+21h] [rbp-1B7h]
  const char *v7; // [rsp+30h] [rbp-1A8h]
  __int64 v8; // [rsp+38h] [rbp-1A0h]
  char v9; // [rsp+40h] [rbp-198h]
  char v10; // [rsp+41h] [rbp-197h]
  const char *v11; // [rsp+50h] [rbp-188h]
  __int64 v12; // [rsp+58h] [rbp-180h]
  char v13; // [rsp+60h] [rbp-178h]
  char v14; // [rsp+61h] [rbp-177h]
  const char *v15; // [rsp+70h] [rbp-168h]
  __int64 v16; // [rsp+78h] [rbp-160h]
  char v17; // [rsp+80h] [rbp-158h]
  char v18; // [rsp+81h] [rbp-157h]
  const char *v19; // [rsp+90h] [rbp-148h]
  __int64 v20; // [rsp+98h] [rbp-140h]
  char v21; // [rsp+A0h] [rbp-138h]
  char v22; // [rsp+A1h] [rbp-137h]
  const char *v23; // [rsp+B0h] [rbp-128h]
  __int64 v24; // [rsp+B8h] [rbp-120h]
  char v25; // [rsp+C0h] [rbp-118h]
  char v26; // [rsp+C1h] [rbp-117h]
  const char *v27; // [rsp+D0h] [rbp-108h]
  __int64 v28; // [rsp+D8h] [rbp-100h]
  char v29; // [rsp+E0h] [rbp-F8h]
  char v30; // [rsp+E1h] [rbp-F7h]
  const char *v31; // [rsp+F0h] [rbp-E8h]
  __int64 v32; // [rsp+F8h] [rbp-E0h]
  char v33; // [rsp+100h] [rbp-D8h]
  char v34; // [rsp+101h] [rbp-D7h]
  const char *v35; // [rsp+110h] [rbp-C8h]
  __int64 v36; // [rsp+118h] [rbp-C0h]
  char v37; // [rsp+120h] [rbp-B8h]
  char v38; // [rsp+121h] [rbp-B7h]
  const char *v39; // [rsp+130h] [rbp-A8h]
  __int64 v40; // [rsp+138h] [rbp-A0h]
  char v41; // [rsp+140h] [rbp-98h]
  char v42; // [rsp+141h] [rbp-97h]
  const char *v43; // [rsp+150h] [rbp-88h]
  __int64 v44; // [rsp+158h] [rbp-80h]
  char v45; // [rsp+160h] [rbp-78h]
  char v46; // [rsp+161h] [rbp-77h]
  const char *v47; // [rsp+170h] [rbp-68h]
  __int64 v48; // [rsp+178h] [rbp-60h]
  char v49; // [rsp+180h] [rbp-58h]
  char v50; // [rsp+181h] [rbp-57h]
  const char *v51; // [rsp+190h] [rbp-48h]
  __int64 v52; // [rsp+198h] [rbp-40h]
  int v53; // [rsp+1A0h] [rbp-38h]
  __int64 v54; // [rsp+1C0h] [rbp-18h]
  __int64 v55; // [rsp+1C8h] [rbp-10h]

  v4[0] = asc_1BB80;
  v4[1] = 2LL;
  v4[2] = asc_1BBBF;
  v4[3] = 2LL;
  v5 = 4;
  v6 = 0;
  v7 = aAlnum;
  v8 = 5LL;
  v9 = 4;
  v10 = 1;
  v11 = aAlpha;
  v12 = 5LL;
  v13 = 4;
  v14 = 2;
  v15 = aBlank;
  v16 = 5LL;
  v17 = 4;
  v18 = 3;
  v19 = aCntrl;
  v20 = 5LL;
  v21 = 4;
  v22 = 4;
  v23 = aDigit;
  v24 = 5LL;
  v25 = 4;
  v26 = 5;
  v27 = aGraph;
  v28 = 5LL;
  v29 = 4;
  v30 = 6;
  v31 = aLower;
  v32 = 5LL;
  v33 = 4;
  v34 = 7;
  v35 = aPrint;
  v36 = 5LL;
  v37 = 4;
  v38 = 8;
  v39 = aPunct;
  v40 = 5LL;
  v41 = 4;
  v42 = 9;
  v43 = aSpace;
  v44 = 5LL;
  v45 = 4;
  v46 = 10;
  v47 = aUpper;
  v48 = 5LL;
  v49 = 4;
  v50 = 11;
  v51 = aXdigit;
  v52 = 6LL;
  v53 = 0;
  v54 = 1LL;
  v55 = 0LL;
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64))<nom::sequence::Preceded<F,G> as nom::internal::Parser<I>>::process)(
    a1,
    v4,
    a2,
    a3);
  return core::ptr::drop_in_place<nom::sequence::Preceded<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::sequence::Terminated<nom::branch::Choice<(nom::internal::Map<nom::branch::Choice<(nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],uu_tr::operation::Sequence,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>)>,core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>::Ok>,nom::internal::Map<nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::combinator::value<&[u8],core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>)>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>>>(v4);
}