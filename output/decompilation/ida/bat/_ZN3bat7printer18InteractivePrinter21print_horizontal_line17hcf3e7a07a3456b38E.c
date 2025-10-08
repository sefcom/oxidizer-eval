__int64 __fastcall bat::printer::InteractivePrinter::print_horizontal_line(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  int v13; // [rsp+4h] [rbp-144h] BYREF
  __int128 v14; // [rsp+8h] [rbp-140h] BYREF
  __int128 v15; // [rsp+18h] [rbp-130h]
  __int128 v16; // [rsp+28h] [rbp-120h]
  __int128 v17; // [rsp+38h] [rbp-110h]
  __int128 v18; // [rsp+48h] [rbp-100h]
  __int64 v19; // [rsp+58h] [rbp-F0h]
  __int128 v20; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD *v21; // [rsp+70h] [rbp-D8h]
  __int64 v22; // [rsp+78h] [rbp-D0h]
  __int64 v23; // [rsp+80h] [rbp-C8h]
  __int128 v24; // [rsp+90h] [rbp-B8h] BYREF
  __int128 *v25; // [rsp+A0h] [rbp-A8h]
  __int64 v26; // [rsp+A8h] [rbp-A0h]
  __int64 v27; // [rsp+B0h] [rbp-98h]
  __int128 v28; // [rsp+C0h] [rbp-88h]
  char v29; // [rsp+D0h] [rbp-78h]
  _QWORD v30[2]; // [rsp+D8h] [rbp-70h] BYREF
  _BYTE v31[24]; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v32; // [rsp+100h] [rbp-48h] BYREF
  __int128 *v33; // [rsp+110h] [rbp-38h]

  v13 = a4;
  v4 = *(_QWORD *)(a2 + 528);
  if ( v4 )
  {
    v19 = a3;
    alloc::slice::<impl [T]>::repeat(v31, asc_1A2C43, 3LL, *(_QWORD *)(*(_QWORD *)(a2 + 512) + 256LL) + ~v4);
    alloc::slice::<impl [T]>::repeat(&v14, asc_1A2C43, 3LL, v4);
    v21 = (_QWORD *)v15;
    v20 = v14;
    *(_QWORD *)&v14 = &v20;
    *((_QWORD *)&v14 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v15 = &v13;
    *((_QWORD *)&v15 + 1) = <char as core::fmt::Display>::fmt;
    *(_QWORD *)&v16 = v31;
    *((_QWORD *)&v16 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v24 = &unk_1A2CD0;
    *((_QWORD *)&v24 + 1) = 3LL;
    v27 = 0LL;
    v25 = &v14;
    v26 = 3LL;
    core::option::Option<T>::map_or_else(&v32, 0LL, v5, &v24);
    core::ptr::drop_in_place<alloc::string::String>(&v20);
    v29 = *(_BYTE *)(a2 + 560);
    v28 = *(_OWORD *)(a2 + 544);
    v24 = v32;
    v25 = v33;
    v26 = 0x8000000000000002LL;
    v30[0] = &v24;
    v30[1] = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
    *(_QWORD *)&v20 = &unk_6CEA80;
    *((_QWORD *)&v20 + 1) = 2LL;
    v23 = 0LL;
    v21 = v30;
    v22 = 1LL;
    bat::output::OutputHandle::write_fmt((__int64)&v14, v19, (__int64)&v20);
    if ( (_BYTE)v14 == 13 )
    {
      core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v24);
      result = core::ptr::drop_in_place<alloc::string::String>(v31);
LABEL_5:
      *(_BYTE *)a1 = 13;
      return result;
    }
    *(_OWORD *)(a1 + 64) = v18;
    v7 = v14;
    v8 = v15;
    v9 = v16;
    *(_OWORD *)(a1 + 48) = v17;
    *(_OWORD *)(a1 + 32) = v9;
    *(_OWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v24);
    return core::ptr::drop_in_place<alloc::string::String>(v31);
  }
  else
  {
    result = bat::printer::InteractivePrinter::print_horizontal_line_term(
               (__int64)&v14,
               *(_QWORD *)(a2 + 512),
               a3,
               (__int128 *)(a2 + 544));
    if ( (_BYTE)v14 == 13 )
      goto LABEL_5;
    *(_OWORD *)(a1 + 64) = v18;
    v10 = v14;
    v11 = v15;
    v12 = v16;
    *(_OWORD *)(a1 + 48) = v17;
    *(_OWORD *)(a1 + 32) = v12;
    *(_OWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
  }
  return result;
}