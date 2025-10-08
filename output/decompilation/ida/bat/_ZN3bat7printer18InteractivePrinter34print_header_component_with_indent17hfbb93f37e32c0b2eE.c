__int64 __fastcall bat::printer::InteractivePrinter::print_header_component_with_indent(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  _QWORD v10[2]; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v11[2]; // [rsp+18h] [rbp-70h] BYREF
  __int128 v12; // [rsp+28h] [rbp-60h] BYREF
  __int128 v13; // [rsp+38h] [rbp-50h]
  __int128 v14; // [rsp+48h] [rbp-40h]
  __int128 v15; // [rsp+58h] [rbp-30h]
  __int128 v16; // [rsp+68h] [rbp-20h]

  v10[0] = a4;
  v10[1] = a5;
  result = bat::printer::InteractivePrinter::print_header_component_indent((__int64)&v12, a2, a3);
  if ( (_BYTE)v12 == 13 )
  {
    v11[0] = v10;
    v11[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v12 = &unk_6CEA80;
    *((_QWORD *)&v12 + 1) = 2LL;
    *(_QWORD *)&v14 = 0LL;
    *(_QWORD *)&v13 = v11;
    *((_QWORD *)&v13 + 1) = 1LL;
    return bat::output::OutputHandle::write_fmt((__int64)a1, a3, (__int64)&v12);
  }
  else
  {
    a1[4] = v16;
    v7 = v12;
    v8 = v13;
    v9 = v14;
    a1[3] = v15;
    a1[2] = v9;
    a1[1] = v8;
    *a1 = v7;
  }
  return result;
}