__int64 __fastcall bat::printer::InteractivePrinter::print_horizontal_line_term(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4)
{
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  _QWORD v10[2]; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD v11[6]; // [rsp+10h] [rbp-E8h] BYREF
  _BYTE v12[24]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-A0h]
  __int128 v14; // [rsp+70h] [rbp-88h]
  char v15; // [rsp+80h] [rbp-78h]
  _OWORD v16[7]; // [rsp+88h] [rbp-70h] BYREF

  alloc::slice::<impl [T]>::repeat(v12, asc_1A2C43, 3LL, *(_QWORD *)(a2 + 256));
  v15 = *((_BYTE *)a4 + 16);
  v14 = *a4;
  v13 = 0x8000000000000002LL;
  v10[0] = v12;
  v10[1] = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
  v11[0] = &unk_6CEA80;
  v11[1] = 2LL;
  v11[4] = 0LL;
  v11[2] = v10;
  v11[3] = 1LL;
  bat::output::OutputHandle::write_fmt((__int64)v16, a3, (__int64)v11);
  if ( LOBYTE(v16[0]) == 13 )
  {
    result = core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(v12);
    *(_BYTE *)a1 = 13;
  }
  else
  {
    *(_OWORD *)(a1 + 64) = v16[4];
    v7 = v16[0];
    v8 = v16[1];
    v9 = v16[2];
    *(_OWORD *)(a1 + 48) = v16[3];
    *(_OWORD *)(a1 + 32) = v9;
    *(_OWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
    return core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(v12);
  }
  return result;
}