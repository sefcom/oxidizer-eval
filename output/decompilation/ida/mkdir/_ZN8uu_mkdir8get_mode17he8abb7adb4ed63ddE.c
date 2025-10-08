__int64 __fastcall uu_mkdir::get_mode(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ebp
  unsigned __int8 v11; // al
  void *v12; // rax
  void *v13; // rbx
  __int64 v14; // r13
  __int64 v15; // r14
  unsigned int umask; // eax
  void *v17; // rax
  _QWORD *v19; // r12
  __int64 v20; // rbx
  __int64 v21; // r13
  unsigned __int8 v22; // al
  _QWORD *v23; // r14
  __int64 v24; // r12
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // ecx
  void *v28; // [rsp+8h] [rbp-F0h] BYREF
  __int128 v29; // [rsp+10h] [rbp-E8h]
  __int64 v30; // [rsp+20h] [rbp-D8h]
  __int64 v31; // [rsp+28h] [rbp-D0h]
  __int64 v32; // [rsp+38h] [rbp-C0h]
  __int64 v33; // [rsp+40h] [rbp-B8h]
  __int64 v34; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-A8h]
  _QWORD v36[2]; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v37[3]; // [rsp+68h] [rbp-90h] BYREF
  _QWORD v38[2]; // [rsp+80h] [rbp-78h] BYREF
  char v39[48]; // [rsp+90h] [rbp-68h] BYREF
  __int16 v40; // [rsp+C0h] [rbp-38h]

  v4 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v38);
  v5 = clap_builder::parser::error::MatchesError::unwrap(v38);
  if ( v5 )
  {
    v6 = v5;
    v32 = a1;
    v7 = *(_QWORD *)(v5 + 16);
    <char as core::str::pattern::Pattern>::into_searcher(v39, *(_QWORD *)(v5 + 8), v7);
    v38[0] = 0LL;
    v38[1] = v7;
    v40 = 1;
    v8 = core::str::iter::SplitInternal<P>::next(v38);
    if ( v8 )
    {
      v33 = v6;
      v10 = 511;
      if ( a3 )
      {
        while ( 1 )
        {
          v34 = v8;
          v35 = v9;
          v28 = (void *)v8;
          *(_QWORD *)&v29 = v8 + v9;
          v11 = core::iter::traits::iterator::Iterator::try_fold(&v28);
          if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v11) )
          {
            uucore::features::mode::parse_numeric(&v28, v10, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16), 1LL);
            v12 = v28;
            if ( v28 != (void *)0x8000000000000000LL )
              goto LABEL_23;
            v10 = v29;
          }
          else
          {
            v36[0] = &v34;
            v36[1] = <&T as core::fmt::Display>::fmt;
            v28 = &off_EDE00;
            *(_QWORD *)&v29 = 1LL;
            v31 = 0LL;
            *((_QWORD *)&v29 + 1) = v36;
            v30 = 1LL;
            core::option::Option<T>::map_or_else(v37, &v28);
            v13 = (void *)v37[0];
            v14 = v37[1];
            v15 = v37[2];
            umask = uucore::features::mode::get_umask();
            uucore::features::mode::parse_symbolic(&v28, v10, v14, v15, umask, 1LL);
            v17 = v28;
            if ( v28 != (void *)0x8000000000000000LL )
              goto LABEL_24;
            v10 = v29;
            core::ptr::drop_in_place<alloc::string::String>(v13, v14);
            v6 = v33;
          }
          v8 = core::str::iter::SplitInternal<P>::next(v38);
          if ( !v8 )
            goto LABEL_13;
        }
      }
      v19 = v38;
      while ( 1 )
      {
        v34 = v8;
        v35 = v9;
        v20 = v9;
        v21 = v8;
        v28 = (void *)v8;
        *(_QWORD *)&v29 = v8 + v9;
        v22 = core::iter::traits::iterator::Iterator::try_fold(&v28);
        if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v22) )
        {
          uucore::features::mode::parse_numeric(&v28, v10, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16), 1LL);
          v12 = v28;
          if ( v28 != (void *)0x8000000000000000LL )
          {
LABEL_23:
            v26 = v29;
            v4 = v32;
            *(_DWORD *)(v32 + 20) = HIDWORD(v29);
            *(_QWORD *)(v4 + 12) = *(_QWORD *)((char *)&v29 + 4);
            *(_QWORD *)v4 = v12;
            *(_DWORD *)(v4 + 8) = v26;
            return v4;
          }
          v10 = v29;
        }
        else
        {
          v23 = v19;
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v28, v21, v20);
          v13 = v28;
          v24 = *((_QWORD *)&v29 + 1);
          v14 = v29;
          v25 = uucore::features::mode::get_umask();
          uucore::features::mode::parse_symbolic(&v28, v10, v14, v24, v25, 1LL);
          v17 = v28;
          if ( v28 != (void *)0x8000000000000000LL )
          {
LABEL_24:
            v27 = v29;
            v4 = v32;
            *(_DWORD *)(v32 + 20) = HIDWORD(v29);
            *(_QWORD *)(v4 + 12) = *(_QWORD *)((char *)&v29 + 4);
            *(_QWORD *)v4 = v17;
            *(_DWORD *)(v4 + 8) = v27;
            core::ptr::drop_in_place<alloc::string::String>(v13, v14);
            return v4;
          }
          v19 = v23;
          v10 = v29;
          core::ptr::drop_in_place<alloc::string::String>(v13, v14);
          v6 = v33;
        }
        v8 = core::str::iter::SplitInternal<P>::next(v19);
        if ( !v8 )
          goto LABEL_13;
      }
    }
    v10 = 511;
LABEL_13:
    v4 = v32;
  }
  else
  {
    v10 = ~(unsigned __int16)uucore::features::mode::get_umask() & 0x1FF;
  }
  *(_DWORD *)(v4 + 8) = v10;
  *(_QWORD *)v4 = 0x8000000000000000LL;
  return v4;
}