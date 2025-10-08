__int64 __fastcall bat::theme::ThemeName::new(_QWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+8h] [rbp-20h] BYREF
  __int64 v3; // [rsp+18h] [rbp-10h]

  <T as core::convert::Into<U>>::into(&v2);
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v2 + 1), v3, aDefault_1, 7LL) )
  {
    *a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<alloc::string::String>(&v2);
  }
  else
  {
    result = v3;
    a1[2] = v3;
    *(_OWORD *)a1 = v2;
  }
  return result;
}