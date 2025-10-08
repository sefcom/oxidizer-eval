__int64 __fastcall zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_interactive(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  int *v4; // r15
  __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  bool v7; // of
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v16; // [rsp+8h] [rbp-F0h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+10h] [rbp-E8h]
  __int64 v18; // [rsp+18h] [rbp-E0h]
  _QWORD *v19; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+28h] [rbp-D0h]
  __int128 v21; // [rsp+30h] [rbp-C8h]
  __int64 v22; // [rsp+40h] [rbp-B8h]
  _QWORD *v23; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A0h]
  __int64 v25; // [rsp+60h] [rbp-98h]
  int v26; // [rsp+74h] [rbp-84h] BYREF
  __int64 v27; // [rsp+78h] [rbp-80h]
  __int128 v28; // [rsp+80h] [rbp-78h]
  _QWORD *v29; // [rsp+90h] [rbp-68h]
  unsigned __int64 v30; // [rsp+98h] [rbp-60h]
  _QWORD v31[11]; // [rsp+A0h] [rbp-58h] BYREF

  v4 = a2;
  zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::get_fzf(&v19);
  if ( (_DWORD)v19 != 1 )
  {
    v6 = 0x8000000000000000LL;
    v26 = HIDWORD(v19);
    v27 = v20;
    v28 = v21;
    v7 = __OFSUB__(0LL, a1[3]);
    v29 = a1;
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = zoxide::db::stream::Stream::next(v4, a2, v6);
        if ( !v8 )
          break;
        a2 = &v26;
        zoxide::util::FzfChild::write(&v19, &v26, v8, a3);
        v5 = v20;
        if ( v19 == (_QWORD *)0x8000000000000001LL )
          goto LABEL_22;
        v16 = v19;
        v17 = (__int64 (__fastcall *)())v20;
        v18 = v21;
        if ( v19 != (_QWORD *)0x8000000000000000LL )
          goto LABEL_18;
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v16);
      }
    }
    else
    {
      v9 = a1[4];
      v10 = a1[5];
      v30 = 0x8000000000000001LL;
      while ( 1 )
      {
        v11 = zoxide::db::stream::Stream::next(v4, a2, v6);
        v12 = v11;
        if ( !v11 )
          break;
        a2 = *(int **)(v11 + 16);
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(_QWORD *)(v11 + 8), a2, v9, v10) )
        {
          a2 = &v26;
          zoxide::util::FzfChild::write(&v19, &v26, v12, a3);
          v5 = v20;
          if ( v19 == (_QWORD *)v30 )
            goto LABEL_22;
          v16 = v19;
          v17 = (__int64 (__fastcall *)())v20;
          v18 = v21;
          if ( v19 != (_QWORD *)0x8000000000000000LL )
          {
LABEL_18:
            v25 = v18;
            v23 = v16;
            v24 = (__int64)v17;
            if ( !*((_BYTE *)v29 + 75) )
              goto LABEL_16;
            goto LABEL_19;
          }
          core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v16);
        }
      }
    }
    zoxide::util::FzfChild::wait(&v19, &v26);
    v5 = v20;
    if ( v19 != (_QWORD *)0x8000000000000000LL )
    {
      v23 = v19;
      v24 = v20;
      v25 = v21;
      if ( *((_BYTE *)v29 + 75) )
      {
LABEL_19:
        v16 = &v23;
        v17 = <alloc::string::String as core::fmt::Display>::fmt;
        v19 = &unk_18B80;
        v20 = 1LL;
        v22 = 0LL;
        *(_QWORD *)&v21 = &v16;
        *((_QWORD *)&v21 + 1) = 1LL;
        std::io::stdio::_print(&v19);
        goto LABEL_20;
      }
LABEL_16:
      v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
              7LL,
              v24,
              v25);
      anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::context(
        &v19,
        v13,
        v14,
        aCouldNotReadSe,
        33LL);
      v5 = v20;
      if ( v19 )
      {
        v31[0] = v19;
        v31[1] = v20;
        v16 = v31;
        v17 = <&T as core::fmt::Display>::fmt;
        v19 = &unk_18B80;
        v20 = 1LL;
        v22 = 0LL;
        *(_QWORD *)&v21 = &v16;
        *((_QWORD *)&v21 + 1) = 1LL;
        std::io::stdio::_print(&v19);
LABEL_20:
        core::ptr::drop_in_place<alloc::string::String>(&v23);
        core::ptr::drop_in_place<zoxide::util::FzfChild>(&v26);
        return 0LL;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v23);
    }
LABEL_22:
    core::ptr::drop_in_place<zoxide::util::FzfChild>(&v26);
    return v5;
  }
  return v20;
}