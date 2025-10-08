void __fastcall uu_chown::parse_uid(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int128 v13; // [rsp+0h] [rbp-128h] BYREF
  _QWORD *v14; // [rsp+10h] [rbp-118h]
  __int64 v15; // [rsp+18h] [rbp-110h]
  __int64 v16; // [rsp+20h] [rbp-108h]
  _QWORD v17[2]; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-E8h] BYREF
  char v19; // [rsp+58h] [rbp-D0h]
  __int128 v20; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD *v21; // [rsp+70h] [rbp-B8h]
  _QWORD v22[15]; // [rsp+78h] [rbp-B0h] BYREF
  int v23; // [rsp+F0h] [rbp-38h]

  if ( a3 )
  {
    <uucore::features::entries::Passwd as uucore::features::entries::Locate<&str>>::locate(v22);
    if ( __OFSUB__(0LL, v22[0]) )
    {
      if ( (unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(46LL, a4, a5)
        && !((unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(58LL, a4, a5) | (a6 != 58)) )
      {
        uu_chown::parse_spec(&v13, a4, a5, 46LL);
        if ( (_DWORD)v13 == 1 )
        {
          v12 = *((_QWORD *)&v13 + 1);
          *(_QWORD *)(a1 + 8) = v14;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = *(_QWORD *)((char *)&v13 + 4);
          v12 = 0LL;
        }
        *(_QWORD *)a1 = v12;
      }
      else
      {
        v10 = core::num::<impl u32>::from_ascii_radix(a2, a3);
        if ( (v10 & 1) != 0 )
        {
          v18[0] = 0LL;
          v18[1] = a4;
          v18[2] = a5;
          v19 = 1;
          v17[0] = v18;
          v17[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v13 = &off_F5F08;
          *((_QWORD *)&v13 + 1) = 1LL;
          v16 = 0LL;
          v14 = v17;
          v15 = 1LL;
          core::option::Option<T>::map_or_else(&v20, &v13);
          LODWORD(v15) = 1;
          v13 = v20;
          v14 = v21;
          *(_QWORD *)a1 = ((__int64 (__fastcall *)(__int128 *))alloc::boxed::Box<T>::new)(&v13);
          *(_QWORD *)(a1 + 8) = &off_F5F38;
        }
        else
        {
          *(_DWORD *)(a1 + 8) = 1;
          *(_DWORD *)(a1 + 12) = HIDWORD(v10);
          *(_QWORD *)a1 = 0LL;
        }
      }
      core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(v22);
    }
    else
    {
      v11 = v23;
      *(_DWORD *)(a1 + 8) = 1;
      *(_DWORD *)(a1 + 12) = v11;
      *(_QWORD *)a1 = 0LL;
      core::ptr::drop_in_place<uucore::features::entries::Passwd>(v22);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0LL;
  }
}