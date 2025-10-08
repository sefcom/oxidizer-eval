__int64 __fastcall uu_cp::Attributes::parse_single_string(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  char *v3; // rax
  unsigned __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-B8h] BYREF
  int v7; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v8[8]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+18h] [rbp-A0h]
  __int64 v10; // [rsp+20h] [rbp-98h]
  _QWORD v11[2]; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-80h] BYREF
  char v13; // [rsp+50h] [rbp-68h]
  __int128 v14; // [rsp+58h] [rbp-60h] BYREF
  __int64 v15; // [rsp+68h] [rbp-50h]
  _QWORD v16[9]; // [rsp+70h] [rbp-48h] BYREF

  alloc::str::<impl str>::to_lowercase(v8);
  v1 = v9;
  v2 = v10;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, aAll, 3LL) )
  {
    *(_QWORD *)(a1 + 8) = 0x10101010101LL;
    *(_DWORD *)(a1 + 16) = 65793;
  }
  else
  {
    v7 = 0;
    v6 = 0LL;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, aMode, 4LL) )
    {
      v3 = (char *)&v6 + 2;
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, aOwnership, 9LL) )
    {
      v3 = (char *)&v6;
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, aTimestamps, 10LL) )
    {
      v3 = (char *)&v6 + 4;
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, aContext_0, 7LL) )
    {
      v3 = (char *)&v6 + 6;
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, aLink, 4LL)
           || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, aLinks, 5LL) )
    {
      v3 = (char *)&v7;
    }
    else
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, aXattr, 5LL) )
      {
        v12[0] = 0LL;
        v12[1] = v1;
        v12[2] = v2;
        v13 = 1;
        v11[0] = v12;
        v11[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v16[0] = &off_15E998;
        v16[1] = 1LL;
        v16[4] = 0LL;
        v16[2] = v11;
        v16[3] = 1LL;
        core::option::Option<T>::map_or_else(&v14, v16);
        *(_QWORD *)(a1 + 24) = v15;
        *(_OWORD *)(a1 + 8) = v14;
        v4 = 0x8000000000000008LL;
        goto LABEL_16;
      }
      v3 = (char *)&v7 + 2;
    }
    *(_WORD *)v3 = 257;
    *(_DWORD *)(a1 + 16) = v7;
    *(_QWORD *)(a1 + 8) = v6;
  }
  v4 = 0x800000000000000CLL;
LABEL_16:
  *(_QWORD *)a1 = v4;
  core::ptr::drop_in_place<alloc::string::String>(v8);
  return a1;
}