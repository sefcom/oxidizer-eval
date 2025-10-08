__int64 __fastcall fd::output::print_trailing_slash(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v8; // al
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // dx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __m128 v14; // xmm1
  char v15; // al
  __m128 v16; // xmm0
  __int64 v18; // rbx
  unsigned __int64 v19; // [rsp+0h] [rbp-A8h] BYREF
  char v20; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v21; // [rsp+9h] [rbp-9Fh]
  __int64 v22; // [rsp+20h] [rbp-88h]
  __int64 v23; // [rsp+30h] [rbp-78h] BYREF
  char v24; // [rsp+38h] [rbp-70h]
  double v25; // [rsp+39h] [rbp-6Fh] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v27[10]; // [rsp+58h] [rbp-50h] BYREF

  v8 = fd::dir_entry::DirEntry::file_type(a2);
  v12 = v11 & 0xF000;
  LOBYTE(v13) = v8 && (_DWORD)v12 == 0x4000;
  if ( (_BYTE)v13 != 1 )
    return 0LL;
  if ( a5 )
  {
    lscolors::style::Style::to_nu_ansi_term_style(&v19, a5);
    v14 = (__m128)v19;
    v15 = v20;
    v16 = (__m128)v21;
  }
  else
  {
    v16 = (__m128)xmmword_70DA0;
    v14 = 0LL;
    v15 = 0;
  }
  _mm_storel_ps((double *)&v23, v14);
  v24 = v15;
  _mm_storel_ps(&v25, v16);
  v26[0] = &v19;
  v26[1] = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
  v27[0] = asc_70810;
  v27[1] = 1LL;
  v27[4] = 0LL;
  v27[2] = v26;
  v27[3] = 1LL;
  v18 = std::io::Write::write_fmt(a1, v27, v12, v13, v9, v10, 0x8000000000000000LL, a3, a4, 0x8000000000000002LL, v22);
  core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v19);
  return v18;
}