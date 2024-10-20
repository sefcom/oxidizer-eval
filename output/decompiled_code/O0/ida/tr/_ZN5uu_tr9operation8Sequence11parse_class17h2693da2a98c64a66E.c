__int64 __fastcall uu_tr::operation::Sequence::parse_class(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[4]; // [rsp+0h] [rbp-1D8h] BYREF
  __int16 v5; // [rsp+20h] [rbp-1B8h]
  const char *v6; // [rsp+30h] [rbp-1A8h]
  __int64 v7; // [rsp+38h] [rbp-1A0h]
  __int16 v8; // [rsp+40h] [rbp-198h]
  const char *v9; // [rsp+50h] [rbp-188h]
  __int64 v10; // [rsp+58h] [rbp-180h]
  __int16 v11; // [rsp+60h] [rbp-178h]
  const char *v12; // [rsp+70h] [rbp-168h]
  __int64 v13; // [rsp+78h] [rbp-160h]
  __int16 v14; // [rsp+80h] [rbp-158h]
  const char *v15; // [rsp+90h] [rbp-148h]
  __int64 v16; // [rsp+98h] [rbp-140h]
  __int16 v17; // [rsp+A0h] [rbp-138h]
  const char *v18; // [rsp+B0h] [rbp-128h]
  __int64 v19; // [rsp+B8h] [rbp-120h]
  __int16 v20; // [rsp+C0h] [rbp-118h]
  const char *v21; // [rsp+D0h] [rbp-108h]
  __int64 v22; // [rsp+D8h] [rbp-100h]
  __int16 v23; // [rsp+E0h] [rbp-F8h]
  const char *v24; // [rsp+F0h] [rbp-E8h]
  __int64 v25; // [rsp+F8h] [rbp-E0h]
  __int16 v26; // [rsp+100h] [rbp-D8h]
  const char *v27; // [rsp+110h] [rbp-C8h]
  __int64 v28; // [rsp+118h] [rbp-C0h]
  __int16 v29; // [rsp+120h] [rbp-B8h]
  const char *v30; // [rsp+130h] [rbp-A8h]
  __int64 v31; // [rsp+138h] [rbp-A0h]
  __int16 v32; // [rsp+140h] [rbp-98h]
  const char *v33; // [rsp+150h] [rbp-88h]
  __int64 v34; // [rsp+158h] [rbp-80h]
  __int16 v35; // [rsp+160h] [rbp-78h]
  const char *v36; // [rsp+170h] [rbp-68h]
  __int64 v37; // [rsp+178h] [rbp-60h]
  __int16 v38; // [rsp+180h] [rbp-58h]
  const char *v39; // [rsp+190h] [rbp-48h]
  __int64 v40; // [rsp+198h] [rbp-40h]
  unsigned __int64 v41; // [rsp+1A0h] [rbp-38h]
  __int64 v42; // [rsp+1A8h] [rbp-30h]
  __int64 v43; // [rsp+1B8h] [rbp-20h]
  __int64 v44; // [rsp+1C0h] [rbp-18h]

  v4[0] = asc_20816;
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
  v43 = 1LL;
  v44 = 0LL;
  v4[2] = asc_20855;
  v4[3] = 2LL;
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64))nom::sequence::delimited::{{closure}})(a1, v4, a2, a3);
  if ( v41 != 0x800000000000000ALL && v41 && ((v41 ^ 0x8000000000000000LL) == 4 || (v41 ^ 0x8000000000000000LL) >= 0xA) )
    _rust_dealloc(v42, v41, 1LL);
  return a1;
}
