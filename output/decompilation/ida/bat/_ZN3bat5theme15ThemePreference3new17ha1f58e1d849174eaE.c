__int64 __fastcall bat::theme::ThemePreference::new(__int64 a1)
{
  unsigned __int64 v1; // r12
  __int64 v2; // r14
  __int64 v3; // r15
  char v4; // cl
  char v5; // al
  char v6; // al
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h]
  __int64 v10; // [rsp+10h] [rbp-28h]

  v1 = 0x8000000000000001LL;
  core::ops::function::FnOnce::call_once(&v8);
  v2 = v9;
  v3 = v10;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, aAuto_0, 4LL) )
  {
    v4 = 0;
LABEL_5:
    *(_BYTE *)(a1 + 8) = v4;
LABEL_6:
    *(_QWORD *)a1 = v1;
    return core::ptr::drop_in_place<alloc::string::String>(&v8);
  }
  v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aAutoAlways, 11LL);
  v4 = 1;
  if ( v5 )
    goto LABEL_5;
  v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aAutoSystem, 11LL);
  v4 = 2;
  if ( v6 )
    goto LABEL_5;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aDark, 4LL) )
  {
    v1 = 0x8000000000000003LL;
    goto LABEL_6;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aLight, 5LL) )
  {
    v1 = 0x8000000000000004LL;
    goto LABEL_6;
  }
  return bat::theme::ThemeName::new(a1, &v8);
}