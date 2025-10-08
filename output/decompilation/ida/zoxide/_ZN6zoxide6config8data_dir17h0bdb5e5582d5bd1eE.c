__int64 __fastcall zoxide::config::data_dir(_QWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // kr00_16
  __int64 v3; // r14
  __int128 v4; // [rsp+0h] [rbp-88h] BYREF
  __int64 v5; // [rsp+10h] [rbp-78h]
  __int128 v6; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+30h] [rbp-58h]
  _QWORD v8[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v9; // [rsp+50h] [rbp-38h]

  std::env::var_os(&v6, aZoDataDir, 12LL);
  if ( __OFSUB__(0LL, (_QWORD)v6) )
  {
    dirs::data_local_dir(v8);
    result = anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::context(
               &v4,
               v8);
    v2 = v4;
    if ( (_QWORD)v4 == 0x8000000000000000LL )
    {
      a1[1] = *((_QWORD *)&v4 + 1);
      *a1 = 0x8000000000000000LL;
      return result;
    }
    std::path::Path::join(&v4, *((_QWORD *)&v4 + 1), v5, aZoxide_0, 6LL);
    core::mem::drop(v2, *((_QWORD *)&v2 + 1));
  }
  else
  {
    v5 = v7;
    v4 = v6;
  }
  v3 = *((_QWORD *)&v4 + 1);
  if ( (unsigned __int8)std::path::Path::is_absolute(*((_QWORD *)&v4 + 1), v5) )
  {
    result = v5;
    a1[2] = v5;
    *(_OWORD *)a1 = v4;
  }
  else
  {
    v8[0] = &off_134980;
    v8[1] = 1LL;
    v8[2] = 8LL;
    v9 = 0LL;
    a1[1] = anyhow::__private::format_err(v8);
    *a1 = 0x8000000000000000LL;
    return core::mem::drop(v4, v3);
  }
  return result;
}