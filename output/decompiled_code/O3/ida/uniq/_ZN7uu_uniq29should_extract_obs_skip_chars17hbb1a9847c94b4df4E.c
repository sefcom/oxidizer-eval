        unsigned __int8 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rdi
  unsigned int v12; // edx
  _QWORD v13[6]; // [rsp+8h] [rbp-30h] BYREF

  LODWORD(v13[0]) = 0;
  v6 = core::char::methods::encode_utf8_raw(43LL, v13);
  if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, v6, v7) )
    return 0LL;
  v9 = uucore::mods::posix::posix_version();
  result = 0LL;
  if ( !v9 || v8 > (unsigned __int64)&unk_30A29 )
    return result;
  if ( a4 | a3 )
    return 0LL;
  v13[0] = a1;
  v13[1] = a1 + a2;
  v11 = (unsigned __int64)core::iter::adapters::filter::filter_try_fold::{{closure}};
  if ( !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(v13) )
  {
    v11 = (unsigned __int64)core::iter::adapters::filter::filter_try_fold::{{closure}};
    if ( (unsigned int)core::str::validations::next_code_point(v13) )
      v11 = v12;
  }
  return core::option::Option<T>::map_or(v11);
}
