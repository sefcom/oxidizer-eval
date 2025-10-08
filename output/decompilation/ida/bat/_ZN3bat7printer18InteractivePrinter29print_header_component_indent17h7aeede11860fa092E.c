__int64 __fastcall bat::printer::InteractivePrinter::print_header_component_indent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  void *v5; // rcx
  _BYTE *v6; // rdi
  _BYTE *v8; // [rsp+8h] [rbp-E0h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+10h] [rbp-D8h]
  const char **v10; // [rsp+18h] [rbp-D0h]
  __int64 (__fastcall *v11)(); // [rsp+20h] [rbp-C8h]
  const char *v12; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+30h] [rbp-B8h]
  _QWORD *v14; // [rsp+38h] [rbp-B0h]
  __int64 v15; // [rsp+40h] [rbp-A8h]
  __int64 v16; // [rsp+48h] [rbp-A0h]
  __int128 v17; // [rsp+58h] [rbp-90h]
  char v18; // [rsp+68h] [rbp-80h]
  _QWORD v19[6]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v20[72]; // [rsp+A0h] [rbp-48h] BYREF

  if ( (unsigned __int8)bat::style::StyleComponents::grid(*(_QWORD *)(a2 + 512) + 192LL) )
  {
    v4 = *(_QWORD *)(a2 + 528);
    alloc::slice::<impl [T]>::repeat(v20, asc_9FF9F, 1LL, v4);
    v17 = *(_OWORD *)(a2 + 544);
    v18 = *(_BYTE *)(a2 + 560);
    v5 = &unk_80EA4;
    if ( !v4 )
      v5 = &dword_0 + 1;
    v12 = (const char *)0x8000000000000000LL;
    v13 = (__int64)v5;
    v14 = (_QWORD *)(4 * (unsigned int)(v4 != 0));
    v15 = 0x8000000000000002LL;
    v8 = v20;
    v9 = <alloc::string::String as core::fmt::Display>::fmt;
    v10 = &v12;
    v11 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
    v19[0] = "\x01";
    v19[1] = 2LL;
    v19[4] = 0LL;
    v19[2] = &v8;
    v19[3] = 2LL;
    bat::output::OutputHandle::write_fmt(a1, a3, (__int64)v19);
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v12);
    v6 = v20;
  }
  else
  {
    alloc::slice::<impl [T]>::repeat(v19, asc_9FF9F, 1LL, *(_QWORD *)(a2 + 528));
    v8 = v19;
    v9 = <alloc::string::String as core::fmt::Display>::fmt;
    v12 = asc_7F780;
    v13 = 1LL;
    v16 = 0LL;
    v14 = &v8;
    v15 = 1LL;
    bat::output::OutputHandle::write_fmt(a1, a3, (__int64)&v12);
    v6 = v19;
  }
  return core::ptr::drop_in_place<alloc::string::String>(v6);
}