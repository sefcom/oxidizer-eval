__int64 __fastcall uu_mkdir::get_mode(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r13
  unsigned int v12; // ebp
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r13
  unsigned int umask; // eax
  __int64 v19; // rax
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  __int64 v23; // rbx
  __int64 v24; // r13
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // ecx
  _BYTE v28[24]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v29; // [rsp+20h] [rbp-E8h]
  __int64 v30; // [rsp+28h] [rbp-E0h]
  __int64 v31; // [rsp+38h] [rbp-D0h]
  __int128 v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h]
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h]
  _QWORD v36[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+78h] [rbp-90h] BYREF
  __int64 v38; // [rsp+88h] [rbp-80h]
  _QWORD v39[2]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v40[48]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v41; // [rsp+D0h] [rbp-38h]

  v4 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v39, a2, aMode, 4LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aMode, 4LL, v39);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 16);
    <char as core::str::pattern::Pattern>::into_searcher(v40, v6, v7);
    v39[0] = 0LL;
    v39[1] = v7;
    v41 = 1;
    v8 = core::str::iter::SplitInternal<P>::next(v39);
    v31 = a1;
    if ( v8 )
    {
      v10 = v8;
      v11 = v9;
      if ( a3 )
      {
        v12 = 511;
        while ( 1 )
        {
          v34 = v10;
          v35 = v11;
          *(_QWORD *)v28 = v10;
          *(_QWORD *)&v28[8] = v10 + v11;
          v14 = core::iter::traits::iterator::Iterator::try_fold(v28);
          if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v14) )
          {
            uucore::features::mode::parse_numeric(v28, v12, v6, v7, 1LL);
            v15 = *(_QWORD *)v28;
            if ( *(_QWORD *)v28 != 0x8000000000000000LL )
              goto LABEL_23;
            v12 = *(_DWORD *)&v28[8];
          }
          else
          {
            v36[0] = &v34;
            v36[1] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v28 = &off_121808;
            *(_QWORD *)&v28[8] = 1LL;
            v30 = 0LL;
            *(_QWORD *)&v28[16] = v36;
            v29 = 1LL;
            core::option::Option<T>::map_or_else(&v37, v28);
            v16 = v38;
            v33 = v38;
            v32 = v37;
            v17 = *((_QWORD *)&v37 + 1);
            umask = uucore::features::mode::get_umask();
            uucore::features::mode::parse_symbolic(v28, v12, v17, v16, umask, 1LL);
            v19 = *(_QWORD *)v28;
            if ( *(_QWORD *)v28 != 0x8000000000000000LL )
              goto LABEL_24;
            v12 = *(_DWORD *)&v28[8];
            core::ptr::drop_in_place<alloc::string::String>(&v32);
          }
          v10 = core::str::iter::SplitInternal<P>::next(v39);
          v11 = v13;
          if ( !v10 )
            goto LABEL_13;
        }
      }
      v12 = 511;
      while ( 1 )
      {
        v34 = v10;
        v35 = v11;
        *(_QWORD *)v28 = v10;
        *(_QWORD *)&v28[8] = v10 + v11;
        v22 = core::iter::traits::iterator::Iterator::try_fold(v28);
        if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v22) )
        {
          uucore::features::mode::parse_numeric(v28, v12, v6, v7, 1LL);
          v15 = *(_QWORD *)v28;
          if ( *(_QWORD *)v28 != 0x8000000000000000LL )
          {
LABEL_23:
            v26 = *(_DWORD *)&v28[8];
            v4 = v31;
            *(_DWORD *)(v31 + 20) = *(_DWORD *)&v28[20];
            *(_QWORD *)(v4 + 12) = *(_QWORD *)&v28[12];
            *(_QWORD *)v4 = v15;
            *(_DWORD *)(v4 + 8) = v26;
            return v4;
          }
          v12 = *(_DWORD *)&v28[8];
        }
        else
        {
          <T as alloc::slice::hack::ConvertVec>::to_vec(v28, v10, v11);
          v23 = *(_QWORD *)&v28[16];
          v33 = *(_QWORD *)&v28[16];
          v32 = *(_OWORD *)v28;
          v24 = *(_QWORD *)&v28[8];
          v25 = uucore::features::mode::get_umask();
          uucore::features::mode::parse_symbolic(v28, v12, v24, v23, v25, 1LL);
          v19 = *(_QWORD *)v28;
          if ( *(_QWORD *)v28 != 0x8000000000000000LL )
          {
LABEL_24:
            v27 = *(_DWORD *)&v28[8];
            v4 = v31;
            *(_DWORD *)(v31 + 20) = *(_DWORD *)&v28[20];
            *(_QWORD *)(v4 + 12) = *(_QWORD *)&v28[12];
            *(_QWORD *)v4 = v19;
            *(_DWORD *)(v4 + 8) = v27;
            core::ptr::drop_in_place<alloc::string::String>(&v32);
            return v4;
          }
          v12 = *(_DWORD *)&v28[8];
          core::ptr::drop_in_place<alloc::string::String>(&v32);
        }
        v10 = core::str::iter::SplitInternal<P>::next(v39);
        v11 = v21;
        if ( !v10 )
          goto LABEL_13;
      }
    }
    v12 = 511;
LABEL_13:
    v4 = v31;
  }
  else
  {
    v12 = ~(unsigned __int16)uucore::features::mode::get_umask() & 0x1FF;
  }
  *(_DWORD *)(v4 + 8) = v12;
  *(_QWORD *)v4 = 0x8000000000000000LL;
  return v4;
}
