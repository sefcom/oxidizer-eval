__int64 __fastcall alacritty::logging::create_log_message(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // r14
  __int64 (__fastcall *v13)(); // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // [rsp+4h] [rbp-1B4h] BYREF
  __int128 v22; // [rsp+8h] [rbp-1B0h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-1A0h]
  __int64 v24; // [rsp+20h] [rbp-198h] BYREF
  __int64 v25; // [rsp+28h] [rbp-190h]
  __int64 v26; // [rsp+30h] [rbp-188h]
  __int64 v27; // [rsp+38h] [rbp-180h] BYREF
  char **v28; // [rsp+40h] [rbp-178h] BYREF
  __int64 v29; // [rsp+48h] [rbp-170h]
  __int64 **v30; // [rsp+50h] [rbp-168h]
  __int128 v31; // [rsp+58h] [rbp-160h]
  __int64 v32; // [rsp+68h] [rbp-150h]
  __int128 v33; // [rsp+70h] [rbp-148h] BYREF
  __int64 v34; // [rsp+80h] [rbp-138h]
  char v35[8]; // [rsp+90h] [rbp-128h] BYREF
  __int64 v36; // [rsp+98h] [rbp-120h]
  __int64 (__fastcall *v37)(); // [rsp+A0h] [rbp-118h]
  __int64 *v38; // [rsp+A8h] [rbp-110h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+B0h] [rbp-108h]
  _QWORD v40[6]; // [rsp+B8h] [rbp-100h] BYREF
  __int16 v41; // [rsp+E8h] [rbp-D0h]
  _QWORD v42[2]; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+100h] [rbp-B8h] BYREF
  int v44; // [rsp+108h] [rbp-B0h]
  _QWORD v45[5]; // [rsp+110h] [rbp-A8h] BYREF
  __int16 v46; // [rsp+138h] [rbp-80h]
  _QWORD v47[6]; // [rsp+140h] [rbp-78h] BYREF
  __int128 v48; // [rsp+170h] [rbp-48h] BYREF
  __int64 v49; // [rsp+180h] [rbp-38h]

  v6 = a1;
  v42[0] = a3;
  v42[1] = a4;
  v43 = a5;
  v44 = a6;
  v27 = std::time::Instant::elapsed(&v43);
  v21 = v7;
  v45[0] = a2[6];
  v38 = &v27;
  v39 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v40[0] = &v21;
  v40[1] = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
  v40[2] = v45;
  v40[3] = <log::Level as core::fmt::Display>::fmt;
  v40[4] = v42;
  v40[5] = <&T as core::fmt::Display>::fmt;
  v28 = (char **)&off_8830E8;
  v29 = 5LL;
  *((_QWORD *)&v31 + 1) = &unk_1036D8;
  v32 = 4LL;
  v30 = &v38;
  *(_QWORD *)&v31 = 4LL;
  core::option::Option<T>::map_or_else(&v22, 0LL, v7, &v28);
  v8 = a2 + 10;
  v9 = a2[11];
  v10 = a2[13];
  if ( v9 != 1 )
  {
    if ( !v9 && !v10 )
    {
      v11 = 1LL;
      v9 = 0LL;
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  if ( v10 )
  {
LABEL_6:
    v11 = 0LL;
    goto LABEL_7;
  }
  v18 = (__int64 *)a2[10];
  v11 = *v18;
  v9 = v18[1];
LABEL_7:
  v12 = v23;
  core::option::Option<T>::map_or_else(v35, v11, v9, v8);
  v13 = v37;
  <char as core::str::pattern::Pattern>::into_searcher(v40, 10LL, v36, v37);
  v38 = 0LL;
  v39 = v13;
  v41 = 1;
  if ( v12 > 0xFFFF )
  {
    v19 = core::str::iter::SplitInternal<P>::next(&v38);
    v16 = v12;
    if ( v19 )
    {
      v24 = v19;
      v25 = v20;
      v28 = &off_8827A0;
      v29 = 1LL;
      v30 = (__int64 **)&byte_8;
      v31 = 0LL;
      core::panicking::panic_fmt(&v28, &off_883138);
    }
  }
  else
  {
    v26 = a1;
    while ( 1 )
    {
      v14 = core::str::iter::SplitInternal<P>::next(&v38);
      if ( !v14 )
        break;
      v24 = v14;
      v25 = v15;
      v45[0] = &v24;
      v45[1] = <&T as core::fmt::Display>::fmt;
      v45[2] = &xmmword_E8B60;
      v45[3] = <&T as core::fmt::Display>::fmt;
      v45[4] = 0LL;
      v46 = v12;
      v47[0] = &unk_882F40;
      v47[1] = 2LL;
      v47[4] = &unk_103798;
      v47[5] = 2LL;
      v47[2] = v45;
      v47[3] = 3LL;
      core::option::Option<T>::map_or_else(&v48, 0LL, v15, v47);
      v33 = v48;
      v34 = v49;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v22,
        *((_QWORD *)&v48 + 1),
        *((_QWORD *)&v48 + 1) + v49);
      core::ptr::drop_in_place<alloc::string::String>(&v33);
    }
    v16 = v23;
    v6 = v26;
  }
  alloc::string::String::truncate(&v22, v16 - v12);
  *(_QWORD *)(v6 + 16) = v23;
  *(_OWORD *)v6 = v22;
  return core::ptr::drop_in_place<alloc::string::String>(v35);
}