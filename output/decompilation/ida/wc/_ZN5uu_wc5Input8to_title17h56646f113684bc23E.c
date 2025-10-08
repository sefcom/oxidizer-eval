const char *__fastcall uu_wc::Input::to_title(_QWORD *a1, __int64 a2)
{
  const char *result; // rax
  __int64 v3; // r15
  __int64 v4; // r14
  char is_contained_in; // bp
  _BYTE v6[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]

  result = (const char *)0x8000000000000001LL;
  if ( *(_QWORD *)a2 == 0x8000000000000001LL )
  {
    if ( *(_BYTE *)(a2 + 8) )
    {
      *a1 = 0x8000000000000001LL;
    }
    else
    {
      *a1 = 0x8000000000000000LL;
      result = asc_1A13E;
      a1[1] = asc_1A13E;
      a1[2] = 1LL;
    }
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 8);
    v4 = *(_QWORD *)(a2 + 16);
    alloc::string::String::from_utf8_lossy(v6, v3, v4);
    is_contained_in = <char as core::str::pattern::Pattern>::is_contained_in(v7, v8);
    result = (const char *)core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v6);
    if ( is_contained_in )
    {
      return (const char *)uucore::features::quoting_style::escape_name(a1, v3, v4, &unk_1A13F);
    }
    else
    {
      *a1 = 0x8000000000000000LL;
      a1[1] = v3;
      a1[2] = v4;
    }
  }
  return result;
}