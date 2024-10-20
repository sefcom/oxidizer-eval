__int64 __fastcall uu_mktemp::uumain::uumain::{{closure}}(int a1, char a2, __int64 a3)
{
  char v4; // [rsp+Eh] [rbp-5Ah]
  char v5; // [rsp+Fh] [rbp-59h] BYREF
  __int64 v6; // [rsp+10h] [rbp-58h] BYREF
  char *v7; // [rsp+18h] [rbp-50h] BYREF
  char v8[8]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v5 = a2;
  v6 = a3;
  if ( (<clap_builder::error::context::ContextKind as core::cmp::PartialEq>::eq(&v5, &unk_1819D) & 1) != 0 )
  {
    <T as core::convert::Into<U>>::into(&v11, aTemplate, 10LL, &off_1190C8);
    v10 = v12;
    v9 = v11;
    v8[0] = 2;
    v7 = v8;
    v4 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v6, &v7) & 1;
    core::ptr::drop_in_place<clap_builder::error::context::ContextValue>(v8);
  }
  else
  {
    v4 = 0;
  }
  return v4 & 1;
}
