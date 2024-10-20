__int64 *__fastcall uu_shuf::parse_range(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // r12
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rax
  char **v15; // [rsp+8h] [rbp-180h] BYREF
  __int64 v16; // [rsp+10h] [rbp-178h]
  __int64 **v17; // [rsp+18h] [rbp-170h]
  __int64 v18; // [rsp+20h] [rbp-168h]
  __int64 v19; // [rsp+28h] [rbp-160h]
  __int64 *v20; // [rsp+38h] [rbp-150h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+40h] [rbp-148h]
  __int64 v22; // [rsp+48h] [rbp-140h] BYREF
  __int128 v23; // [rsp+50h] [rbp-138h]
  __int64 v24; // [rsp+60h] [rbp-128h] BYREF
  __int64 v25; // [rsp+68h] [rbp-120h]
  __int64 v26; // [rsp+70h] [rbp-118h]
  char v27; // [rsp+78h] [rbp-110h]
  __int64 v28; // [rsp+80h] [rbp-108h]
  char v29[8]; // [rsp+88h] [rbp-100h] BYREF
  unsigned __int64 v30; // [rsp+90h] [rbp-F8h]
  char v31[8]; // [rsp+98h] [rbp-F0h] BYREF
  unsigned __int64 v32; // [rsp+A0h] [rbp-E8h]
  _QWORD v33[2]; // [rsp+A8h] [rbp-E0h] BYREF
  _QWORD v34[2]; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+D0h] [rbp-B8h]
  __int64 v37; // [rsp+D8h] [rbp-B0h]
  __int64 v38; // [rsp+E0h] [rbp-A8h]
  _QWORD v39[3]; // [rsp+E8h] [rbp-A0h] BYREF
  char v40; // [rsp+100h] [rbp-88h]
  _QWORD v41[3]; // [rsp+108h] [rbp-80h] BYREF
  char v42; // [rsp+120h] [rbp-68h]
  __int128 v43; // [rsp+128h] [rbp-60h] BYREF
  __int64 v44; // [rsp+138h] [rbp-50h]
  __int128 v45; // [rsp+140h] [rbp-48h] BYREF
  __int64 v46; // [rsp+150h] [rbp-38h]

  core::str::<impl str>::split_once(&v35, a2, a3, 45LL);
  v4 = v35;
  if ( v35 )
  {
    v5 = v36;
    v28 = v37;
    v6 = v38;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v29, v35, v36);
    if ( (v29[0] & 1) != 0 )
    {
      v24 = 0LL;
      v25 = v4;
      v26 = v5;
      v27 = 1;
      v20 = &v24;
      v21 = <os_display::Quoted as core::fmt::Display>::fmt;
      v15 = &off_122548;
      v16 = 1LL;
      v17 = &v20;
      v18 = 1LL;
      v19 = 0LL;
      alloc::fmt::format::format_inner(&v22, &v15);
      v9 = v22;
      if ( v22 != 0x8000000000000000LL )
        goto LABEL_15;
      v7 = v23;
    }
    else
    {
      v7 = v30;
    }
    v10 = v28;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v31, v28, v6);
    if ( (v31[0] & 1) == 0 )
    {
      v11 = v32;
      if ( v7 <= v32 )
        goto LABEL_18;
LABEL_12:
      if ( v7 != v11 + 1 )
      {
        v39[0] = 0LL;
        v39[1] = a2;
        v39[2] = a3;
        v40 = 1;
        v33[0] = v39;
        v33[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v15 = &off_122548;
        v16 = 1LL;
        v17 = (__int64 **)v33;
        v18 = 1LL;
        v19 = 0LL;
        alloc::fmt::format::format_inner(&v43, &v15);
        a1[3] = v44;
        v8 = v43;
        goto LABEL_14;
      }
LABEL_18:
      a1[1] = v7;
      a1[2] = v11;
      *((_BYTE *)a1 + 24) = 0;
      v13 = 0LL;
      goto LABEL_17;
    }
    v24 = 0LL;
    v25 = v10;
    v26 = v6;
    v27 = 1;
    v20 = &v24;
    v21 = <os_display::Quoted as core::fmt::Display>::fmt;
    v15 = &off_122548;
    v16 = 1LL;
    v17 = &v20;
    v18 = 1LL;
    v19 = 0LL;
    alloc::fmt::format::format_inner(&v22, &v15);
    v9 = v22;
    if ( v22 == 0x8000000000000000LL )
    {
      v11 = v23;
      if ( v7 <= (unsigned __int64)v23 )
        goto LABEL_18;
      goto LABEL_12;
    }
LABEL_15:
    v12 = v23;
    a1[1] = v9;
    *((_OWORD *)a1 + 1) = v12;
    goto LABEL_16;
  }
  v41[0] = 0LL;
  v41[1] = a2;
  v41[2] = a3;
  v42 = 1;
  v34[0] = v41;
  v34[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v15 = &off_122548;
  v16 = 1LL;
  v17 = (__int64 **)v34;
  v18 = 1LL;
  v19 = 0LL;
  alloc::fmt::format::format_inner(&v45, &v15);
  a1[3] = v46;
  v8 = v45;
LABEL_14:
  *(_OWORD *)(a1 + 1) = v8;
LABEL_16:
  v13 = 1LL;
LABEL_17:
  *a1 = v13;
  return a1;
}
