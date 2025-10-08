__int64 __fastcall bat::decorations::LineChangesDecoration::generate_cached(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  __int128 v7; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+10h] [rbp-68h]
  _QWORD v9[6]; // [rsp+18h] [rbp-60h] BYREF
  __int128 v10; // [rsp+48h] [rbp-30h]
  char v11; // [rsp+58h] [rbp-20h]

  v11 = *((_BYTE *)a2 + 16);
  v10 = *a2;
  v9[0] = 0x8000000000000000LL;
  v9[1] = a3;
  v9[2] = a4;
  v9[3] = 0x8000000000000002LL;
  <T as alloc::string::SpecToString>::spec_to_string(&v7, v9);
  *(_QWORD *)(a1 + 24) = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(a3, a3 + a4);
  *(_OWORD *)a1 = v7;
  *(_QWORD *)(a1 + 16) = v8;
  return core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(v9);
}