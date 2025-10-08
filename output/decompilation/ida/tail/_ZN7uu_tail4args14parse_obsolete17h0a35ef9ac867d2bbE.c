__int64 __fastcall uu_tail::args::parse_obsolete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  _BYTE **v20; // rax
  __int128 v22; // [rsp+0h] [rbp-E8h] BYREF
  __int128 *v23; // [rsp+10h] [rbp-D8h]
  __int64 v24; // [rsp+18h] [rbp-D0h]
  __int64 v25; // [rsp+20h] [rbp-C8h]
  int *v26; // [rsp+30h] [rbp-B8h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+38h] [rbp-B0h]
  __int128 v28; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE **v29; // [rsp+50h] [rbp-98h]
  int v30; // [rsp+5Ch] [rbp-8Ch] BYREF
  _BYTE v31[24]; // [rsp+60h] [rbp-88h] BYREF
  char v32; // [rsp+78h] [rbp-70h]
  __int128 v33; // [rsp+80h] [rbp-68h]
  _BYTE **v34; // [rsp+90h] [rbp-58h]
  char v35[8]; // [rsp+98h] [rbp-50h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-48h]
  _BYTE v37[10]; // [rsp+B0h] [rbp-38h] BYREF
  char v38; // [rsp+BAh] [rbp-2Eh]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  uu_tail::parse::parse_obsolete(v37, v4, v5);
  if ( v38 == 2 )
  {
    v6 = v37[0];
    alloc::string::String::from_utf8_lossy(v35, v4, v5);
    switch ( v6 )
    {
      case 0LL:
        *(_QWORD *)v31 = 0LL;
        *(_OWORD *)&v31[8] = v36;
        v32 = 1;
        v26 = (int *)v31;
        v27 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v22 = &off_173108;
        *((_QWORD *)&v22 + 1) = 2LL;
        v25 = 0LL;
        v23 = (__int128 *)&v26;
        v24 = 1LL;
        core::option::Option<T>::map_or_else(&v28, &v22, v7, v8, v9, v10);
        goto LABEL_14;
      case 1LL:
        *(_QWORD *)v31 = 0LL;
        *(_OWORD *)&v31[8] = v36;
        v32 = 1;
        v26 = (int *)v31;
        v27 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v22 = &off_173128;
        *((_QWORD *)&v22 + 1) = 1LL;
        v25 = 0LL;
        v23 = (__int128 *)&v26;
        v24 = 1LL;
        core::option::Option<T>::map_or_else(&v28, &v22, v7, v8, v9, v10);
LABEL_14:
        v33 = v28;
        v20 = v29;
        goto LABEL_15;
      case 2LL:
        *(_QWORD *)&v28 = v36;
        *((_QWORD *)&v28 + 1) = v36 + *((_QWORD *)&v36 + 1);
        if ( <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v28)
          || (v18 = core::str::validations::next_code_point(&v28),
              LOBYTE(v15) = (_DWORD)v19 != (_DWORD)&loc_110000,
              (v18 & ((_DWORD)v19 != (_DWORD)&loc_110000)) == 0) )
        {
          v19 = 0LL;
        }
        v30 = v19;
        v26 = &v30;
        v27 = <char as core::fmt::Display>::fmt;
        *(_QWORD *)&v22 = &off_173138;
        *((_QWORD *)&v22 + 1) = 1LL;
        v25 = 0LL;
        v23 = (__int128 *)&v26;
        v24 = 1LL;
        core::option::Option<T>::map_or_else(v31, &v22, v19, v15, v16, v17);
        goto LABEL_12;
      case 3LL:
        *(_QWORD *)&v28 = v35;
        *((_QWORD *)&v28 + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        *(_QWORD *)&v22 = &off_173148;
        *((_QWORD *)&v22 + 1) = 2LL;
        v25 = 0LL;
        v23 = &v28;
        v24 = 1LL;
        core::option::Option<T>::map_or_else(v31, &v22, v7, v8, v9, v10);
LABEL_12:
        v33 = *(_OWORD *)v31;
        v20 = *(_BYTE ***)&v31[16];
LABEL_15:
        v34 = v20;
        LODWORD(v24) = 1;
        v22 = v33;
        v23 = (__int128 *)v20;
        *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v22, &v22, v11, v12, v13, v14);
        *(_QWORD *)(a1 + 16) = &off_172F18;
        *(_QWORD *)a1 = 6LL;
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v35);
        break;
    }
  }
  else if ( v38 == 3 )
  {
    *(_QWORD *)a1 = 5LL;
  }
  else
  {
    uu_tail::args::Settings::from_obsolete_args((_OWORD *)a1, (__int64)v37, a3);
  }
  return a1;
}