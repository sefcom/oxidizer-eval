__int64 __fastcall uu_env::string_parser::StringParser::skip_until_char_or_end(_QWORD *a1, unsigned int a2)
{
  char v2; // dl
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  char v7; // [rsp+Bh] [rbp-1Dh] BYREF
  unsigned int v8; // [rsp+Ch] [rbp-1Ch] BYREF
  _QWORD v9[3]; // [rsp+10h] [rbp-18h] BYREF

  v8 = a2;
  if ( !uu_env::native_int_str::get_single_native_int_value(&v8) )
    core::option::unwrap_failed(&off_148ED8);
  v7 = v2;
  v3 = a1[2] + a1[3];
  v9[0] = a1[2];
  v9[1] = v3;
  if ( <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(v9, &v7) == 1 )
    v5 = a1[4] + v4;
  else
    v5 = a1[1];
  return uu_env::string_parser::StringParser::set_pointer((__int64)a1, v5);
}
