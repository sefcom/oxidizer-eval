__int64 __fastcall fd::exec::CommandBuilder::push(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int128 v12; // [rsp+8h] [rbp-70h] BYREF
  __int64 v13; // [rsp+18h] [rbp-60h]
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]

  if ( (unsigned __int64)(a1[40] - 1LL) >= a1[39] || (result = fd::exec::CommandBuilder::finish(a1)) == 0 )
  {
    fd::fmt::FormatTemplate::generate(&v12, a1, a2, a3, a4, a5);
    core::iter::traits::iterator::Iterator::chain(&v14, &v12, a1[8], a1[9]);
    if ( (unsigned __int8)argmax::Command::args_would_fit(a1[38], &v14)
      || (v9 = fd::exec::CommandBuilder::finish(a1)) == 0 )
    {
      v15 = v13;
      v14 = v12;
      if ( (argmax::Command::try_arg(a1 + 10, &v14) & 1) != 0 )
      {
        return v11;
      }
      else
      {
        ++a1[39];
        return 0LL;
      }
    }
    else
    {
      v10 = v9;
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v12, *((_QWORD *)&v12 + 1));
      return v10;
    }
  }
  return result;
}