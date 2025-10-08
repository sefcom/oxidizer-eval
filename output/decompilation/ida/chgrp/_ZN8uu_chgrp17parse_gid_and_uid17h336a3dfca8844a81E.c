__int64 __fastcall uu_chgrp::parse_gid_and_uid(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  int v11; // eax
  __int128 v13; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v14; // [rsp+10h] [rbp-B8h]
  __int64 v15; // [rsp+20h] [rbp-A8h]
  __int64 v16; // [rsp+30h] [rbp-98h] BYREF
  __int64 v17; // [rsp+38h] [rbp-90h] BYREF
  __int64 v18; // [rsp+40h] [rbp-88h]
  _QWORD v19[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v20; // [rsp+60h] [rbp-68h]
  __m128 v21; // [rsp+70h] [rbp-58h]
  __int128 v22; // [rsp+80h] [rbp-48h] BYREF
  __int64 v23; // [rsp+90h] [rbp-38h]

  uu_chgrp::get_dest_gid((__int64)&v13, a2);
  v3 = *((_QWORD *)&v13 + 1);
  if ( __OFSUB__(-*((_QWORD *)&v13 + 1), 1LL) )
  {
    *(_OWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    v21 = (__m128)(unsigned __int64)v13;
    v20 = v14;
    v4 = v14;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, a2, aFrom, 4LL);
    v5 = clap_builder::parser::error::MatchesError::unwrap(aFrom, 4LL, &v13);
    if ( v5 )
    {
      v16 = v5;
      uu_chgrp::parse_gid_from_str((__int64)&v17, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16));
      v10 = v17;
      if ( v17 != 0x8000000000000000LL )
      {
        v19[0] = &v16;
        v19[1] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v13 = &off_F4910;
        *((_QWORD *)&v13 + 1) = 2LL;
        v15 = 0LL;
        *(_QWORD *)&v14 = v19;
        *((_QWORD *)&v14 + 1) = 1LL;
        ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
          &v22,
          &v13,
          v6,
          v7,
          v8,
          v9);
        DWORD2(v14) = 1;
        v13 = v22;
        *(_QWORD *)&v14 = v23;
        *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v13);
        *(_QWORD *)(a1 + 16) = &off_F4898;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<core::result::Result<u32,alloc::string::String>>(v10, v18);
        core::ptr::drop_in_place<alloc::string::String>(v3, v4);
        return a1;
      }
      v2 = v18;
      core::ptr::drop_in_place<core::result::Result<u32,alloc::string::String>>(0x8000000000000000LL, v18);
      v11 = 2;
    }
    else
    {
      v11 = 0;
    }
    *(_QWORD *)a1 = v3;
    *(_OWORD *)(a1 + 8) = v20;
    _mm_storel_ps((double *)(a1 + 24), v21);
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 40) = v11;
    *(_DWORD *)(a1 + 44) = v2;
  }
  return a1;
}