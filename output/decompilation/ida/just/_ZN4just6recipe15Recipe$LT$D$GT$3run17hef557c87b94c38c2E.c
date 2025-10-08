__int64 __fastcall just::recipe::Recipe<D>::run(
        int a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v9; // r14
  int v10; // eax
  char v11; // cl
  __int64 v12; // rax
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int64 v16; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+18h] [rbp-F0h]
  char v18; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v19[15]; // [rsp+21h] [rbp-E7h]
  __int64 v20; // [rsp+30h] [rbp-D8h]
  __int64 v21; // [rsp+38h] [rbp-D0h]
  __int128 v22; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v23; // [rsp+50h] [rbp-B8h]
  __int128 v24; // [rsp+60h] [rbp-A8h]
  __int64 v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  char v27; // [rsp+88h] [rbp-80h]
  void *v28; // [rsp+98h] [rbp-70h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-68h]
  __int128 *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  __int64 v32; // [rsp+B8h] [rbp-50h]
  _QWORD v33[8]; // [rsp+C8h] [rbp-40h] BYREF

  v21 = a6;
  v20 = a5;
  v9 = *(_QWORD *)a3;
  LOWORD(v23) = *(_WORD *)(*(_QWORD *)a3 + 404LL);
  v22 = *(_OWORD *)(v9 + 388);
  just::color::Color::stderr((__int64)&v28, (__int64)&v22);
  if ( !BYTE1(v30) )
  {
    LOBYTE(v16) = 1;
    *(_DWORD *)((char *)&v16 + 1) = 0;
    HIDWORD(v16) = 0;
    v17 = 0xA00000006LL;
    goto LABEL_6;
  }
  if ( BYTE1(v30) == 1 )
  {
    LOBYTE(v16) = (_BYTE)v28;
    *(_DWORD *)((char *)&v16 + 1) = 0;
    HIDWORD(v16) = 0;
    LODWORD(v17) = 4 * ((unsigned __int8)v28 ^ 1) + 6;
    HIDWORD(v17) = 10;
    if ( !(_BYTE)v28 )
      goto LABEL_8;
LABEL_6:
    v10 = 6;
    v11 = 1;
    goto LABEL_9;
  }
  v16 = 0LL;
  v17 = 0xA0000000ALL;
LABEL_8:
  v10 = 10;
  v11 = 0;
LABEL_9:
  v18 = v11;
  *(_DWORD *)v19 = 0;
  *(_DWORD *)&v19[3] = 0;
  *(_DWORD *)&v19[7] = v10;
  *(_DWORD *)&v19[11] = 10;
  if ( *(_BYTE *)(v9 + 423) >= 2u )
  {
    *(_QWORD *)&v22 = &v16;
    *((_QWORD *)&v22 + 1) = <ansi_term::ansi::Prefix as core::fmt::Display>::fmt;
    *(_QWORD *)&v23 = a2 + 144;
    *((_QWORD *)&v23 + 1) = <just::name::Name as core::fmt::Display>::fmt;
    *(_QWORD *)&v24 = &v18;
    *((_QWORD *)&v24 + 1) = <ansi_term::ansi::Suffix as core::fmt::Display>::fmt;
    v28 = &unk_430B70;
    v29 = 4LL;
    v32 = 0LL;
    v30 = &v22;
    v31 = 3LL;
    std::io::stdio::_eprint(&v28);
  }
  if ( *(_BYTE *)(v9 + 410) )
  {
    v12 = just::recipe::Recipe<D>::doc(a2);
    if ( v12 )
    {
      v33[0] = v12;
      v33[1] = v13;
      *(_QWORD *)&v22 = &v16;
      *((_QWORD *)&v22 + 1) = <ansi_term::ansi::Prefix as core::fmt::Display>::fmt;
      *(_QWORD *)&v23 = v33;
      *((_QWORD *)&v23 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v24 = &v18;
      *((_QWORD *)&v24 + 1) = <ansi_term::ansi::Suffix as core::fmt::Display>::fmt;
      v28 = &unk_430BB0;
      v29 = 4LL;
      v32 = 0LL;
      v30 = &v22;
      v31 = 3LL;
      std::io::stdio::_eprint(&v28);
    }
  }
  v14 = *a3;
  if ( *(_BYTE *)(a2 + 254) )
  {
    v23 = a3[1];
    v22 = v14;
    v25 = 0LL;
    v24 = 0LL;
    v26 = a4;
    v27 = a7;
    return just::recipe::Recipe<D>::run_script(a1, a2, (_DWORD)a3, a4, v20, v21, (__int64)&v22);
  }
  else
  {
    v23 = a3[1];
    v22 = v14;
    v25 = 0LL;
    v24 = 0LL;
    v26 = a4;
    v27 = a7;
    return just::recipe::Recipe<D>::run_linewise(a1, a2, (_DWORD)a3, a4, v20, v21, (__int64)&v22);
  }
}