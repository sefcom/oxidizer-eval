__int64 __fastcall zoxide::util::FzfChild::write(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-80h] BYREF
  __int128 v8; // [rsp+10h] [rbp-78h] BYREF
  _QWORD *v9; // [rsp+20h] [rbp-68h]
  __int64 v10; // [rsp+28h] [rbp-60h]
  __int64 v11; // [rsp+30h] [rbp-58h]
  _QWORD v12[2]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+50h] [rbp-38h] BYREF
  int v14; // [rsp+68h] [rbp-20h]

  if ( *(_DWORD *)(a2 + 16) == -1 )
    core::option::unwrap_failed(&off_134B58);
  v13[0] = 1LL;
  v13[1] = a4;
  v13[2] = a3;
  v14 = 9;
  v12[0] = v13;
  v12[1] = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
  *(_QWORD *)&v8 = &unk_1348E0;
  *((_QWORD *)&v8 + 1) = 2LL;
  v11 = 0LL;
  v9 = v12;
  v10 = 1LL;
  v4 = std::io::Write::write_fmt(a2 + 16, &v8);
  if ( v4 )
  {
    v5 = v4;
    if ( (unsigned __int8)std::io::error::Error::kind(v4) == 11 )
    {
      v7 = v5;
      zoxide::util::FzfChild::wait(&v8, a2);
      if ( __OFSUB__(0LL, (_QWORD)v8) )
      {
        a1[1] = *((_QWORD *)&v8 + 1);
        *a1 = 0x8000000000000001LL;
      }
      else
      {
        a1[2] = v9;
        *(_OWORD *)a1 = v8;
      }
      return core::ptr::drop_in_place<std::io::error::Error>(&v7);
    }
    else
    {
      *((_QWORD *)&v8 + 1) = v5;
      *(_QWORD *)&v8 = 0x8000000000000001LL;
      return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(a1, &v8);
    }
  }
  else
  {
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  return result;
}