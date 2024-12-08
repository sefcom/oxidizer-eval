__int64 __fastcall uu_cp::Attributes::parse_single_string(__int64 a1)
{
  __int128 v1; // kr00_16
  char *v2; // rax
  __int64 v4; // [rsp+0h] [rbp-B8h] BYREF
  int v5; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v6[8]; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v7; // [rsp+18h] [rbp-A0h]
  _QWORD v8[2]; // [rsp+28h] [rbp-90h] BYREF
  __int128 v9; // [rsp+38h] [rbp-80h] BYREF
  __int64 v10; // [rsp+48h] [rbp-70h]
  _QWORD v11[6]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v12; // [rsp+80h] [rbp-38h] BYREF
  __int128 v13; // [rsp+88h] [rbp-30h]
  char v14; // [rsp+98h] [rbp-20h]

  alloc::str::<impl str>::to_lowercase(v6);
  v1 = v7;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, *((_QWORD *)&v7 + 1), aAll, 3LL) )
  {
    *(_QWORD *)(a1 + 8) = 0x10101010101LL;
    *(_DWORD *)(a1 + 16) = (_DWORD)&unk_10101;
  }
  else
  {
    v5 = 0;
    v4 = 0LL;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, *((_QWORD *)&v1 + 1), "modefile", 4LL) )
    {
      v2 = (char *)&v4 + 2;
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                 v1,
                                 *((_QWORD *)&v1 + 1),
                                 aOwnership,
                                 9LL) )
    {
      v2 = (char *)&v4;
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                 v1,
                                 *((_QWORD *)&v1 + 1),
                                 aTimestamps,
                                 10LL) )
    {
      v2 = (char *)&v4 + 4;
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                 v1,
                                 *((_QWORD *)&v1 + 1),
                                 aContext_0,
                                 7LL) )
    {
      v2 = (char *)&v4 + 6;
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, *((_QWORD *)&v1 + 1), aLink, 4LL)
           || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                 v1,
                                 *((_QWORD *)&v1 + 1),
                                 aLinks,
                                 5LL) )
    {
      v2 = (char *)&v5;
    }
    else
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, *((_QWORD *)&v1 + 1), aXattr, 5LL) )
      {
        v12 = 0LL;
        v13 = v7;
        v14 = 1;
        v8[0] = &v12;
        v8[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v11[0] = &off_1B5570;
        v11[1] = 1LL;
        v11[4] = 0LL;
        v11[2] = v8;
        v11[3] = 1LL;
        core::option::Option<T>::map_or_else(&v9, v11);
        *(_QWORD *)(a1 + 24) = v10;
        *(_OWORD *)(a1 + 8) = v9;
        *(_QWORD *)a1 = 9LL;
        goto LABEL_16;
      }
      v2 = (char *)&v5 + 2;
    }
    *(_WORD *)v2 = 257;
    *(_DWORD *)(a1 + 16) = v5;
    *(_QWORD *)(a1 + 8) = v4;
  }
  *(_QWORD *)a1 = 13LL;
LABEL_16:
  core::ptr::drop_in_place<alloc::string::String>(v6);
  return a1;
}
