__int64 __fastcall just::function::replace_regex(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int128 v10; // xmm0
  __int128 v12; // [rsp+0h] [rbp-98h] BYREF
  __int64 v13; // [rsp+10h] [rbp-88h]
  __int128 v14; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+30h] [rbp-68h]
  __int64 v16; // [rsp+40h] [rbp-58h] BYREF
  __int128 v17; // [rsp+48h] [rbp-50h]
  __int64 v18; // [rsp+58h] [rbp-40h]
  __int128 v19; // [rsp+60h] [rbp-38h] BYREF
  __int64 v20; // [rsp+70h] [rbp-28h]

  regex::regex::string::Regex::new(&v16, a5, a6);
  if ( v16 )
  {
    v14 = v17;
    v15 = v18;
    regex::regex::string::Regex::replacen(&v12, &v16, a3, a4, a7, a8);
    <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(
      &v19,
      *((_QWORD *)&v12 + 1),
      v13);
    *(_QWORD *)(a1 + 24) = v20;
    *(_OWORD *)(a1 + 8) = v19;
    *(_QWORD *)a1 = 0LL;
    core::ptr::drop_in_place<just::request::Request>(&v12);
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v16);
  }
  else
  {
    v15 = v18;
    v14 = v17;
    just::function::replace_regex::{{closure}}(&v12, &v14);
    v15 = v13;
    v10 = v12;
    v14 = v12;
    *(_QWORD *)(a1 + 24) = v13;
    *(_OWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = 1LL;
  }
  return a1;
}